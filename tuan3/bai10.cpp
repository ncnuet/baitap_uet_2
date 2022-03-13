#include <iostream>
#include <string>

using namespace std;

bool check(string username)
{
    int length = username.length();
    if (length < 6 || length > 15)
        return false;
    if (isdigit(username[0]))
        return false;
    for (int i = 0; i < username.length(); i++)
        if (!(isdigit(username[i]) || isalpha(username[i])))
            return false;
    return true;
}

int main()
{
    string username;
    getline(cin, username);

    if (check(username))
        cout << "Valid username." << endl;
    else
        cout << "Invalid username." << endl;
}