#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<string> s;
    s.push("one");
    s.push("two");
    s.push("three");
    cout << "first element is " << s.front() << endl;
    s.pop();
    cout << "first element is " << s.front() << endl;
    cout << "size " << s.size() << endl;

    cout << "empty or not " << s.empty() << endl;
}