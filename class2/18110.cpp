#include "class2.h"
#include "iostream"

using namespace std;

class Stack {

private:
    int max;
    int last;
    int *arr;

public:
    void init(int num);
    void push(int num);
    int pop();
    int size();
    int empty();
    int top();
};

void Stack::init(int num) {
    max = num;
    last = 0;
    arr = new int(num);
}

void Stack::push(int num) {
    arr[last++] = num;
}

int Stack::pop() {
    if (last == 0) {
        return -1;
    }
    return arr[--last];
}

int Stack::size() {
    return last;
}

int Stack::empty() {
    return last ? 0 : 1;
}

int Stack::top() {
    if (last == 0) {
        return -1;
    }
    return arr[last - 1];
}



int b10828() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    string keyword;

    cin >> n;

    Stack s{};
    s.init(10001);

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
