#include <iostream>
using namespace std;

class Angle {
private:
    int degrees;
    float minutes;
    char direction;

public:
    Angle(int d, float m, char dir) : degrees(d), minutes(m), direction(dir) {}

    void getAngle() {
        cout << "¬ведите координату (градусы минуты направление, например, 149 34.8 W): ";
        cin >> degrees >> minutes >> direction;
    }

    void showAngle() const {
        cout << degrees << "∞" << minutes << "' " << direction << endl;
    }
};

int main() {
    Angle a1(179, 59.9, 'E');
    a1.showAngle();

    Angle a2(0, 0, 'N');
    while (true) {
        a2.getAngle();
        a2.showAngle();
    }

    return 0;
}
