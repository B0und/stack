#include "MY_STACK.h"


template <typename T> MY_STACK <T>::MY_STACK()
{
    head_ = nullptr;
    counter_ = 0;

}


template <typename T> MY_STACK <T>::~MY_STACK()
{
    Node* node = head_;
    Node* next;

    while (node) {
        next = node->next_;
        delete node;
        node = next;
    }
}
