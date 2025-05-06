#include <iostream>
#include <string>

using namespace std;

class Reservoir {
private:
    string name;
    double width;
    double length;
    double max_depth;
    string type;

public:
    Reservoir() : name("Unnamed"), width(0), length(0), max_depth(0), type("undefined") {}

    explicit Reservoir(const string& name, double width, double length, double max_depth, const string& type)
        : name(name), width(width), length(length), max_depth(max_depth), type(type) {
    }

    double volume() const {
        return width * length * max_depth;
    }

    double surface_area() const {
        return width * length;
    }

    bool isSameType(const Reservoir& other) const {
        return type == other.type;
    }

    bool compareSurfaceArea(const Reservoir& other) const {
        return surface_area() > other.surface_area();
    }

    void displayInfo() const {
        cout << "Name: " << name << "\n"
            << "Type: " << type << "\n"
            << "Width: " << width << " meters\n"
            << "Length: " << length << " meters\n"
            << "Max Depth: " << max_depth << " meters\n"
            << "Volume: " << volume() << " cubic meters\n"
            << "Surface Area: " << surface_area() << " square meters\n";
    }

    void setName(const string& new_name) {
        name = new_name;
    }

    void setType(const string& new_type) {
        type = new_type;
    }

    string getName() const {
        return name;
    }

    string getType() const {
        return type;
    }

    Reservoir(const Reservoir& other)
        : name(other.name), width(other.width), length(other.length), max_depth(other.max_depth), type(other.type) {
    }
};

int main() {
    string name, type;
    double width, length, max_depth;

    cout << "Enter details for the first reservoir:\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Type (sea, pool, pond): ";
    getline(cin, type);
    cout << "Width (in meters): ";
    cin >> width;
    cout << "Length (in meters): ";
    cin >> length;
    cout << "Max Depth (in meters): ";
    cin >> max_depth;
    cin.ignore();

    Reservoir reservoir1(name, width, length, max_depth, type);

    cout << "\nEnter details for the second reservoir:\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Type (sea, pool, pond): ";
    getline(cin, type);
    cout << "Width (in meters): ";
    cin >> width;
    cout << "Length (in meters): ";
    cin >> length;
    cout << "Max Depth (in meters): ";
    cin >> max_depth;
    cin.ignore();

    Reservoir reservoir2(name, width, length, max_depth, type);

    cout << "\nDetails of the first reservoir:\n";
    reservoir1.displayInfo();

    cout << "\nDetails of the second reservoir:\n";
    reservoir2.displayInfo();

    if (reservoir1.isSameType(reservoir2)) {
        cout << "\nBoth reservoirs are of the same type.\n";
    }
    else {
        cout << "\nThe reservoirs are of different types.\n";
    }

    if (reservoir1.compareSurfaceArea(reservoir2)) {
        cout << reservoir1.getName() << " has a larger surface area.\n";
    }
    else {
        cout << reservoir2.getName() << " has a larger surface area.\n";
    }

    return 0;
}
