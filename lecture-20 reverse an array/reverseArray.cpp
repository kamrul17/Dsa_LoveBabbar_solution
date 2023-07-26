#include <iostream>
#include <vector>
using namespace std;
vector<int> reverseArray(vector<int> v)
{
    int s = 0;
    int end = v.size() - 1;

    while (s <= end)
    {
        swap(v[s], v[end]);
        s++;
        end--;
    }
    return v;
}

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(1);
    v.push_back(21);
    v.push_back(3);
    v.push_back(10);
    cout << v.size() << endl;
    vector<int> ans = reverseArray(v);
    printVector(ans);

    // for (int i = v.size() - 1; i >= 0; i--)
    // {
    //     cout << v[i] << " ";
    // }
}