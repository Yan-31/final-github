#include <iostream>
#include <string>
using namespace std;

class Computer {
private:
    string make;
    string model;
    string cpu;
    string ram;
    string hardDrive;
    string type;

public:
    // Default constructor
    Computer() {
        make = "Lenovo";
        model = "LE100A";
        cpu = "Intel";
        ram = "32GB";
        hardDrive = "HD";
        type = "Laptop";
    }

    // Setters
    void Computer_Make(string m) {
        if (m == "Lenovo" || m == "HP" || m == "Apple")
            make = m;
        else
            make = "Lenovo";
    }

    void Computer_Model(string mod) {
        model = mod;
    }

    void Computer_CPU(string c) {
        if (c == "Intel" || c == "AMD")
            cpu = c;
        else
            cpu = "Intel";
    }

    void Computer_RAM(string r) {
        if (r == "8GB" || r == "16GB" || r == "32GB")
            ram = r;
        else
            ram = "32GB";
    }

    void Computer_HardDrive(string hd) {
        if (hd == "SSD" || hd == "HD")
            hardDrive = hd;
        else
            hardDrive = "HD";
    }

    void Computer_Type(string t) {
        if (t == "Laptop" || t == "Notebook" || t == "Tablet" || t == "Desktop")
            type = t;
        else
            type = "Laptop";
    }

    // Compute cost
    double Computer_Cost() {
        double cost = 0;

        // Make
        if (make == "Lenovo") cost += 1200;
        else if (make == "HP") cost += 1000;
        else if (make == "Apple") cost += 2000;

        // CPU
        if (cpu == "Intel") cost += 200;

        // RAM
        if (ram == "16GB") cost += 300;
        else if (ram == "32GB") cost += 500;

        // Hard Drive
        if (hardDrive == "SSD") cost += 500;

        // Type
        if (type == "Laptop") cost += 300;
        if (type == "Tablet") cost -= 200;

        return cost;
    }

    // Display
    void display() {
        cout << "\n--- Computer Asset Information ---\n";
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "CPU: " << cpu << endl;
        cout << "RAM: " << ram << endl;
        cout << "Hard Drive: " << hardDrive << endl;
        cout << "Type: " << type << endl;
        cout << "Total Cost: $" << Computer_Cost() << endl;
    }
};

int main() {
    Computer c;
    string make, model, cpu, ram, hd, type;

    cout << "Enter computer data (CTRL+Z to stop)\n\n";

    while (true) {
        cout << "Computer Make (Lenovo/HP/Apple): ";
        if (!(cin >> make)) break;

        cout << "Computer Model (no spaces): ";
        cin >> model;

        cout << "CPU (Intel/AMD): ";
        cin >> cpu;

        cout << "RAM (8GB/16GB/32GB): ";
        cin >> ram;

        cout << "Hard Drive (SSD/HD): ";
        cin >> hd;

        cout << "Computer Type (Laptop/Notebook/Tablet/Desktop): ";
        cin >> type;

        // Load the object
        c.Computer_Make(make);
        c.Computer_Model(model);
        c.Computer_CPU(cpu);
        c.Computer_RAM(ram);
        c.Computer_HardDrive(hd);
        c.Computer_Type(type);

        // Display
        c.display();

        cout << endl;
    }

    return 0;
}

