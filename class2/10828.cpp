#include "class2.h"
#include "iostream"

using namespace std;

class Stack {

private:
    int last;
    int arr[10001];

public:
    void init() {
        last = 0;
    }

    void push(int num) {
        arr[last++] = num;
    }

    int pop() {
        if (last == 0) {
            return -1;
        }
        return arr[--last];
    }

    [[nodiscard]] int size() const {
        return last;
    }

    [[nodiscard]] int empty() const {
        return last ? 0 : 1;
    }

    int top() {
        if (last == 0) {
            return -1;
        }
        return arr[last - 1];
    }
};

int b10828() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    Stack s{};
    s.init();
    int n, m;
    string keyword;

    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> keyword;
        if (keyword == "push") {
            cin >> m;
            s.push(m);
        } else if (keyword == "pop") {
            cout << s.pop() << '\n';
        } else if (keyword == "size") {
            cout << s.size() << '\n';
        } else if (keyword == "empty") {
            cout << s.empty() << '\n';
        } else if (keyword == "top") {
            cout << s.top() << '\n';
        }
    }

    return 0;
}
