#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 25, 5, 40, 15};
    int max = a[0];

    for(int i = 1; i < 5; i++) {
        if(a[i] > max)
            max = a[i];
    }

    cout << "Largest element = " << max;

    return 0;
}