#include <iostream>

int main2475() {

    int result = 0;

    for (int i=0; i<5; i++){
        int num;
        std::cin >> num;
        result = (result + num * num) % 10;
    }

    std::cout << result;

    return 0;
}
