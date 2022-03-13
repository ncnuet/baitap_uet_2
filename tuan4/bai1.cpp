#include <iostream>
using namespace std;

int maxThree(int a, int b, int c){
    if (a < b) a = b;
    if (a < c) a = c;
    return a; 
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << maxThree(a, b, c);
    return 0;
}