#include <iostream>
#include <vector>
using namespace std;
void merge2SortedArray(int arr1[], int m, int arr2[], int n, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < m)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void printArr3(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {3, 4, 5};
    int arr3[8] = {0};

    // vector<int> v1;
    // v1.push_back(1);
    // v1.push_back(2);
    // v1.push_back(3);
    // vector<int> v2;
    // v2.push_back(2);
    // v2.push_back(2);
    // v2.push_back(3);
    // vector<int> v3;
    // cout << v.size() << endl;
    merge2SortedArray(arr1, 5, arr2, 3, arr3);
    printArr3(arr3, 8);

    // for (int i = v.size() - 1; i >= 0; i--)
    // {
    //     cout << v[i] << " ";
    // }
}