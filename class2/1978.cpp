#include "class2.h"
#include "iostream"

using namespace std;

bool isPrime(int num) {
    if(num == 1) {
        return false;
    }
    bool result = true;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    cout << num << '\n';
    return result;
}

int b1978() {

    int n;

    cin >> n;

    int result = 0;

    for (int i=0; i<n; i++ ) {
        int num;
        cin >> num;
        if(isPrime(num)){
            result++;
        }
    }

    cout << result << '\n';

    return 0;
}
