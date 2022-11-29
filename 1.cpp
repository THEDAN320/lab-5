#include <iostream>
using namespace std;

void areth(int* arr) {
    double ar = 0;
    int count;

    for (count = 0 ; count < 10 ; count++ ) {
        ar += arr[count];
    }
        cout << ar/count;
}

void math_wait(int* arr) {
    int x;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int z = 0;
            if (arr[i] != arr[j] && z == 0) {
                x[i] = arr[i];
                z++;
            }
        }
    }
}


int main()
{
    int arr[10] = { 5, 1, 0, 9, 7, 15, 18,-12, -1, -20 };

    areth(arr);
}

