#include <iostream>
#include "ArrayStack.hpp"

using namespace std;

template <typename T>
void testRotate(ArrayStack<T> &s)
{
    cout << "Original stack:\n";
    cout << s << endl;

    s.rotate(Stack<T>::RIGHT);

    cout << "After RIGHT rotate:\n";
    cout << s << endl;

    s.rotate(Stack<T>::LEFT);

    cout << "After LEFT rotate:\n";
    cout << s << endl;
}

int main()
{
    ArrayStack<int> s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << s << endl;

    cout << "Top element: " << s.peek() << endl;

    s.pop();

    cout << "After pop:\n";
    cout << s << endl;

    testRotate(s);

    return 0;
}