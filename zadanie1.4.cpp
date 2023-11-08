
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    const int maxSize = 50;
    int X[maxSize]; 
    int n; 

   
    cout << "Введите количество элементов: ";
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> X[i]; 

    
    int maxElement = X[0];
    int minElement = X[0];
    int maxIndex = 0;
    int minIndex = 0;

    
    for (int i = 1; i < n; i++) {
        if (X[i] > maxElement) {
            maxElement = X[i];
            maxIndex = i;
        }
        if (X[i] < minElement) {
            minElement = X[i];
            minIndex = i;
        }
    }

    
    cout << "Максимальный элемент: " << maxElement << ", номер: " << maxIndex << endl;

    
    cout << "Минимальный элемент: " << minElement << ", номер: " << minIndex << endl;

    return 0;
}

