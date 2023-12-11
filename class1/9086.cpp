#include <iostream>

int main9086() {

    int t;

    std::cin >> t;

    for (int i=0; i<t; i++){
        std::string str;
        std::cin >> str;
        printf("%c%c\n", str[0], str[str.length() - 1]);
    }

    return 0;
}
