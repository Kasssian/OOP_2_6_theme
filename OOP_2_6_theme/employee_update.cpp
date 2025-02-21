#include <iostream>
using namespace std;

enum Etype { LABORER, SECRETARY, MANAGER };

class Date {
public:
    int month, day, year;

    void getDate() {
        char slash;
        cout << "������� ���� ����� �� ������ (MM/DD/YY): ";
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
        cout << "������� ����� ����������: ";
        cin >> id;
        cout << "������� ����� ����������: ";
        cin >> salary;
        hireDate.getDate();

        int type;
        cout << "������� ��������� (0 - ��������, 1 - ���������, 2 - ��������): ";
        cin >> type;
        jobType = static_cast<Etype>(type);
    }

    void putEmploy() const {
        cout << "��������� �" << id << ", �����: " << salary << " ���., ���� �����: ";
        hireDate.showDate();
        cout << ", ���������: ";
        switch (jobType) {
        case LABORER: cout << "��������"; break;
        case SECRETARY: cout << "���������"; break;
        case MANAGER: cout << "��������"; break;
        }
        cout << endl;
    }
};

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; i++) {
        cout << "������� ������ ��� ���������� " << i + 1 << ":" << endl;
        employees[i].getEmploy();
    }

    cout << "\n������ �����������:\n";
    for (int i = 0; i < 3; i++) {
        employees[i].putEmploy();
    }

    return 0;
}
