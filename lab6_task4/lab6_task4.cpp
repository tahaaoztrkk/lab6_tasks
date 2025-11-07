
#include <iostream>
using namespace std;

void printInfo(string name, int age) {
    cout << "name: " << name << "age: " << age;

}

void printInfo(string course, int code) {
    cout << "course: " << course << "code: " << code;

}
int main()
{
    printInfo("Taha", 23);
    printInfo("programming", 104);
}


