#include <iostream>
using namespace std;

class numbersum
{
private:
	int start, end;
	int even = 0, odd = 0;

public:
	void range();
	void sum();
	int geteven();
	int getodd();
};

void numbersum::range()
{
	cout << "Give Range: ";
	cin >> start >> end;
}

void numbersum::sum()
{
	for (int i = start; i <= end; i++)
	{
    	if (i % 2 == 0)
        	even += i;
    	else
        	odd += i;
	}
}

int numbersum::geteven()
{
	return even;
}

int numbersum::getodd()
{
	return odd;
}

void display(numbersum n)
{
	cout << "Sum of even numbers = " << n.geteven();
	cout << "\nSum of odd numbers = " << n.getodd();
}

int main()
{
	numbersum n;
	n.range();
	n.sum();
	display(n);

	return 0;
}
