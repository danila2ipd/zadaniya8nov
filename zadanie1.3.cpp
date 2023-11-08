

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    const int maxSize = 50; 
    int array[maxSize]; 
    int n; 

   
    cout << "Введите количество элементов: ";
    cin >> n;

   
    for (int i = 0; i < n; i++) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> array[i];
    }

    
    cout << "Количество элементов: " << n << endl;

    
    cout << "Содержимое массива: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << std::endl;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] % 3 == 0) {
            sum += array[i];
        }
    }
    cout << "Сумма элементов, кратных 3: " << sum << endl;

    return 0;
}