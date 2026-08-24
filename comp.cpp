#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

int main() {
    string file = "factorial.cpp";
    ifstream MyReadFile(file);
    if (!MyReadFile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char operators[10];
    int operatorCount[10] = {0};
    int operatorIndex = 0;
    int totalOperatorCount = 0;
    stack<char> parenthesesStack;
    bool extraParenthesis = false;

    char ch;
    while (MyReadFile.get(ch)) {

        if (ch == '=' || ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
            bool found = false;
            for (int i = 0; i < operatorIndex; i++) {
                if (operators[i] == ch) {
                    operatorCount[i]++;
                    found = true;
                    break;
                }
            }
            if (!found && operatorIndex < 10) {
                operators[operatorIndex] = ch;
                operatorCount[operatorIndex] = 1;
                operatorIndex++;
            }
            totalOperatorCount++;
        }

        if (ch == '(') {
            parenthesesStack.push(ch);
        }
        else if (ch == ')') {
            if (!parenthesesStack.empty()) {
                parenthesesStack.pop();
            } else {
                extraParenthesis = true;
            }
        }
    }

    MyReadFile.close();

    cout << "Number of operators = " << totalOperatorCount << endl;
    for (int i = 0; i < operatorIndex; i++) {
        cout << "Operator" << (i + 1) << " = " << operators[i] << " (" << operatorCount[i] << " times)" << endl;
    }

    if (extraParenthesis) {
        cout << "Extra parenthesis" << endl;
    } else if (!parenthesesStack.empty()) {
        cout << "Parenthesis missing" << endl;
    } else {
        cout << "No parenthesis is missing." << endl;
    }

    return 0;
}
