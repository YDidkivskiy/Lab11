#include <iostream>


int main() {
    system("chcp 65001");
    int x;

    int p1 = 25000, p2 = 15000, p3 = 61, p4 = 40, p5 = 5, p6 = 40000;
    int a1 = 2, a2 = 5000, a3 = 150, a4 = 400, a5 = 14233, a6 = 14;

    std::cout << "Про який товар ви хочете дізнатись?\n1. Телефон.\n2. Планшет.\n3.Чіпси.\n4.Кока-кола\n5.Шалена бджілка.\n6.Ноутбук" << std::endl;
    std::cin >> x;

    if (x == 1)
    {
        std::cout << "Ціна товару: " << p1 <<"\nКількість товару на складі: " << a1 << std::endl;
        std::cout << "Гарного дня" << std::endl;
    }

    else if (x == 2)
    {
        std::cout << "Ціна товару: " << p2 <<"\nКількість товару на складі: " << a2 << std::endl;
        std::cout << "Гарного дня" << std::endl;
    }

    else if (x == 3)
    {
        std::cout << "Ціна товару: " << p3 <<"\nКількість товару на складі: " << a3 << std::endl;
        std::cout << "Гарного дня" << std::endl;
    }

    else
    {
        std::cout << "Не маємо інформації про цей товар, заходьте на наш сайт www.magazin.com" << std::endl;
    }

    switch (x)
    {
        case 4:
            std::cout << "Ціна товару: " << p4 <<"\nКількість товару на складі: " << a4 << std::endl;
            std::cout << "Гарного дня" << std::endl;

        case 5:
            std::cout << "Ціна товару: " << p5 <<"\nКількість товару на складі: " << a5 << std::endl;
            std::cout << "Гарного дня" << std::endl;

        case 6:
            std::cout << "Ціна товару: " << p6 <<"\nКількість товару на складі: " << a6 << std::endl;
            std::cout << "Гарного дня" << std::endl;
    }
    return 0;
}

