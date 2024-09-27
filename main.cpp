//
//  main.cpp
//  stack
//
//  Created by Mingze Lee on 2024/9/27.
//

#include <iostream>
#include "stack.h"

int main()
{
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "Please enter A to add purchase order,\n"
    << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get()!= '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'a':
            case 'A':
                cout << "Enter a PO numebr to add: ";
                cin >> po;
                if (st.isfull())
                    cout << "Stack is already full.\n";
                else
                    st.push(po);
                break;
            case 'p':
            case 'P':
                if (st.isempty())
                    cout << "Stack is already empty.\n";
                else
                {
                    st.pop(po);
                    cout << "PO #" << po << " popped.\n";
                }
                break;
        }
    }
    cout << "bye!\n";
    return 0;
}
