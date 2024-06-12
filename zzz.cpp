#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number between 0 and 10: ";
    std::cin >> num;

    if (num >= 0 && num <= 10) { // ÈÑÑÓ? ãÍÏæÏå? æÑæÏ?
        if (num % 2 == 0) { // ÈÑÑÓ? ÒæÌ ÈæÏä
            std::cout << num << " is even." << std::endl;
            if (num < 5) {
                std::cout << num << " is less than 5." << std::endl;
            }
            else {
                std::cout << num << " is greater than or equal to 5." << std::endl;
            }
        }
        else {
            std::cout << num << " is odd." << std::endl;
        }
    }
    else {
        std::cout << "Invalid input! Please enter a number between 0 and 10." << std::endl;
    }

    return 0;
}
