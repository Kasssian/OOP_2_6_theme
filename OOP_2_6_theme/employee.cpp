#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    float salary;

public:
    void getData() {
        cout << "������� ����� ����������: ";
        cin >> id;
        cout << "������� ����� ����������: ";
        cin >> salary;
    }

    void displayData() const {
        cout << "��������� �" << id << ", �����: " << salary << " ���." << endl;
    }
};

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; i++) {
        cout << "������� ������ ��� ���������� " << i + 1 << ":" << endl;
        employees[i].getData();
    }

    cout << "\n������ �����������:\n";
    for (int i = 0; i < 3; i++) {
        employees[i].displayData();
    }

    return 0;
}
