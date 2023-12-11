#include <iostream>

int main1152() {

    char str[1000001];
    int count = 0;

    std::cin.getline(str, 1000001);

    for (int i=1; i<1000001; i++){
        if(str[i] == ' '){
            count++;
        }
        if(str[i] == '\0'){
            if(str[i-1] == ' '){
                count--;
            }
            break;
        }
    }

    std::cout << count + 1;

    return 0;
}
