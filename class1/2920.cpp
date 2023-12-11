#include <iostream>

int main2920() {

    int nums[8];
    int diff;

    for (int & num : nums) {
        std::cin >> num;
    }

    diff = nums[0] - nums[1];

    for (int i=1; i<7; i++) {
        if(nums[i] - nums[i+1] != diff){
            std::cout << "mixed";
            return 0;
        }
    }

    switch(diff) {
        case 1:
            std::cout << "descending";
            break;
        case -1:
            std::cout << "ascending";
    }

    return 0;
}
