#include <iostream>

int main5597() {

    bool nums[30] = {false};

    for (int i=0; i<28; i++){
        int num;
        std::cin >> num;
        nums[num - 1] = true;
    }

    for (int i=0; i<30; i++){
        if(!nums[i]){
            printf("%d\n", i + 1);
        }
    }

    return 0;
}
