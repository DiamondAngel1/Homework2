#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;

void UserInput(char* user, int max) {
    cout << "Введіть рядок: ";
    cin.getline(user, max);
}

int CalcOcupado(const char* user) {
    return strlen(user);
}

int CalcEmpty(int max, int ocupado) {
    return max - ocupado - 1;
}

void Print(int total, int ocupado, int empty) {
    cout << "Загальна кількість елементів у масиві: " << total << endl;
    cout << "Зайнято елементів: " << ocupado << endl;
    cout << "Вільно елементів: " << empty << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int max = 500;
    char user[max];

    UserInput(user, max);
    int ocupado = CalcOcupado(user);
    int empty = CalcEmpty(max, ocupado);
    Print(max, ocupado, empty);

    return 0;
}
