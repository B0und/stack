#ifndef MY_STACK_H
#define MY_STACK_H

template <typename T>
class MY_STACK
{
    public:
        MY_STACK();
        ~MY_STACK();

    private:

    struct Node {
        T value_;
        Node* next_;

        Node(T& elem) : value_(elem), next_(nullptr)
        {}
    };
    unsigned counter_;
    Node* head_;
};

#endif // MY_STACK_H
