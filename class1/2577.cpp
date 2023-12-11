#include <iostream>

int main2577() {

    long a, b, c, product;
    int nums[10] = {0,};

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    product = a * b * c;

    while(product > 0) {
        nums[product % 10]++;
        product /= 10;
    }

    for(int num : nums) {
        printf("%d\n", num);
    }

    return 0;
}
