#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Введіть розмірність квадратної матриці (n x n): ";
    cin >> n;

    vector<vector<double>> matrix(n, vector<double>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Введіть елемент [" << i << "][" << j << "]: ";

            cin >> *(matrix[i].data() + j);
        }
    }

    double traceSum = 0;
    for (int i = 0; i < n; i++) {
        traceSum += *(matrix[i].data() + i);
    }

    cout << "\nСума елементів головної діагоналі (слід матриці): " << traceSum << endl;

    return 0;
}