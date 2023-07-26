// Search element in an array
#include <iostream>
#include <stdio.h>
using namespace std;
bool searchElement(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter key to be found " << endl;
    int key;
    cin >> key;
    bool found = searchElement(arr, size, key);
    if (found)
    {
        cout << "element is present" << endl;
    }
    else
    {
        cout << "element is absent" << endl;
    }

    return 0;
}