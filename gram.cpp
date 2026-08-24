#include <iostream>
#include <cstring>

using namespace std;

bool checkSentence(char str[]) {
    int len = strlen(str);


    if (len == 0 || !(str[0] >= 'a' && str[0] <= 'z') || str[len - 1] != '.') {
        return false;
    }

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            return false;
        } else if ((str[i] >= 'a' && str[i] <= 'z') && str[i] != ' ' && !(str[i] == '.' && i == len - 1)) {
            return false;
        }
    }

    return true;
}

int main() {
    char inputLine[100];
    cout << "Enter a line of text: ";
    cin.getline(inputLine, 100);

    if (checkSentence(inputLine)) {
        cout << "Valid sentence" << endl;
    } else {
        cout << "Invalid sentence" << endl;
    }

    return 0;
}
