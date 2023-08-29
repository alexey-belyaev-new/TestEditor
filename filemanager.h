#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QFileSystemModel>
#include <QTreeView>
#include <QMouseEvent>


class FileManager : public QTreeView{
    //Q_OBJECT
public:
    explicit FileManager(QWidget *parent = nullptr);
    void mouseDoubleClickEvent(QMouseEvent *event) override;
private:
    QFileSystemModel * fileSystem;
};

#endif // FILEMANAGER_H
