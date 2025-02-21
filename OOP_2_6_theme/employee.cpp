#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    float salary;

public:
    void getData() {
        cout << "Введите номер сотрудника: ";
        cin >> id;
        cout << "Введите оклад сотрудника: ";
        cin >> salary;
    }

    void displayData() const {
        cout << "Сотрудник №" << id << ", оклад: " << salary << " руб." << endl;
    }
};

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; i++) {
        cout << "Введите данные для сотрудника " << i + 1 << ":" << endl;
        employees[i].getData();
    }

    cout << "\nДанные сотрудников:\n";
    for (int i = 0; i < 3; i++) {
        employees[i].displayData();
    }

    return 0;
}
