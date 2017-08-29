#ifndef MY_STACK_H
#define MY_STACK_H
#include <stdexcept>
template <typename T>
class MY_STACK
{
private:

    struct Node
    {
        T value_;
        Node* next_;

        Node(const T& elem, Node* link = nullptr)
            : value_(elem), next_(link)
        {}
    };
    Node* head_;
    unsigned counter_;
    unsigned const LIMIT = 5;

public:
    MY_STACK() : head_(nullptr), counter_(0)
    {}
    ~MY_STACK()
    {
        Node* node = head_;
        Node* next;

        while (node)
        {
            next = node->next_;
            delete node;
            node = next;
        }
    }
    void push(const T&& val);
    void pop();
    void top()
    {
        if (empty())
        {
            throw std::out_of_range("underflow");
        }
        std::cout << head_->value_ << std::endl;
    }
    bool empty() const
    {
        return counter_ == 0;
    }
    unsigned size() const
    {
        return counter_;
    }
    bool full() const
    {
        return counter_ == LIMIT;
    }
};
#include "MY_STACK.cpp"
#endif // MY_STACK_H
