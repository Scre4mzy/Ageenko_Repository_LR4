#include <iostream>
#include <Windows.h>
using namespace std;

void inputNumber(int &X) {
    // Реализация ввода трехзначного числа X
}

void inputDigit(int &N) {
    // Реализация ввода цифры N
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