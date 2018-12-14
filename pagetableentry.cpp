#include "pagetableentry.h"

PageTableEntry::PageTableEntry(QObject *parent) : QObject(parent)
{

}

int PageTableEntry::getPage()
{
    return this->page;
}

int PageTableEntry::getFrame()
{
    return this->frame;
}

bool PageTableEntry::isDirty()
{
    return this->dirty;
}

void PageTableEntry::setPage(int page)
{
    this->page = page;
}

void PageTableEntry::setFrame(int frame)
{
    this->frame = frame;
}

void PageTableEntry::setDirty(bool dirty)
{
    this->dirty = dirty;
}
