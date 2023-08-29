#include "filemanager.h"

#include <QDesktopWidget>
#include <QHeaderView>


FileManager::FileManager(QWidget *parent) : QTreeView(parent){
    fileSystem = new QFileSystemModel;
    fileSystem->setRootPath(QDir::currentPath());
    setModel(fileSystem);
    hideColumn(1);
    hideColumn(2);
    hideColumn(3);
    setMinimumWidth(240);                                                             // Минимальная ширина окна
    setMinimumHeight(480);
    setMaximumWidth(QDesktopWidget().availableGeometry(this).width() / 4);
    QModelIndex index = fileSystem->index(QDir::currentPath());
    expand(index);
    scrollTo(index);

}

void FileManager::mouseDoubleClickEvent(QMouseEvent *event)
{

    if(event->button() == Qt::LeftButton) {
        QModelIndex index = indexAt(event->pos());
        if (fileSystem->fileInfo(index).isFile()) {
            QString pathToFile = fileSystem->fileInfo(index).absoluteFilePath();
            QString fileName = fileSystem->fileName(index);
            setColumnWidth(1, 100);
            //m_MenuBar->openFileByPath(pathToFile);
        } else {
            if (isExpanded(index)) setExpanded(index, false);
            else setExpanded(index, true);
        }
    }

}
