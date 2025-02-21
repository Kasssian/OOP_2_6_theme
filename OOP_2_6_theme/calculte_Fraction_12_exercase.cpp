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
    Fraction(int n, int d) : num(n), den(d) { lowterms(); }

    Fraction operator*(const Fraction& f) {
        Fraction result(num * f.num, den * f.den);
        return result;
    }

    void showFraction() const {
        cout << num << "/" << den;
    }
};

int main() {
    int denom;
    cout << "Введите знаменатель: ";
    cin >> denom;

    cout << "\nТаблица умножения дробей:\n";

    for (int i = 1; i < denom; i++) {
        for (int j = 1; j < denom; j++) {
            Fraction f1(i, denom), f2(j, denom), result = f1 * f2;
            result.showFraction();
            cout << "\t";
        }
        cout << endl;
    }

    return 0;
}
