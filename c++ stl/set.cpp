// in order find unique element
// will get output in sorted form i.e. increasing order
#include <iostream>
#include <iterator>
#include <set>

using namespace std;
int main()
{
    set<int, greater<int>> val = {6, 1, 0, 6};
    // set<char> a;
    // a.insert('G');
    // a.insert('F');
    // a.insert('G');
    val.begin();

    set<int, greater<int>>::iterator itr;
    for (itr = val.begin(); itr != val.end(); itr++)
    {
        cout << *itr << " ";
    }
    // cout << "not found";
    // for (int i : val)
    // {
    //     cout << i << ' ';
    // }
    // cout << '\n';

    // set<int> s;
    // s.insert(155);
    // s.insert(23);
    // s.insert(23);
    // s.insert(23);
    // s.insert(3887);
    // s.insert(3887);
    // s.insert(42);
    // s.insert(42);
    // s.insert(42);
    // for (int i : s)
    // {
    //     cout << i << " ";
    // }
    // // count is use for finding element is present or not
    // cout << endl;
    // cout << "element is present or not " << s.count(155);
}