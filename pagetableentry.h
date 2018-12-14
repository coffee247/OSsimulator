#ifndef PAGETABLEENTRY_H
#define PAGETABLEENTRY_H

#include <QObject>

class PageTableEntry : public QObject
{
    Q_OBJECT
public:
    explicit PageTableEntry(QObject *parent = nullptr);

    int getPage();
    int getFrame();
    bool isDirty();

    void setPage(int page);
    void setFrame(int frame);
    void setDirty(bool dirty);

signals:

public slots:

private:
    int page;
    int frame;
    bool dirty = false;
};

#endif // PAGETABLEENTRY_H
