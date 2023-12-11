#include <iostream>

int main10250() {

    int t;

    std::cin >> t;

    for (int i=0; i<t; i++){
        int h, w, n;
        int x, y;
        std::cin >> h >> w >> n;

        x = n % h;
        y = ( n - 1 ) / h + 1;

        if(x){
            std::cout << x;
        } else {
            std::cout << h;
        }

        if(y >= 10){
            std::cout << y << '\n';
        } else {
            std::cout << "0" << y << '\n';
        }
    }

    return 0;
}
