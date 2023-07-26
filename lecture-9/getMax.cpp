#include <iostream>
using namespace std;

int getMax(int num[], int n)
{
    // int max = INT8_MIN;
    int maxi = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
    }
    return maxi;
}
int getMin(int num[], int n)
{
    // int min = INT8_MAX;
    int mini = INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, num[i]);
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
    }
    return mini;
}
int main()
{
    int size;
    cin >> size;
    int num[100];
    // taking input
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum is :" << getMax(num, size) << endl;
    cout << "Minimum is :" << getMin(num, size) << endl;
    return 0;
}