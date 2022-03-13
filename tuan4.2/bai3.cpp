#include <iostream>
using namespace std;

// C1:
bool isPalindrome(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i])
            return false;
    return true;
}

int palindromeIndex(string s)
{
    if (isPalindrome(s))
        return -1;
    
    for (int i = 0; i < s.size() /2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            if (isPalindrome(s.substr(0, i) + s.substr(i + 1)))
                return i;
            if (isPalindrome(s.substr(0, s.size() - 1 - i) + s.substr(s.size() - 1 - i + 1)))
                return s.size() - 1 - i;
        }
    }
    return -1;
}

// C2:
//  int palindromeIndex(string s) {

// }

int main()
{
    string s = "bcab";
    cout << palindromeIndex(s) << endl;
}