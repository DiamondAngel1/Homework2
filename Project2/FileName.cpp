#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;

void UserInput(char* user, int max) {
    cout << "¬вед≥ть р€док: ";
    cin.getline(user, max);
}

int CalcOcupado(const char* user) {
    return strlen(user);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int max = 500;
    char user[max];

    UserInput(user, max);
    int ocupado = CalcOcupado(user);

    return 0;
}
