#include "class3.h"
#include "iostream"

using namespace std;

bool isConnect1012(int x1, int y1, int x2, int y2) {
    if ((x1 == x2 && abs(y1 - y2) == 1) || (y1 == y2 && abs(x1 - x2) == 1)) {
        return true;
    }
    return false;
}

int b1012() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, m, n, k;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> m >> n >> k;

        int arr[k][3];
        int stack[k][2];
        int last;
        int group_num = 1;

        for (int j = 0; j < k; j++) {
            cin >> arr[j][0] >> arr[j][1];
            arr[j][2] = 0;
        }

        while(true) {
            last = 0;
            bool isEnd = true;
            for (int l = 0; l < k; l++) {
                if (arr[l][2] == 0) {
                    stack[last][0] = arr[l][0];
                    stack[last][1] = arr[l][1];
                    last++;
                    arr[l][2] = group_num;
                    isEnd = false;
                    break;
                }
            }

            if (isEnd) {
                break;
            }

            int o = 0;

            while (o < last) {
                for (int l = 0; l < k; l++) {
                    if (arr[l][2] == 0 && isConnect1012(stack[o][0], stack[o][1], arr[l][0], arr[l][1])) {
                        stack[last][0] = arr[l][0];
                        stack[last][1] = arr[l][1];
                        arr[l][2] = group_num;
                        last++;
                    }
                }
                o++;
            }

            group_num++;
        }

        cout << group_num - 1 << "\n";

    }

    return 0;
}
