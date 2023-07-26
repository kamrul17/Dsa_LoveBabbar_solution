#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
// char toLowerCase(char ch)
// {
//     if (ch >= '0' && ch <= '99')
//     {
//         return ch;
//     }
//     else
//     {
//         char temp = ch - '0';
//         return temp;
//     }
// }
// char toLowerCase(char ch)
// {
//     if (ch >= 'A' && ch <= 'Z')
//     {
//         return ch;
//     }
//     else
//     {
//         char temp = ch - 'a' + 'A';
//         return temp;
//     }
// }
// bool isPalindrome(char name[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         if (name[s] != name[e])
//         {
//             return false;
//         }
//         else
//         {
//             s++;
//             e--;
//         }
//     }
//     return true;
// }
bool isPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (toLowerCase(name[s]) != toLowerCase(name[e]))
        {
            return false;
        }
        else
        {

            s++;
            e--;
        }
    }
    return true;
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
    if (isPalindrome(ch, len))
    {
        cout << " ur name is palindrome " << endl;
    }
    else
    {
        cout << " ur name is NOT a palindrome " << endl;
    }
    cout << " lowerCase of character " << toLowerCase('Z') << endl;
    cout << " lowerCase of character " << toLowerCase('A') << endl;
    // cout << " lowerCase of character " << toLowerCase('9') << endl;
    // cout << " lowerCase of character " << toLowerCase('8') << endl;
    return 0;
}