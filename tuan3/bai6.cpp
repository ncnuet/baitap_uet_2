#include <iostream>
#include <string>

using namespace std;

void trim(string &str){
    while (str[0] == ' ')
        str.erase(0, 1);
    while (str[str.length() - 1] == ' ')
        str.erase(str.length() - 1, 1);
    while(str.find("  ") != string::npos)
        str.erase(str.find("  "), 1);
}

int countWord(string str){
    int count = 0;
    while (str.find(" ") != string::npos){
        str.erase(str.find(" "), 1);
        count++;
    }
    return count + 1;
}

int main(){
    string str;
    getline(cin, str);

    trim(str);
    cout << countWord(str) << endl;
}