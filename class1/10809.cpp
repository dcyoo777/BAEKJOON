#include <iostream>

int main10809() {

    int index[26];
    std::string str;
    std::cin >> str;

    for (int & i : index) i = -1;

    for (int i=0; i<str.length(); i++) {
        if (index[str[i] - 97] == -1) {
            index[str[i] - 97] = i;
        }
    }

    for (int i : index) {
        std::cout << i << " ";
    }

    return 0;
}
