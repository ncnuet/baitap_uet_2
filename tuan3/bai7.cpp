#include <iostream>
#include <string>

using namespace std;

int main(){
    int number, alpha, sc;
    string str;
    getline(cin, str);

    number = 0; 
    alpha = 0;
    sc = 0;
    
    for (int i = 0; i< str.length();i++){
        if(isdigit(str[i])) number++;
        else if(isalpha(str[i])) alpha++;
        else sc++;
    }

    cout << alpha << " " << number << " " << sc << endl;
}