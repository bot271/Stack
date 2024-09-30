//
//  stack2.0.h
//  stack2.0
//
//  Created by Mingze Lee on 2024/9/30.
//

#ifndef STACK_2_0_H_
#define STACK_2_0_H_

typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10};
    Item * pitems;
    int top;
public:
    Stack(int n = MAX);
    Stack(const Stack &);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &);
    bool pop(Item &);
    Stack & operator=(const Stack &);
};

#endif
