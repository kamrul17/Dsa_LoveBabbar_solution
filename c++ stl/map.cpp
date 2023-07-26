#include <iostream>
#include <map>
using namespace std;
void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    map<int, string> m;
    m[12] = "first";
    m[2] = "two";
    m[3] = "third";
    m[3] = "third";
    m.insert({5, "five"});
    print(m);
    // for (auto &pr : m)
    // {
    //     cout << pr.first << " " << pr.second << endl;
    //     }
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    //     // cout << "finding -12 " << m.count(1) << endl;
    // }
    // // finding 12 present or not
    // cout << "finding -12 " << m.count(12);
    // cout << endl;
    // cout << "finding -12 " << m.count(1);
    return 0;
}
