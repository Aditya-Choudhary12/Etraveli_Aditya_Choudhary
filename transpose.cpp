#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows and columns of matrix: ";
    cin >> m >> n;

    int mat[m][n];
    cout << "Enter the matrix elements:\n";
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Original Matrix:\n";
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    int transpose[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            transpose[i][j] = mat[j][i];
        }
    }

    cout << "Transpose of Matrix:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
