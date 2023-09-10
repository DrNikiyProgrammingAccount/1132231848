#include <iostream>

int main() {
    system("chcp 65001");
    std::cout << "Введите сумму: ";
    int summ;
    std::cin >> summ;
    std::cout << "Введите стоимость товара: ";
    int price;
    std::cin >> price;
    std::cout << "Вы можете купить " << summ / price << " единиц товара" << std::endl;
    std::cout << "У вас останется " << summ % price << " единиц валюты" << std::endl;



}
