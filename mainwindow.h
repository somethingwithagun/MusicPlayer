#pragma once
#include "ui_mainwindow.h"

#include <QtWidgets/QMainWindow>
#include <QPushButton>
#include <QFileDialog>
#include <QMessageBox>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QResource>

#include <filesystem>
#include <string>

class MainWindow : public QMainWindow
{
  public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
  private:
    void readDir();
    void exitDir();
    void play();
    void playNext();
    void playPrevious();
    void setAudioVolume(int value);
    Ui::MainWindowClass ui;
  
  private:
    int counter;
    QString defaultTitle = "Current track: ";
    QMediaPlayer *player = nullptr;
    QAudioOutput *audio = nullptr;
    bool isDirOpened = false;
    bool isPaused = true;
    bool isNew = true;
    struct track
    {
        std::string path;
        std::string name;
    };
    std::vector<track> tracks;
};