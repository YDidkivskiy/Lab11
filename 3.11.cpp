//#include <iostream>
//#include <cmath>
//
//int main() {
//    system("chcp 65001");
//
//    int task_choice;
//
//    std::cout << "Виберіть задачу: 1. Задача про пари 'сусідніх' чисел, рівних нулю\n2. Задача про способи виплатити суму\n3. Задача про числа з трьох знаків" << std::endl;
//    std::cin >> task_choice;
//
//    switch (task_choice) {
//        case 1: {
//            //// Задача 1.
//            int n1, zero = 0, a, n;
//            std::cout << "Введіть кількість чисел: ";
//            std::cin >> n1;
//
//            std::cout << "Введіть числа a1, a2, a3, a4, ... , an: ";
//            std::cin >> a;
//
//            for (int i = 1, current; i < n1; ++i) {
//                std::cin >> current;
//                zero += (a == 0 && current == 0);
//                a = current;
//            }
//
//            std::cout << "Кількість пар 'сусідніх' чисел, рівних нулю: " << zero << std::endl;
//            break;
//        }
//
//        case 2: {
//            //// Задача 2.
//            int k;
//            std::cout << "Введіть натуральне число k (k < 100): ";
//            std::cin >> k;
//
//            if (k >= 100) {
//                std::cout << "Число k повинно бути менше 100." << std::endl;
//                return 0;
//            }
//
//            int ways[100] = {0};
//            ways[0] = 1;
//
//            for (int coin: {10, 5, 2, 1}) {
//                for (int j = coin; j <= k; ++j) {
//                    ways[j] += ways[j - coin];
//                }
//            }
//
//            std::cout << " Кількість способів виплатити суму " << k << " грн: " << ways[k] << std::endl;
//            break;
//        }
//
//        case 3: {
//            //// Задача 3.
//            int arra[10] = {125, 1000, 55, 33, 444, 350, 42020, 321, 0, 40};
//            std::cout << "Трьохзначні цифри:" << std::endl;
//            for (int i = 0; i < 10; i++) {
//                if (arra[i] > 99 && arra[i] < 1000) {
//                    std::cout << arra[i] << std::endl;
//                }
//            }
//            break;
//        }
//
//        default:
//            std::cout << "Виберіть правильний номер задачі" << std::endl;
//    }
//
//    return 0;
//}