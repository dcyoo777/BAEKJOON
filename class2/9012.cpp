#include "class2.h"
#include "iostream"

using namespace std;

bool isVPS(const char *str, int start, int end) {
    for (int i = start; i <= end; i++) {
        if (str[i] == '('){
            int count = 1;
            for (int j = i + 1; j <= end; j++) {
                if (str[j] == '(') {
                    count++;
                } else if (str[j] == ')' && --count == 0){
                    return isVPS(str, i + 1, j - 1) && isVPS(str, j + 1, end);
                }
            }
            return false;
        } else if (str[i] == ')') {
            return false;
        }
    }
    return true;
}

int b9012() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    string str;

    for (int i = 0; i < n; i++) {
        cin >> str;
        if(isVPS(str.data(), 0, str.length() - 1)){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
