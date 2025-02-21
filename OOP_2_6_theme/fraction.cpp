#include <iostream>
using namespace std;

class Fraction {
private:
    int num, den;

public:
    void getFraction() {
        char slash;
        cout << "Введите дробь (например, 3/5): ";
        cin >> num >> slash >> den;
    }

    void showFraction() const {
        cout << num << "/" << den << endl;
    }

    Fraction add(const Fraction& f) {
        Fraction result;
        result.num = num * f.den + f.num * den;
        result.den = den * f.den;
        return result;
    }
};

int main() {
    Fraction f1, f2, sum;
    char choice;

    do {
        f1.getFraction();
        f2.getFraction();
        sum = f1.add(f2);

        cout << "Сумма: ";
        sum.showFraction();

        cout << "Продолжить? (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    return 0;
}
