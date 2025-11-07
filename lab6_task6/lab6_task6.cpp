
#include <iostream>
using namespace std;

int sumArray(int arr[],int size) {
	int sum = 0;
	for (int i = 0; i < size;i++) {
		
		sum += arr[i];
		
	}
	return sum;
}
int main()
{
	int arr[] = { 3,4,5,9,2 };
	int size = 5;
	int total=sumArray(arr,size);
	cout << "sum of numbers are: " << total;
}


