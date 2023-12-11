#include <iostream>

int main2744() {

    std::string str;
    std::cin >> str;
    for (int i = 0; i < str.length(); i++){
        if(str[i] < 97){
            printf("%c", str[i] + 32);
        }else{
            printf("%c", str[i] - 32);
        }
    }

    return 0;
}
