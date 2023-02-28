#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(QSize(300, 425));
    ui.setupUi(this);

    ui.exitDir_btn->hide();

    ui.currentSong_label->setText(defaultTitle + "none");
    ui.volume_slider->setSliderPosition(100);

    connect(ui.openDir_btn, &QPushButton::clicked, this, readDir);
    connect(ui.play_btn, &QPushButton::clicked, this, play);
    connect(ui.next_btn, &QPushButton::clicked, this, playNext);
    connect(ui.prev_btn, &QPushButton::clicked, this, playPrevious);
    connect(ui.exitDir_btn, &QPushButton::clicked, this, exitDir);
}

MainWindow::~MainWindow()
{
}

void MainWindow::readDir()
{
    tracks.clear();
    std::string path;
    path = QFileDialog::getExistingDirectory(this, tr("Open directory")).toUtf8().toStdString();
    // search for music tracks in the directory and add them to the vector
    if (path == "")
    {
        isDirOpened = false;
        return;
    }
    for (auto &entry : std::filesystem::directory_iterator(path))
    {
        if (entry.path().extension() == ".mp3" || entry.path().extension() == ".ogg" ||
            entry.path().extension() == ".wav")
        {
            // we send a structure with path to a track and it's name
            tracks.push_back(track{entry.path().string(), entry.path().filename().string()});
        }
    }
    // if tracks weren't found
    if (tracks.size() < 1)
    {
        isDirOpened = false;
        QMessageBox::information(this, "Music not found", "This directory doesn't contain any music!");
        return;
    }
    isDirOpened = true;
    ui.exitDir_btn->show();
    this->setWindowTitle(QString::fromStdString(path));

    player = new QMediaPlayer;
    audio = new QAudioOutput;

    player->setAudioOutput(audio);
    connect(player, &QMediaPlayer::durationChanged, ui.duration_slider, &QSlider::setMaximum);
    connect(player, &QMediaPlayer::positionChanged, ui.duration_slider, &QSlider::setValue);
    connect(ui.duration_slider, &QSlider::sliderMoved, player, &QMediaPlayer::setPosition);

    connect(ui.volume_slider, &QSlider::sliderMoved, this, setAudioVolume);
    counter = 0;
    ui.play_btn->setIcon(QIcon(":/img/images/play.png"));
}

void MainWindow::exitDir()
{
    disconnect(player, &QMediaPlayer::durationChanged, ui.duration_slider, &QSlider::setMaximum);
    disconnect(player, &QMediaPlayer::positionChanged, ui.duration_slider, &QSlider::setValue);
    disconnect(ui.duration_slider, &QSlider::sliderMoved, player, &QMediaPlayer::setPosition);

    if (player != nullptr)
        delete player;
    if (audio != nullptr)
        delete audio;
    isDirOpened = false;
    tracks.clear();
    ui.exitDir_btn->hide();
    ui.currentSong_label->setText(defaultTitle + "none");
    ui.play_btn->setIcon(QIcon(":/img/images/play.png"));
    this->setWindowTitle("Music Player");
}

void MainWindow::playNext()
{
    if(++counter >= tracks.size())
        counter = 0;
    isNew = true;
    isPaused = true;
    play();
    ui.play_btn->setIcon(QIcon(":/img/images/pause.png"));
}
void MainWindow::playPrevious()
{
    if(--counter < 0)
        counter = 0;
    isPaused = true;
    isNew = true;
    play();
    ui.play_btn->setIcon(QIcon(":/img/images/pause.png"));
}

// this function is needed because slider has the range of 0-100 and volume from 0 to 1 so we need to divide it
void MainWindow::setAudioVolume(int value)
{
    audio->setVolume(float(value * 0.01f));
}

// play/pause the track in addition to it isPaused value
void MainWindow::play()
{
    if (!isDirOpened)
    {
        QMessageBox::critical(this, "Open a folder", "You didn't open any folder");
        return;
    }

    // check if we need to play new track or contine old
    if(isNew)
    {
        player->setSource(QUrl::fromLocalFile(QString::fromStdString(tracks[counter].path)));

        ui.currentSong_label->setText(defaultTitle + QString::fromStdString(tracks[counter].name));

        audio->setVolume(100);

    }
    // if the track was played and not switched then we need to set isNew to false 
    isNew = false;

    // play/pause handling
    if(isPaused)
    {
        player->play();
        isPaused = false;
        ui.play_btn->setIcon(QIcon(":/img/images/pause.png"));
    }
    else
    {
        player->pause();
        isPaused = true;
        ui.play_btn->setIcon(QIcon(":/img/images/play.png"));
    }

}
