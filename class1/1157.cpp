#include <iostream>

int main1157() {

    int counts[26] = {0,};
    int max = 0;
    int index;
    bool tie = false;
    std::string str;
    std::cin >> str;

    for (char c : str){
        if(c >= 97) {
            counts[c - 97]++;
        } else {
            counts[c - 65]++;
        }
    }

    for (int i=0; i<26; i++) {
        if(max == counts[i]) {
            tie = true;
        }
        if(max < counts[i]){
            max = counts[i];
            index = i;
            tie = false;
        }
    }

    if(tie){
        printf("?");
        return 0;
    }

    printf("%c", 65 + index);

    return 0;
}
