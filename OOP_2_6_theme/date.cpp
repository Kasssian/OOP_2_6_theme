#include <iostream>
using namespace std;

class Date {
private:
    int month, day, year;

public:
    void getDate() {
        char slash;
        cout << "������� ���� (MM/DD/YY): ";
        cin >> month >> slash >> day >> slash >> year;
    }

    void showDate() const {
        cout << "����: " << month << "/" << day << "/" << year << endl;
    }
};

int main() {
    Date d;
    d.getDate();
    d.showDate();

    return 0;
}
