#include <iostream>
#include <string>
using namespace std;

class Worker {
private:
    string name;
    string position;
    int yearOfHire;
    double salary;

public:
    explicit Worker(const string& n = "", const string& pos = "", int year = 0, double sal = 0.0)
        : name(n), position(pos), yearOfHire(year), salary(sal) {
    }

    void print() const {
        cout << "ПІБ: " << name << ", Посада: " << position
            << ", Рік вступу: " << yearOfHire << ", Зарплата: " << salary << " грн" << endl;
    }

    int getYearOfHire() const { return yearOfHire; }
    double getSalary() const { return salary; }
    string getPosition() const { return position; }
};

int main() {
    const int SIZE = 5;
    Worker workers[SIZE] = {
        Worker("Іваненко Іван Іванович", "Інженер", 2010, 15000),
        Worker("Петренко Олена Сергіївна", "Бухгалтер", 2015, 12000),
        Worker("Сидорчук Андрій Миколайович", "Менеджер", 2008, 18000),
        Worker("Ковальчук Марія Іванівна", "Інженер", 2012, 16000),
        Worker("Ткаченко Володимир Павлович", "Директор", 2005, 30000)
    };

    int currentYear;
    cout << "\nВведіть поточний рік: ";
    cin >> currentYear;

    int minExperience;
    cout << "Введіть мінімальний стаж (роки): ";
    cin >> minExperience;

    cout << "\nПрацівники зі стажем більше ніж " << minExperience << " років:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        int experience = currentYear - workers[i].getYearOfHire();
        if (experience > minExperience) {
            workers[i].print();
        }
    }

    double minSalary;
    cout << "\nВведіть мінімальну зарплату: ";
    cin >> minSalary;

    cout << "\nПрацівники із зарплатою більше " << minSalary << " грн:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        if (workers[i].getSalary() > minSalary) {
            workers[i].print();
        }
    }

    cin.ignore();
    string searchPosition;
    cout << "\nВведіть посаду для пошуку: ";
    getline(cin, searchPosition);

    cout << "\nПрацівники на посаді \"" << searchPosition << "\":" << endl;
    for (int i = 0; i < SIZE; ++i) {
        if (workers[i].getPosition() == searchPosition) {
            workers[i].print();
        }
    }

    return 0;
}
