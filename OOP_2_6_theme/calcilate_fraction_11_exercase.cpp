#include <iostream>
using namespace std;

class Fraction {
private:
    int num, den;

    void lowterms() {
        int tnum = abs(num), tden = abs(den), temp, gcd;

        if (tden == 0) {
            cout << "Недопустимый знаменатель!\n";
            exit(1);
        }
        else if (tnum == 0) {
            num = 0;
            den = 1;
            return;
        }

        while (tnum != 0) {
            if (tnum < tden) {
                temp = tnum;
                tnum = tden;
                tden = temp;
            }
            tnum -= tden;
        }
        gcd = tden;
        num /= gcd;
        den /= gcd;
    }

public:
    Fraction() : num(0), den(1) {}

    void getFraction() {
        char slash;
        cout << "Введите дробь (например, 3/5): ";
        cin >> num >> slash >> den;
        lowterms();
    }

    void showFraction() const {
        cout << num << "/" << den;
    }

    Fraction operator+(const Fraction& f) {
        Fraction result;
        result.num = num * f.den + f.num * den;
        result.den = den * f.den;
        result.lowterms();
        return result;
    }

    Fraction operator-(const Fraction& f) {
        Fraction result;
        result.num = num * f.den - f.num * den;
        result.den = den * f.den;
        result.lowterms();
        return result;
    }

    Fraction operator*(const Fraction& f) {
        Fraction result;
        result.num = num * f.num;
        result.den = den * f.den;
        result.lowterms();
        return result;
    }

    Fraction operator/(const Fraction& f) {
        Fraction result;
        result.num = num * f.den;
        result.den = den * f.num;
        result.lowterms();
        return result;
    }
};

int main() {
    Fraction f1, f2, result;
    char operation, choice;

    do {
        f1.getFraction();
        cout << "Введите операцию (+, -, *, /): ";
        cin >> operation;
        f2.getFraction();

        switch (operation) {
        case '+': result = f1 + f2; break;
        case '-': result = f1 - f2; break;
        case '*': result = f1 * f2; break;
        case '/': result = f1 / f2; break;
        default: cout << "Ошибка: неверная операция!\n"; continue;
        }

        cout << "Результат: ";
        result.showFraction();
        cout << endl;

        cout << "Продолжить? (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    return 0;
}
