#include <iostream>

int main2754() {

    double score = 0.0;
    std::string grade;
    std::cin >> grade;

    if (grade.length() == 1) {
        printf("%.1f", score);
        return 0;
    }

    score += 69 - grade[0];

    switch (grade[1]) {
        case '+':
            score += 0.3;
            break;
        case '-':
            score -= 0.3;
    }

    printf("%.1f", score);

    return 0;
}
