//
//  stacktp.h
//  Stack_template
//
//  Created by Mingze Lee on 2024/10/2.
//

#ifndef STACKTP_H_
#define STACKTP_H_

template <class Type>

class Stack
{
private:
    enum {MAX = 30};
    Type items_[MAX];
    int top_;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Type &);
    bool pop(Type &);
};


template <class Type>
Stack<Type>::Stack()
{
    top_ = 0;
}

template <class Type>
bool Stack<Type>::isempty() const
{
    return (top_ == 0);
}

template <class Type>
bool Stack<Type>::isfull() const
{
    return (top_ == MAX);
}

template <class Type>
bool Stack<Type>::push(const Type & item)
{
    if (top_ == MAX)
        return false;
    items_[top_++] = item;
    return true;
}

template <class Type>
bool Stack<Type>::pop(Type & item)
{
    if (top_ == 0)
        return false;
    item = items_[--top_];
    return false;
}

#endif
