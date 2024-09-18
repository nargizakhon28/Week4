#include <iostream>
void checkNum(int n) {

    // Check if the number is zero
    if (n == 0) {
        printf("Zer0\n");
    }
    // Check if the number is less than zero
    else if (n < 0) {
        printf("Negative\n");
    }
    // If neither, the number is positive
    else {
        printf("Positive\n");
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int n;
    std::cin >> n;
    checkNum(n);


    return 0;
}
//
// Created by Nargiza Khudaykulova on 18/09/24.
//
