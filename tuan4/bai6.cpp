#include <iostream>

using namespace std;

double calculate (double num1, char operat, double num2){
    switch (operat){
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        default:
            return 0;
    }
}

int main(){
    double num1, num2;
    char operat;
    cin >> num1 >> operat >> num2;
    cout << calculate(num1, operat, num2);
    return 0;
}