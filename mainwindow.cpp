#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <filemanager.h>
#include <menubar.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    menuBar = new MenuBar(parent);
    setMenuBar(menuBar);
    splitter = new QSplitter(parent);
    //QTextEdit *textedit = new QTextEdit;
    fileManager = new FileManager(parent);
    splitter->addWidget(fileManager);
    //splitter->addWidget(textedit);
    setCentralWidget(splitter);
    splitter->setStretchFactor(1,3);
}

MainWindow::~MainWindow()
{
    delete ui;
}
