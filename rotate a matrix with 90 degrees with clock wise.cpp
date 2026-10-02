#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of matrix: ";
    cin >> n;

    int a[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(a[i][j], a[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++) {
        int start = 0;
        int end = n - 1;

        while (start < end) {
            swap(a[i][start], a[i][end]);
            start++;
            end--;
        }
    }

    cout << "Matrix after 90 degree clockwise rotation:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}