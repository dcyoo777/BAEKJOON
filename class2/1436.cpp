#include "class2.h"
#include "iostream"

using namespace std;

bool is666(int num) {
    int continue6 = 0;
    while (num != 0) {
        if (num % 10 == 6) {
            if(++continue6 == 3){
                return true;
            }
        } else {
            continue6 = 0;
        }
        num /= 10;
    }
    return false;
}

int b1436() {

    int n;
    int i = 666;
    int count = 0;

    cin >> n;

    int sortedArr[n];

    while (count < n) {
        if (is666(i)) {
            sortedArr[count++] = i;
        }
        i++;
    }

    cout << sortedArr[n-1];

    return 0;
}
