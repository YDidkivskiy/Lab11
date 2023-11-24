#include <iostream>
#include <cmath>

int main() {
    system("chcp 65001");
    double a1, b1, x;
    int i = 11;
    int k = i;
    int low = k = i;
    int up = i + 5;
    int up1 = i + 8;

    std::cout << "Введіть значення a: ";
    std::cin >> a1;

    std::cout << "Введіть значення b: ";
    std::cin >> b1;

    double z = a1 - 2 * b1;


    x = 8 * log10(fabs(sin(x) + 5));

    double a = 0;
    double b = 0;

    for (int j = low; j <= up; ++j) {
        a += x * (j + 5) * k;
    }

    std::cout << "Число i =  " << i << "\nЧисло a = " << a << "\nЧисло z = " << z << std::endl;

    return 0;
}