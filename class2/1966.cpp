#include "class2.h"
#include "iostream"

using namespace std;

int mod(int q, int n) {
    return (n + q) % n;
}

int b1966() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;
        int arr[n][3];
        int priority[10];
        int count = 0;

        for (int & j : priority) {
            j = 0;
        }

        for (int j = 0; j < n; j++) {
            cin >> arr[j][0];
            arr[j][1] = mod(j - 1, n);
            arr[j][2] = mod(j + 1, n);
            priority[arr[j][0]]++;
        }

//        for (int j = 0; j < n; j++) {
//            cout << "\t" << arr[j][0] << "\t" << arr[j][1] << "\t" << arr[j][2] << '\n';
//        }

        int target = 0;
        int index = 0;

        for (int k = 9; k > 0; k--) {
            if (priority[k] > 0) {
                target = k;
                break;
            }
        }

        while (true) {

            cout << "target : " << target << "\nindex : " << index << "\n\n";

            if (target == arr[index][0] && index == m){
                break;
            }

            while (arr[index][0] != target) {
                cout << "\ttarget : " << target << "\n\tindex : " << index << "\n\n";
                index = arr[index][2];
                break;
            }

            arr[arr[index][1]][2] = arr[index][2];
            arr[arr[index][2]][1] = arr[index][1];

            if (--priority[arr[index][0]] == 0) {
                for (int k = arr[index][0] - 1; k > 0; k--) {
                    if (priority[k] > 0) {
                        target = k;
                        break;
                    }
                }
            }

            index = arr[index][2];
            count++;

            break;
        }

        cout << "target : " << target << "\nindex : " << index << "\n\n";

        cout << count + 1<< '\n';
    }

    return 0;
}
