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
        if (opr == '*') {
            res *= value(opd);
        } else if (opr == '/') {
            res /= value(opd);
        }
    }

    return res;
}

int main() {
    char* exp1 = "3+5-2";
    int result1 = evaluate(exp1);
    if (result1 == -1) {
        cout << "Invalid exp1!" << endl;
    } else {
        cout << "Result for exp1: " << result1 << endl;
    }

     char* exp2 = "++5-2";
    int result2 = evaluate(exp2);
    if (result2 == -1) {
        cout << "Invalid exp2!" << endl;
    } else {
        cout << "Result for exp2: " << result2 << endl;
    }

    return 0;
}



