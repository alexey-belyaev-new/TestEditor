#include "menubar.h"

#include <QTextEdit>

MenuBar::MenuBar(QWidget *parent) : QMenuBar(parent){


    fileMenu = addMenu("File");
    newAct = new QAction("New");
    fileMenu->addAction(newAct);
    connect(newAct, SIGNAL(triggered()),this, SLOT(newFile()));
    fileMenu->addAction(new QAction("Open"));
    fileMenu->addAction(new QAction("Save"));
    fileMenu->addAction(new QAction("SaveAll"));
    fileMenu->addAction(new QAction("Print"));
    fileMenu->addSeparator();
    fileMenu->addAction(new QAction("Exit"));

    editMenu = this->addMenu("Edit");
    editMenu->addAction(new QAction("Cut"));
    editMenu->addAction(new QAction("Copy"));
    editMenu->addAction(new QAction("Paste"));
}

void MenuBar::newFile()
{
    tabWidget = new QTabWidget;
    tabWidget->insertTab(tabWidget->count(), new QTextEdit(), "New Tab");
    tabWidget->setCurrentIndex(tabWidget->count());


}

void MenuBar::openFile()
{

}

void MenuBar::saveFiles()
{

}

void MenuBar::saveAsFile()
{

}

void MenuBar::print()
{

}
