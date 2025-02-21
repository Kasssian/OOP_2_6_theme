#include <iostream>
using namespace std;

enum Etype { LABORER, SECRETARY, MANAGER };

class Date {
public:
    int month, day, year;

    void getDate() {
        char slash;
        cout << "Введите дату приёма на работу (MM/DD/YY): ";
        cin >> month >> slash >> day >> slash >> year;
    }

    void showDate() const {
        cout << month << "/" << day << "/" << year;
    }
};

class Employee {
private:
    int id;
    float salary;
    Date hireDate;
    Etype jobType;

public:
    void getEmploy() {
        cout << "Введите номер сотрудника: ";
        cin >> id;
        cout << "Введите оклад сотрудника: ";
        cin >> salary;
        hireDate.getDate();

        int type;
        cout << "Введите должность (0 - Лаборант, 1 - Секретарь, 2 - Менеджер): ";
        cin >> type;
        jobType = static_cast<Etype>(type);
    }

    void putEmploy() const {
        cout << "Сотрудник №" << id << ", оклад: " << salary << " руб., дата приёма: ";
        hireDate.showDate();
        cout << ", должность: ";
        switch (jobType) {
        case LABORER: cout << "Лаборант"; break;
        case SECRETARY: cout << "Секретарь"; break;
        case MANAGER: cout << "Менеджер"; break;
        }
        cout << endl;
    }
};

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; i++) {
        cout << "Введите данные для сотрудника " << i + 1 << ":" << endl;
        employees[i].getEmploy();
    }

    cout << "\nДанные сотрудников:\n";
    for (int i = 0; i < 3; i++) {
        employees[i].putEmploy();
    }

    return 0;
}
