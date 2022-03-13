#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    getline(cin, str);

    while (str.find("Zues") != string::npos){
        str.insert(str.find("Zues"), "Zeus");
        str.erase(str.find("Zues"), 4);
    }

    cout << str << endl;
}