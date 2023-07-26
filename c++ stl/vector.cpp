#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // size tells about how many elements are in array
    // cappacity tells  how much space allocate for an element
    vector<int> v;
    vector<int> a(5, 1);
    vector<int> last(a);
    cout << "print a" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "capacity-> " << v.capacity() << endl;

    v.push_back(1);
    cout << "capacity-> " << v.capacity() << endl;
    v.push_back(2);
    cout << "capacity-> " << v.capacity() << endl;
    v.push_back(3);
    cout << "capacity-> " << v.capacity() << endl;
    cout << "size-> " << v.size() << endl;
    cout << "element " << v.at(2) << endl;
    cout << "element " << v.front() << endl;
    cout << "element " << v.back() << endl;
    cout << "element " << v.back() << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    v.pop_back();
    cout << endl
         << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    // for (int i = 1; i <= v.size(); i++)
    // {
    //     cout << i << " ";
    // }

    return 0;
}