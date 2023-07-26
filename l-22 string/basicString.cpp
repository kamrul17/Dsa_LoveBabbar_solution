#include <iostream>
#include <string.h>
using namespace std;
void reverseString(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char ch[10];
    cout << "enter your name " << endl;
    cin >> ch;
    // ch[2] = '\0';
    cout << " your name is :" << ch << endl;
    int len = getLength(ch);
    cout << "length of string " << len << endl;
    reverseString(ch, len);
    cout << " reverse of ur name is " << ch << endl;
    // cout << " your name is :" << ch << endl;
    return 0;
}