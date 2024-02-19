#include "class2.h"
#include "iostream"

using namespace std;

class Queue {

private:
    int start;
    int end;
    int arr[10001];

public:

    void init() {
        start = 0;
        end = 0;
    }

    void push(int num) {
        arr[end++] = num;
    }

    [[nodiscard]] int size() const {
        return (end + 10001 - start) % 10001;
    }

    [[nodiscard]] int empty() const {
        return end == start ? 1 : 0;
    }

    int pop() {
        if (empty()) {
            return -1;
        }
        return arr[start++];
    }

    int front() {
        if (empty()) {
            return -1;
        }
        return arr[start];
    }

    int back() {
        if (empty()) {
            return -1;
        }
        return arr[end - 1];
    }

    void print() {
        cout << "start : " << start << '\n';
        cout << "end : " << end << '\n';
        for (int i = start; i < end; i++) {
            cout << arr[i] << ' ';
        }
        cout << "\n\n";
    }
};

int b10845() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    Queue q{};
    q.init();
    int n, m;
    string keyword;

    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> keyword;
        if (keyword == "push") {
            cin >> m;
            q.push(m);
        } else if (keyword == "pop") {
            cout << q.pop() << '\n';
        } else if (keyword == "size") {
            cout << q.size() << '\n';
        } else if (keyword == "empty") {
            cout << q.empty() << '\n';
        } else if (keyword == "front") {
            cout << q.front() << '\n';
        } else if (keyword == "back") {
            cout << q.back() << '\n';
        }
//        q.print();
    }

    return 0;
}
