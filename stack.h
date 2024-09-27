//
//  stack.h
//  stack
//
//  Created by Mingze Lee on 2024/9/27.
//

#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &);
    bool pop(Item &);
};

#endif
