#include <iostream>

int main2562() {

    int max = 0;
    int index = 0;

    for (int i=0; i<9; i++){
        int num;
        std::cin >> num;
        if(max < num){
            max = num;
            index = i;
        }
    }

    std::cout << max << '\n' << index + 1;

    return 0;
}
