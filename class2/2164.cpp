//#include "class2.h"
//#include "iostream"
//
//using namespace std;
//
//typedef struct {
//    int max;
//    int start;
//    int end;
//    int len;
//    int* arr;
//}queue;
//
//void setQ(queue *q, int num) {
//    q -> arr[(q -> end + 1) % q -> max] = num;
//    q -> end = (q -> end + 1) % q -> max;
//    q -> len++;
//}
//
//int getQ(queue *q) {
//    q -> len--;
//    q -> start = (q -> start + 1) % q -> max;
//    return q -> arr[(q -> max + q -> start - 1) % q -> max];
//}
//
//void printQ(queue q) {
//    cout << "start : " << q.start << '\n';
//    cout << "end : " << q.end << '\n';
//    cout << "max : " << q.max << '\n';
//    cout << "len : " << q.len << '\n';
//    cout << "arr : ";
//    for (int i = q.start; i != q.end; i = (i + 1) % q.max) {
//        cout << q.arr[i] << ' ';
//    }
//    cout << q.arr[q.end] << "\n\n\n";
//}
//
//int b2164() {
//
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//
//    int n;
//
//    cin >> n;
//
//    queue q {
//        n, 0, n - 1, n, new int[n]
//    };
//
//    for (int i = 0; i < n; i++) {
//        q.arr[i] = i + 1;
//    }
//
//    while (q.len > 1) {
//        getQ(&q);
//        setQ(&q, getQ(&q));
//    }
//
//    cout << getQ(&q);
//
//    return 0;
//}
