#include <iostream>

int main10818() {

    int n, min, max;

    std::cin >> n;
    std::cin >> min;

    max = min;

    for (int i=0; i<n-1; i++){
        int num;
        std::cin >> num;

        if(max < num){
            max = num;
        }

        if(min > num){
            min = num;
        }
    }

    std::cout << min << " " << max;

    return 0;
}
