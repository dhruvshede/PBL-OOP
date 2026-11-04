
#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char str[100];

public:

    // Default Constructor
    String()
    {
        strcpy(str, "");
        cout << "\nConstructor called";
    }

    // Accept function
    void accepts()
    {
        cout << "\nEnter a string: ";
        cin.getline(str, 100);
    }

    // Display function
    void display()
    {
        cout << "\nThe string is: " << str << endl;
    }

    // Destructor
    ~String()
    {
        cout << "Destructor called";
    }
};

int main()
{
    String s;

    s.accepts();
    s.display();

    return 0;
}
