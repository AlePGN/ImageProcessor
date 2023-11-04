#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setup();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setup()
{
    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::showCVImage);
}

void MainWindow::showCVImage()
{
    int width = 640, height = 480;
    cv::Mat src(height, width, CV_8UC3, cv::Scalar(0,0,0));
    cv::imshow("image1 16UC3",src);
    qDebug()<<"done";
}
