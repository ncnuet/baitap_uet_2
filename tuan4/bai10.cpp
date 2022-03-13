#include <iostream>
#include <string>

using namespace std;

string toLower(string s)
{
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    return s;
}

int main()
{
    string s;
    getline(cin, s);
    s = toLower(s);
    cout << s;
    return 0;
}