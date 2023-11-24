#include <iostream>


int main() {
    system("chcp 65001");

    int x,y, a1,a2,a3,a4;
    std::cout << "Введіть значення x: ";
    std::cin >> x;

    std::cout << "Введіть значення y: ";
    std::cin >> y;

    a1 = 0;
    a2 = 45;
    a3 = 180;
    a4 = 125;

    if (a1 <= x && x <= a2)
    {
        std::cout << "Точка x (" << x << ") попадає в заштриховану область" << std::endl;
    }
    else
    {
        std::cout << "Точка x (" << x << ") не попадає в заштриховану область" << std::endl;
    }

    if (a4 <= y && y <= a3)
    {
        std::cout << "Точка y (" << y << ") попадає в заштриховану область" << std::endl;
    }
    else
    {
        std::cout << "Точка y (" << y << ") не попадає в заштриховану область" << std::endl;
    }
}