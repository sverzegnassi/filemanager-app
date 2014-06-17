#ifndef XDGUSERDIR_H
#define XDGUSERDIR_H

#include <QObject>
#include <QStandardPaths>

class XdgUserDir : public QAbstractListModel
{
    Q_OBJECT

    Q_PROPERTY(QString locationHome READ locationHome CONSTANT)
    Q_PROPERTY(QString locationDocuments READ locationDocuments CONSTANT)
    Q_PROPERTY(QString locationDownloads READ locationDownloads CONSTANT)
    Q_PROPERTY(QString locationMusic READ locationMusic CONSTANT)
    Q_PROPERTY(QString locationPictures READ locationPictures CONSTANT)
    Q_PROPERTY(QString locationVideos READ locationVideos CONSTANT)

public:
    explicit XdgUserDir(QObject *parent = 0);
    ~XdgUserDir();
    QString locationHome() const;
    QString locationDocuments() const;
    QString locationDownloads() const;
    QString locationMusic() const;
    QString locationPictures() const;
    QString locationVideos() const;
    int rowCount(const QAbstractListModel &parent);
    data(const QModelIndex &index, int role);
    QHash<int, QByteArray> roleNames() const;

private:
    QString standardLocation(QStandardPaths::StandardLocation location) const;
};

#endif // XDGUSERDIR_H



