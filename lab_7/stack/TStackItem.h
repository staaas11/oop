#ifndef LAB_2_TSTACKITEM_H
#define LAB_2_TSTACKITEM_H

#include "../figure/Trapeze.h"
#include "../figure/Pentagon.h"
#include "../figure/Rhombus.h"
#include "TAllocationBlock.h"

template <class T>
class TStackItem {
public:
    //type conversion
    TStackItem(const T &fig);
    //copy construct
    TStackItem(const TStackItem& orig);

    template <class A>
    friend std::ostream& operator<<(std::ostream& os, const TStackItem<A>& item);

    void SetPrev(std::shared_ptr<TStackItem<T>> prev);
    std::shared_ptr<TStackItem<T>> GetPrev();
    T GetValue() const;

    void * operator new (size_t size);
    void operator delete(void *p);

    virtual ~TStackItem();
private:
    static TAllocationBlock allocator;
    T value;
    std::shared_ptr<TStackItem<T>> prev;
};


#endif //LAB_2_TSTACKITEM_H
