#include <iostream>
#include <fstream>
using namespace std;

double getAverage(string filename) {
    ifstream file(filename);
    int numbers[100];
    int count = 0;
    int sum = 0;

    if (file.is_open()) {
        while (file >> numbers[count]) {
            count++;
        }
        file.close();
    }

    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }

    return (count > 0) ? (double)sum / count : 0;
}

int main() {
    double average = getAverage("grades.txt");
    cout << "Average: " << average << endl;
    return 0;
}