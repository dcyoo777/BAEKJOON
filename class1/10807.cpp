#include <iostream>

int main10807() {

    int n, v;
    int* nums;
    int result = 0;

    std::cin >> n;

    nums = new int[n];

    for (int i=0; i<n; i++){
        std::cin >> nums[i];
    }

    std::cin >> v;

    for (int i=0; i<n; i++){
        if(nums[i] == v){
            result++;
        }
    }

    std::cout << result;

    return 0;
}
