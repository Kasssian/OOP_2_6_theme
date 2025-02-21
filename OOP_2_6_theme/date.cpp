#include <iostream>
using namespace std;

class Date {
private:
    int month, day, year;

public:
    void getDate() {
        char slash;
        cout << "Введите дату (MM/DD/YY): ";
        cin >> month >> slash >> day >> slash >> year;
    }

    void showDate() const {
        cout << "Дата: " << month << "/" << day << "/" << year << endl;
    }
};

int main() {
    Date d;
    d.getDate();
    d.showDate();

    return 0;
}
