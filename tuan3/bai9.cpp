#include <iostream>
#include <string>

using namespace std;

string replaceStartEnd(string str)
{
    int i = 0;
    while (str[i] == ' ')
    {
        str[i] = '_';
        i++;
    }
    int j = str.length() - 1;
    while (str[j] == ' ')
    {
        str[j] = '_';
        j--;
    }
    return str;
}

string replaceDoubleWhite(string str)
{
    while (str.find("  ") != string::npos)
        str.replace(str.find("  "), 2, " ");
    return str;
}

string restoreWhiteSpace(string str)
{
    while (str.find("_") != string::npos)
        str.replace(str.find("_"), 1, " ");
    return str;
}

int main()
{
    string str;
    getline(cin, str);

    cout << restoreWhiteSpace(replaceDoubleWhite(replaceStartEnd(str))) << endl;
}