
#include <iostream>
using namespace std;

void swap(int* ptrA, int* ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

}
int main()
{
    int a = 10;
    int b = 20;
    cout << "before swap  a= " << a<<"b=" << b<<endl;
    swap(&a, &b);
    cout << "after swap  a= " << a <<"b="<< b;
}

