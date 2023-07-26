#include <iostream>
#include <list>

using namespace std;
int main()
{
    list<int> l;
    // list<int> n(l);
    list<int> n(5, 100);
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    for (int i : n)
    {
        cout << i << " ";
    }
    // l.erase(l.begin());
    cout << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << "size of list " << l.size() << endl;

    return 0;
}