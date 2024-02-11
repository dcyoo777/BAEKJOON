#include "class2.h"
#include "iostream"

using namespace std;

int b2798() {

    int n, m;
    int result = 0;

    cin >> n >> m;

    int nums[n];

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++) {

        int sum = nums[i];

        if (sum > m) {
            continue;
        }

        for (int j = i + 1; j < n; j++) {

            sum = nums[i] + nums[j];

            if (sum > m) {
                continue;
            }

            for (int k = j + 1; k < n; k++) {
                sum = nums[i] + nums[j] + nums[k];

                if (sum > m) {
                    continue;
                }

                if (sum > result) {
                    result = sum;

                    if(result == m) {
                        cout << result;
                        return 0;
                    }
                }
            }
        }
    }

    cout << result;

    return 0;
}
