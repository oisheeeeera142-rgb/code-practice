#include <iostream>
#include <cstring>
using namespace std;

bool isOperand(char c) {
    return (c >= '0' && c <= '9');
}

int value(char c) {
    return (c - '0');
}

int evaluate(char* exp) {
    if (*exp == '\0' || !isOperand(exp[0])) return -1;

    int res = value(exp[0]);

    for (int i = 1; exp[i] != '\0'; i += 2) {
        char opr = exp[i];
        char opd = exp[i + 1];

        if (opr != '+' && opr != '-') return -1;
        if (!isOperand(opd)) return -1;

        if (opr == '+') {
            res += value(opd);
        } else if (opr == '-') {
            res -= value(opd);
        }
    }

    return res;
}

int main() {
    char exp[100];

    cout << "Enter a mathematical expression: ";
    cin >> exp;

    int result = evaluate(exp);
    if (result == -1) {
        cout << "Invalid expression!" << endl;
    } else {
        cout << "Result: " << result << endl;
    }

    return 0;
}
