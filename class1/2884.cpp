#include <iostream>

int main2884() {

    int h, m;

    std::cin >> h >> m;

    if(m >= 45) {
        std::cout << h << ' ' << m - 45;
        return 0;
    }

    if(h) {
        std::cout << (h - 1) % 24 << ' ' << m + 15;
        return 0;
    }

    std::cout << "23 " << m + 15;

    return 0;
}
