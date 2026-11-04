#include <iostream>
using namespace std;

// Class Template
template <class T>
class Test
{
    T a, b;

public:
    void read()
    {
        cout << "Enter two values: ";
        cin >> a >> b;
    }

    void display()
    {
        cout << "Values are: " << a << " " << b << endl;
    }
};

// Function Template
template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    // Class Template
    Test<int> obj;
    obj.read();
    obj.display();

    // Function Template
    int x, y;

    cout << "\nEnter two numbers for addition: ";
    cin >> x >> y;

    cout << "Sum = " << add(x, y);

    return 0;
}
