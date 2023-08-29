#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "menubar.h"

#include <QListView>
#include <QMainWindow>
#include <QSplitter>
#include <QTextEdit>
#include <QTreeView>
#include <filemanager.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

private:
    Ui::MainWindow *ui;
    QSplitter *splitter;
    QTextEdit *textedit;
    FileManager *fileManager;
    MenuBar *menuBar;

};
#endif // MAINWINDOW_H
