﻿#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    std::cout << "У лукоморья дуб зелёный;\nЗлатая цепь на дубе том:\nИ днём и ночью кот учёный\nВсё ходит по цепи кругом;\nИдёт направо — песнь заводит,\nНалево — сказку говорит.\nТам чудеса : там леший бродит, \n";

    std::cout << "У лукоморья дуб зелёный;" << std::endl; 
    std::cout << "Златая цепь на дубе том:" << std::endl; // "\nИ днём и ночью кот учёный\nВсё ходит по цепи кругом; \nИдёт направо — песнь заводит, \nНалево — сказку говорит.\nТам чудеса : там леший бродит, \n";

}