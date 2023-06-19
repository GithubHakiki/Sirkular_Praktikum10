#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    Queue q1;
    q1.push(9);
    q1.push(12);
    q1.push(4);
    q1.push(43);
    q1.push(10);
    
    cout << "size    : " << q1.size() << endl;
    cout << "front   : " << q1.front() << endl;
    cout << "back    : " << q1.back() << endl;
    cout << "elements: ";
    
    while (!q1.empty())
    {
        cout << q1.front() << ' ';
        q1.pop();
    }
    cout << endl;
    
    return 0;
}

