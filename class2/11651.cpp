#include "class2.h"
#include "iostream"

using namespace std;

typedef struct {
    int x;
    int y;
}point;

int compare11651(const void *a, const void *b) {
    if (((point*)a) -> y - ((point*)b) -> y != 0) {
        return ((point*)a) -> y - ((point*)b) -> y;
    }
    return ((point*)a) -> x - ((point*)b) -> x;
}

int b11651() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    point points[n];

    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    qsort(points, n, sizeof(point), compare11651);

    for (int i = 0; i < n; i++) {
        cout << points[i].x << ' ' << points[i].y << '\n';
    }

    return 0;
}
