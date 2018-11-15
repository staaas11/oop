#ifndef LAB_2_TSTACK_H
#define LAB_2_TSTACK_H

#include "TStackItem.h"
#include "TIterator.h"


template <class T>
class TStackBottom {
public:
    TStackBottom();
    //copy constructor
    TStackBottom(const TStackBottom<T>& orig);

    //for rvalue
    void push(T &&trap);
    //for lvalue
    void push(T &trap);
    size_t getSize();
    bool empty();
    T pop();


    TIterator<TStackItem<T>,T> begin();
    TIterator<TStackItem<T>,T> end();


    template <class A>
    friend std::ostream& operator<<(std::ostream &os, const TStackBottom<A>& stack);

    ~TStackBottom();

private:
    std::shared_ptr<TStackItem<T>> top;
    size_t size;

};


#endif //LAB_2_TSTACK_H
