//
//  stack.cpp
//  stack
//
//  Created by Mingze Lee on 2024/9/27.
//

#include "stack.h"

Stack::Stack()
{
    top = 0;
}

Stack::~Stack() { };

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    if (top == MAX)
        return false;
    else
    {
        items[top++] = item;
        return true;
    }
}

bool Stack::pop(Item & item)
{
    if (top == 0)
        return false;
    else
    {
        item = items[--top];
        return true;
    }
}
