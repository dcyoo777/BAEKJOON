#include "class2.h"
#include "iostream"

using namespace std;

int b1259() {

    while(true) {
        int num;

        cin >> num;

        if(num == 0){
            break;
        }

        string str = to_string(num);

        bool flag = true;

        for (int i=0; i<str.length()/2; i++) {
            if(str[i] != str[str.length() - 1 - i]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }



    return 0;
}
