#include <iostream>
using namespace std;

class Angle {
public:
    int degrees;
    float minutes;
    char direction;

    void getAngle() {
        cin >> degrees >> minutes >> direction;
    }

    void showAngle() const {
        cout << degrees << "°" << minutes << "' " << direction;
    }
};

class Ship {
private:
    static int count;
    int shipNumber;
    Angle latitude, longitude;

public:
    Ship() {
        count++;
        shipNumber = count;
    }

    void getShip() {
        cout << "Введите координаты (широта: градусы минуты направление): ";
        latitude.getAngle();
        cout << "Введите координаты (долгота: градусы минуты направление): ";
        longitude.getAngle();
    }

    void showShip() const {
        cout << "Корабль №" << shipNumber << ", координаты: ";
        latitude.showAngle();
        cout << ", ";
        longitude.showAngle();
        cout << endl;
    }
};

int Ship::count = 0;

int main() {
    Ship ships[3];

    for (int i = 0; i < 3; i++) {
        ships[i].getShip();
    }

    for (int i = 0; i < 3; i++) {
        ships[i].showShip();
    }

    return 0;
}
