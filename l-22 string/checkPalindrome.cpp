#include <iostream>
#include <string>
using namespace std;
char toLowerCase(char s)
{
    if (s >= 'A' && s <= 'Z')
    {
        char ch = s - 'A' + 'a'; //  -> this is how you convert upper case into lower case
        return ch;
    }
    if (s >= '0' && s <= '9' || s >= 'a' && s <= 'z')
    {
        return s;
    }    // no need of conversion if it is nemeric or lower case
    else // ->  else statement is for all other things e.g whitespaces &
    {
        return 'f';
    } // special character
}
bool checkPalindrome(string s)
{
    int start = 0, end = s.size() - 1;
    while (start <= end)
    {
        char ch1 = toLowerCase(s[start]); // function call for 1st element
        char ch2 = toLowerCase(s[end]);   // function call for last element
        if (ch1 == 'f')                   // -> skip the iteration since it is either whitespace or
        {
            start++;
            continue;
        } // special character
        else if (ch2 == 'f')
        {
            end--;
            continue;
        }
        else if (ch1 == ch2) // -> check next if 1st element is equal to last element
        {
            start++;
            end--;
        }
        else
        {
            return 0;
        } // if not equal then it is not palindrome
    }
}
int main()
{
    string name;
    // getline(cin, name);
    cout << "enter your name " << name << endl;
    cin >> name;
    if (checkPalindrome(name))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}