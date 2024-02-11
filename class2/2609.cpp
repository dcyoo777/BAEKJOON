#include "class2.h"
#include "iostream"

using namespace std;

int calcGcd(int n1, int n2) {

    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    int n3 = n2 % n1;

    if (n3 == 0) {
        return n1;
    }

    return calcGcd(n2 % n1, n1);
}

int b2609() {

    int n1, n2, result1, result2;

    cin >> n1 >> n2;

    result1 = calcGcd(n1, n2);
    result2 = n1 * n2 / result1;
    
    cout << result1 << '\n' << result2;

    return 0;
}
