#include <iostream>
#include "add.h"

int main() {
    int num1, num2, sum;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Appel de la fonction add pour calculer la somme
    sum = add(num1, num2);

    std::cout << "The sum of  " << num1 << " and " << num2 << " is " << sum << std::endl;

    return 0;
}