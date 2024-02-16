#include "class2.h"
#include "iostream"
#include <cstring>

using namespace std;

bool isBalance(const char *str, int start, int end) {
    for (int i = start; i <= end; i++) {
        if (str[i] == '('){
            int count = 1;
            for (int j = i + 1; j <= end; j++) {
                if (str[j] == '(') {
                    count++;
                } else if (str[j] == ')' && --count == 0){
                    return isBalance(str, i + 1, j - 1) && isBalance(str, j + 1, end);
                }
            }
            return false;
        } else if (str[i] == '[') {
            int count = 1;
            for (int j = i + 1; j <= end; j++) {
                if (str[j] == '[') {
                    count++;
                } else if (str[j] == ']' && --count == 0){
                    return isBalance(str, i + 1, j - 1) && isBalance(str, j + 1, end);
                }
            }
            return false;
        } else if (str[i] == ']' || str[i] == ')') {
            return false;
        }
    }
    return true;
}

int b4949() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    string terminalStr = ".";
    while (true) {
        getline(cin, str);
        if(str == ".") {
            break;
        }

        if(isBalance(str.data(), 0, str.length() - 1)){
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }

    }

    return 0;
}
