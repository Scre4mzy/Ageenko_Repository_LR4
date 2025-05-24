#include <iostream>
#include <Windows.h>
using namespace std;

void inputNumber(int &X) {
    // Реализация ввода трехзначного числа X
    do {
        cout << "Введите трехзначное число X: ";
        cin >> X;
        if (X < 100 || X > 999) {
            cout << "Ошибка! Число должно быть трехзначным (100-999). Попробуйте снова." << endl;
        }
    } while (X < 100 || X > 999);
    cout << "Число " << X << " успешно сохранено." << endl << endl;
}

void inputDigit(int &N) {
    // Реализация ввода цифры N
    do {
        cout << "Введите цифру N (1-3): ";
        cin >> N;
        if (N < 1 || N > 3) {
            cout << "Ошибка! Цифра N должна быть от 1 до 3. Попробуйте снова." << endl;
        }
    } while (N < 1 || N > 3);
    cout << "Цифра " << N << " успешно сохранена." << endl << endl;
}

void findFirstDigit(int X) {
    // Реализация поиска первой цифры числа X
    if (X == 0) {
        cout << "Сначала введите число X!" << endl << endl;
        return;
    }
    int firstDigit = X / 100;
    cout << "Первая цифра числа " << X << ": " << firstDigit << endl << endl;
}

void findNthDigit(int X, int N) {
    // Реализация поиска N-й цифры числа X (нумерация справа налево)
    if (X == 0) {
        cout << "Сначала введите число X!" << endl << endl;
        return;
    }
    if (N == 0) {
        cout << "Сначала введите цифру N!" << endl << endl;
        return;
    }
    
    int digit;
    switch(N) {
        case 1: digit = X % 10; break;      // Единицы
        case 2: digit = (X / 10) % 10; break; // Десятки
        case 3: digit = X / 100; break;      // Сотни
    }
    
    cout << N << "-я цифра числа " << X << " (справа налево): " << digit << endl << endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);  
    SetConsoleCP(CP_UTF8);  
    setlocale(LC_ALL, "Russian");
    int choice;
    int X = 0;
    int N = 0;

    
    do {
        cout << "Меню:" << endl;
        cout << "1. Ввести целое трехзначное число X" << endl;
        cout << "2. Ввести цифру N (которая меньше числа разрядов числа X)" << endl;
        cout << "3. Найти первую цифру числа X" << endl;
        cout << "4. Найти N-ю цифру числа X (цифры нумеруются справа налево)" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите пункт меню: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                inputNumber(X);
                break;
            case 2:
                inputDigit(N);
                break;
            case 3:
                findFirstDigit(X);
                break;
            case 4:
                findNthDigit(X, N);
                break;
            case 0:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Неверный пункт меню. Попробуйте снова." << endl;
        }
    } while (choice != 0);
    
    return 0;
}