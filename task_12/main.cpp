#include <iostream>

int main() {
    system("chcp 65001");
    std::cout << "Введите кол-во пекарного порошка для изготовки (в граммах):";
    int powder;
    float soda, limon, flour;
    std::cin >> powder;
    std::cout << "Необходимое количество соды: " << powder * 0.25 << " г." << std::endl;
    std::cout << "Необходимое количество лимонной кислоты: " << powder * 0.15 << " г." << std::endl;
    std::cout << "Необходимое количество муки: " << powder * 0.6 << " г." << std::endl;
}
