#include "class2.h"
#include "iostream"

using namespace std;

typedef struct {
    int x;
    int y;
}point;

int compare11650(const void *a, const void *b) {
    if (((point*)a) -> x - ((point*)b) -> x != 0) {
        return ((point*)a) -> x - ((point*)b) -> x;
    }
    return ((point*)a) -> y - ((point*)b) -> y;
}

int b11650() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    point points[n];

    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    qsort(points, n, sizeof(point), compare11650);

    for (int i = 0; i < n; i++) {
        cout << points[i].x << ' ' << points[i].y << '\n';
    }

    return 0;
}
