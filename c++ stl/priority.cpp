#include <iostream>
#include <queue>

using namespace std;
int main()
{
    // ṃax-heap
    priority_queue<int> maxi;
    //   min-heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(10);
    maxi.push(22);
    maxi.push(33);
    maxi.push(44);
    cout << "size " << maxi.size();
    cout << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    mini.push(10);
    mini.push(22);
    mini.push(33);
    mini.push(44);
    int m = mini.size();
    for (int i = 0; i < n; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
    cout << "empty or not " << mini.empty();
}