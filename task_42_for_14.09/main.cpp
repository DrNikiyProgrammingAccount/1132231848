#include <iostream>

int main() {
    system("chcp 65001");
    double ans;
    int r1, r2;
    std::cout << "Введите внутренний радиус кольца: ";
    std::cin >> r1;
    std::cout << "Введите внешний радиус кольца: ";
    std::cin >> r2;
    ans = 3.14 * ((r2*r2) - (r1*r1));
    std::cout << "Площадь кольца: " << ans;

}
