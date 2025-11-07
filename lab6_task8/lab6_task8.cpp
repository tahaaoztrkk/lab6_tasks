#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

int main() {
    ifstream file("students.log");
    string line;
    int count = 0;

    if (file.is_open()) {
        while (getline(file, line)) {
            count++;
        }
        file.close();
    }

    cout << "Total lines: " << count << endl;
    return 0;
}