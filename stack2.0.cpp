//
//  stack2.0.cpp
//  stack2.0
//
//  Created by Mingze Lee on 2024/9/30.
//

#include "stack2.0.h"
#include <iostream>

Stack::Stack(int n)
{
    top = n;
    pitems = new Item [n];
}

Stack::Stack(const Stack & st)
{
    top = st.top;
    for (int i = 0; i < top; ++i)
        *(pitems + i) = *(st.pitems + 1);
}

Stack::~Stack()
{
    delete [] pitems;
}

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
    *(pitems + top) = item;
    ++top;
    return true;
}

bool Stack::pop(Item & item)
{
    if (top == 0)
        return false;
    --top;
    item = *(pitems + top);
    return true;
}

Stack & Stack::operator=(const Stack & st)
{
    if (this == & st)
        return * this;
    top = st.top;
    for (int i = 0; i < top; ++i)
        *(pitems + i) = *(st.pitems + i);
    return * this;
}
