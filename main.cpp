#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string version = "2.0";
bool inDev = true;

int main() {
    cout << "David Calc" << endl;
    cout << "Version " << version << endl;
    if (inDev) {
        cout << "Development build" << endl;
    }
    cout << "1 - +" << endl;
    cout << "2 - -" << endl;
    cout << "3 - *" << endl;
    cout << "4 - /" << endl;
    cout << "5 - Square Root" << endl;
    cout << "6 - /R" << endl;
    cout << "Choose an operation:" << endl;
    string op;
    cin >> op;
    if (op == "1") {
        cout << "+" << endl;
        cout << "Addend 1:" << endl;
        float num1;
        cin >> num1;
        cout << "Addend 2:" << endl;
        float num2;
        cin >> num2;
        float result = num1 + num2;
        cout << "Sum: " << result << endl;
    } else if (op == "2") {
        cout << "-" << endl;
        cout << "Minuend:" << endl;
        float num1;
        cin >> num1;
        cout << "Subtrahend:" << endl;
        float num2;
        cin >> num2;
        float result = num1 - num2;
        cout << "Difference: " << result << endl;
    } else if (op == "3") {
        cout << "*" << endl;
        cout << "Factor 1:" << endl;
        float num1;
        cin >> num1;
        cout << "Factor 2:" << endl;
        float num2;
        cin >> num2;
        float result = num1 + num2;
        cout << "Product: " << result << endl;
    } else if (op == "4") {
        cout << "/" << endl;
        cout << "Dividend:" << endl;
        float num1;
        cin >> num1;
        cout << "Divisor:" << endl;
        float num2;
        cin >> num2;
        if (num2 == 0) {
            cout << "Division by zero error!";
        } else {
            float result = num1 / num2;
            cout << "Quotient: " << result << endl;
        }
    } else if (op == "5") {
        cout << "Square Root" << endl;
        cout << "Value:" << endl;
        float num;
        cin >> num;
        float result = sqrt(num);
        cout << "Square root: " << result << endl;
    } else if (op == "6") {
        cout << "/R" << endl;
        cout << "Note: Ony integers (full numbers) are accepted." << endl;
        cout << "Dividend:" << endl;
        int num1;
        cin >> num1;
        cout << "Divisor:" << endl;
        int num2;
        cin >> num2;
        if (num2 == 0) {
            cout << "Division by zero error!";
        } else {
            int result = num1 / num2;
            int mod = num1 % num2;
            cout << "Quotient: " << result << " R" << mod << endl;
        }
    } else {
        cout << "Invalid operation." << endl;
        main();
    }
    return 0;
}
