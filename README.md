#Лабораторна робота №7: Опрацювання динамічних масивів
**Виконала:** студентка групи 4 СОМ Вікторія Михайленко (Варіант № 9)

**Мета:** набути практичних навиків програмного використання вказівників та динамічної пам’яті при
опрацюванні масивів.

##  Завдання
**Завдання 1:**
<img width="461" height="18" alt="image" src="https://github.com/user-attachments/assets/498d71e7-1b82-4771-8417-2161e632b5ce" />

**Завдання 2:**
<img width="384" height="17" alt="image" src="https://github.com/user-attachments/assets/18bdd25d-9e42-4eec-907e-bb9ea1898496" />

### 💻 Код програми Завдання 1 вказівник:
```cpp
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Введіть розмір масиву: ";
    cin >> size;

    double* arr = new double[size];

    for (int i = 0; i < size; i++) {
        cout << "Введіть елемент " << i << ": ";
        cin >> *(arr + i); 
    }

    double sum = 0;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (*(arr + i) > 0) { 
            sum += *(arr + i);
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

    delete[] arr;

    return 0;
}
```

**Результат**
<img width="857" height="581" alt="image" src="https://github.com/user-attachments/assets/272095d2-122e-4a3b-bf8f-1d310fb1d4fe" />

### 💻 Код програми Завдання 1 вектор:
```cpp
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
```
**Результат**
<img width="864" height="550" alt="image" src="https://github.com/user-attachments/assets/4a47da9e-2cc1-400f-887f-83b80a53522c" />
