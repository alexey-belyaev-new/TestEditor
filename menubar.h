#ifndef MENUBAR_H
#define MENUBAR_H

#include <QMenuBar>
#include <QTabWidget>

class MenuBar : public QMenuBar{
    Q_OBJECT
public:
    explicit MenuBar(QWidget *parent = nullptr);
protected:

private:
    QMenu *fileMenu;
    QAction *newAct;
    QMenu *editMenu;
    QTabWidget *tabWidget;

private slots:
    void newFile();
    void openFile();
    void saveFiles();
    void saveAsFile();
    void print();

};

#endif // MENUBAR_H
