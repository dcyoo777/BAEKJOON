#include <iostream>

int main11718() {

    char str[101];

    do {
        std::cin.getline(str, 101);
        std::cout << str << '\n';
    } while(str[0] != '\0');

    return 0;
}
