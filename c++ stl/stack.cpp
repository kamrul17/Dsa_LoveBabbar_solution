#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<string> s;
    s.push("one");
    s.push("two");
    s.push("three");
    cout << "top element is " << s.top() << endl;
    s.pop();
    cout << "top element is " << s.top() << endl;

    cout << "empty or not " << s.empty() << endl;
}