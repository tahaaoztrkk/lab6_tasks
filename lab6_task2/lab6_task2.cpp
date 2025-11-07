#include <fstream>
#include <iostream>
using namespace std;

class Student {
private:
    string name,address,favourite_color;
    int id;
public:

    Student(string n, int i, string a, string color) {
        name = n;
        id = i;
        address = a;
        favourite_color = color;
    }

    void saveToFile() {
        ofstream file("students.log",ios::app);
        if (file.is_open()) {
            file << "name:" << name<<endl;
            file << "ID: " << id<<endl;
            file << "address: " << address<<endl;
            file << "favourite color: " << favourite_color<<endl;
            file.close();
        }
    }
};

int main()
{
    
    Student s1("taha", 107, "sivas", "blue");
    Student s2("melih", 305, "usak", "pink");

    s1.saveToFile();
    s2.saveToFile();

    cout << "student informations saved to file.";


}

