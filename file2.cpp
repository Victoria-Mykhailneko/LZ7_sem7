#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;

    cout << "Введіть розмір масиву: ";
    cin >> size;

    vector<double> arr(size);

    for (int i = 0; i < size; i++) {
        cout << "Введіть елемент " << i << ": ";
        cin >> *(arr.data() + i); 
    }

    double sum = 0;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (*(arr.data() + i) > 0) { 
            sum += *(arr.data() + i);
            count++;
        }
    }

    if (count > 0) {
        double average = sum / count;
        cout << "\nКількість додатних елементів: " << count << endl;
        cout << "Середнє арифметичне додатних елементів: " << average << endl;
    } else {
        cout << "\nУ масиві немає додатних елементів!" << endl;
    }

    return 0; 
}