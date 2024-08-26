#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    cout << "Nerd, imagine using a calculator" << endl;
    bool runCalc = true;
    while (1 == 1){
    double num1;
    double num2;
    string op;
    cout << "Select Operator: (+, -, *, /, **, rt, endCalc)" << endl;
    cin >> op;
    if (op == "endCalc"){break;}
    cout << "Insert number: ";
    cin >> num1;
    cout << " " << endl;
    cout << "Insert second number: ";
    cin >> num2;
    cout << " " << endl;
    if (op == "+"){cout << "Answer: " << num1 + num2 << endl;}
    if (op == "-"){cout << "Answer: " << num1 - num2 << endl;}
    if (op == "*"){cout << "Answer: " << num1 * num2 << endl;}
    if (op == "/"){cout << "Answer: " << num1 / num2 << endl;}
    if (op == "**"){cout << "Answer: " << pow(num1, num2) << endl;}
    if (op == "rt"){cout << "Answer: " << pow(num1, (1/num2)) << endl;}
    cout << " " << endl;
    }

    return 0;
}
