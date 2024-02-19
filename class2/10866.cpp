#include "class2.h"
#include "iostream"

using namespace std;

class Deque {

private:
    int max = 10000;
    int start;
    int end;
    int arr[10000];

public:

    void init() {
        start = 0;
        end = 0;
    }

    [[nodiscard]] int size() const {
        return (max + end - start) % max;
    }

    [[nodiscard]] int empty() const {
        return end == start;
    }

    void push_front(int num) {
        start = (max + start - 1) % max;
        arr[start] = num;
    }

    void push_back(int num) {
        arr[end] = num;
        end = (max + end + 1) % max;
    }

    int pop_front() {
        if (empty()) {
            return -1;
        }
        int result = arr[start];
        start = (max + start + 1) % max;
        return result;
    }

    int pop_back() {
        if (empty()) {
            return -1;
        }
        end = (max + end - 1) % max;
        return arr[end];
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
        return arr[(max + end - 1) % max];
    }

    void print() {
        cout << "start : " << start << '\n';
        cout << "end : " << end << '\n';
        int i = start;
        while (i != end) {
            cout << arr[i] << ' ';
            i = (max + i + 1) % max;
        }
        cout << "\n\n";
    }
};

int b10866() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    Deque q{};
    q.init();
    int n, m;
    string keyword;

    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> keyword;
        if (keyword == "push_front") {
            cin >> m;
            q.push_front(m);
        } else if (keyword == "push_back") {
            cin >> m;
            q.push_back(m);
        } else if (keyword == "pop_front") {
            cout << q.pop_front() << '\n';
        } else if (keyword == "pop_back") {
            cout << q.pop_back() << '\n';
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
