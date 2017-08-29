//#include "MY_STACK.h"
#include <cassert>

template <typename T>
void MY_STACK<T>::push(const T&& val)
{
    assert(counter_ < LIMIT);
    head_ = new Node(val,head_);
    ++counter_;
}

template <typename T>
void MY_STACK<T>::pop()
{
    assert(counter_ != 0);
    Node* old = head_;
    head_ = head_->next_;
    delete old;
    --counter_;
}
