#include <iostream>
#include "Ouvrage.h"

int main() {
    Ouvrage ouvrage1(101, "C++ Programming", 5, 45.99);
    Ouvrage ouvrage2(102, "Data Structures", 3, 39.50);
    Ouvrage ouvrage3(103, "Algorithms", 7, 49.99);

    std::cout << "Ouvrage 1:" << std::endl;
    ouvrage1.afficher();
    std::cout << "Prix total du stock: " << ouvrage1.totalOuvrage() << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << "Ouvrage 2:" << std::endl;
    ouvrage2.afficher();
    std::cout << "Prix total du stock: " << ouvrage2.totalOuvrage() << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << "Ouvrage 3:" << std::endl;
    ouvrage3.afficher();
    std::cout << "Prix total du stock: " << ouvrage3.totalOuvrage() << std::endl;
    std::cout << "-----------------------------" << std::endl;

    return 0;
}