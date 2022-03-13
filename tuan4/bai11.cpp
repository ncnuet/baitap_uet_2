#include <iostream>
#include <string>

using namespace std;

string pigLatin(string word)
{
    string firstLetter = word.substr(0, 1);
    if (firstLetter == "a" || firstLetter == "e" || firstLetter == "i" || firstLetter == "o" || firstLetter == "u")
        return word + "way";
    else
    {
        string newWord = word.substr(1, word.length() - 1);
        return newWord + firstLetter + "ay";
    }
}

int main()
{
    string word;
    cin >> word;
    cout << pigLatin(word);
}