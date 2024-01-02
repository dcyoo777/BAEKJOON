#include "class2.h"
#include "iostream"

using namespace std;

int compareWords(const string& str1, const string& str2) {
    if (str1.length() > str2.length()) {
        return 1;
    } else if (str1.length() < str2.length()) {
        return -1;
    }
    return str1.compare(str2);
}

int b1181() {

    int n;
    int len = 1;
    cin >> n;
    string dic[n + 1];

    cin >> dic[0];


    for (int i=1; i<n; i++) {
        string str;
        cin >> str;
        for (int j=0; j<i; j++) {
            int condition = compareWords(str, dic[j]);
            if (condition == 0) {
                break;
            } else if (condition > 0) {
                if (j + 1 == i) {
                    dic[i] = str;
                    len++;
                    break;
                }
            } else {
                for (int k=0; k<i-j; k++) {
                    dic[i-k] = dic[i-k-1];
                }
                dic[j] = str;
                len++;
                break;
            }
        }
    }

    for (int i=0; i<len; i++) {
        std::cout << dic[i] << '\n';
    }

    return 0;
}
