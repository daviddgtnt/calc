#include <iostream>
using namespace std;

int main()
{
    int oper;
    double num1;
    double num2;
    cout << "DDDD     GGG   TTTTT  N   N  TTTTT" << endl;
    cout << "D   D   G        T    NN  N    T  " << endl;
    cout << "D   D   G   G    T    N N N    T  " << endl;
    cout << "D   D   G   G    T    N  NN    T  " << endl;
    cout << "DDDD     GGG     T    N   N    T  " << endl;
    cout << endl;
    cout << "DGTNT Calc 1.0" << endl;
    cout << endl;
    cout << "Options:" << endl;
    cout << "1: Addition" << endl;
    cout << "2: Subtraction" << endl;
    cout << "3: Multiplication" << endl;
    cout << "4: Division" << endl;
    cout << endl;
    cout << "Enter your operation's number: ";
    cin >> oper;
    if(oper == 1) {
        cout << "What is your first number? ";
        cin >> num1;
        cout << endl;
        cout << "What is your second number? ";
        cin >> num2;
        cout << endl;
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
    }
    if(oper == 2) {
        cout << "What is your minuend? ";
        cin >> num1;
        cout << endl;
        cout << "What is your subtrahend? ";
        cin >> num2;
        cout << endl;
        cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
    }
    if(oper == 3) {
        cout << "What is your first number? ";
        cin >> num1;
        cout << endl;
        cout << "What is your second number? ";
        cin >> num2;
        cout << endl;
        cout << num1 << " x " << num2 << " = " << num1*num2 << endl;
    }
    if(oper == 4) {
        cout << "What is your dividend? ";
        cin >> num1;
        cout << endl;
        cout << "What is your divisor? ";
        cin >> num2;
        cout << endl;
        cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
    }
    return 0;
}
