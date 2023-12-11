#include <iostream>

int main3052() {

    bool counts[42] = {false, };
    int nums[10];
    int count = 0;

    for (int & num : nums) {
        std::cin >> num;
        if (!counts[num % 42]){
            counts[num % 42] = true;
            count++;
        }
    }

    std::cout << count;

    return 0;
}
