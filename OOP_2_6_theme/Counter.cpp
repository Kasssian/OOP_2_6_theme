#include <iostream>
using namespace std;

class Counter {
private:
    static int count;
    int number;

public:
    Counter() {
        count++;
        number = count;
    }

    void showNumber() const {
        cout << "Мой порядковый номер: " << number << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter a, b, c;
    a.showNumber();
    b.showNumber();
    c.showNumber();

    return 0;
}
