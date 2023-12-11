#include <iostream>

int main2675() {

    int t;

    std::cin >> t;

    for (int i=0; i<t; i++){
        int num;
        std::string str;
        std::cin >> num >> str;

        for (char j : str){
            for (int k=0; k<num; k++) {
                std::cout << j;
            }
        }
        std::cout << '\n';
    }

    return 0;
}
