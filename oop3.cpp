#include <iostream>
using namespace std;

void read(int arr[], int n)
{
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sortArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapNumbers(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    read(arr, n);

    cout << "\nOriginal array: ";
    display(arr, n);

    sortArray(arr, n);

    cout << "Sorted array: ";
    display(arr, n);

    return 0;
}
