#ifndef MY_STACK_H
#define MY_STACK_H

template <typename T>
class MY_STACK
{
    public:
        MY_STACK() : head_(nullptr), counter_(0) 
		{}
        ~MY_STACK()
		{
    Node* node = head_;
    Node* next;

    while (node) {
        next = node->next_;
        delete node;
        node = next;
    }
		}

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
