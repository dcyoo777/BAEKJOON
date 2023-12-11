#include <iostream>

int main8958() {

    int t;


    std::cin >> t;

    for (int i=0; i<t; i++) {
        std::string str;
        std::cin >> str;

        int sum = 0;
        int lastScore = 0;
        for (char c : str){

            if (c == 'O') {
                sum += ++lastScore;
            } else if (c == 'X') {
                lastScore = 0;
            }
        }

        std::cout << sum << '\n';
    }



    return 0;
}
