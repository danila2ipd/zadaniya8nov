

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    const int maxSize = 10; 
    int staticArray[maxSize] = {1,2,3,4,5,6,7,8,9,10 }; 
    
    int n = sizeof(staticArray) / sizeof(staticArray[0]);
    
    cout << "Количество элементов: " << n << endl;

    cout << "Содержимое массива: ";
    for (int i = 0; i < n; i++) {
        cout << staticArray[i] << " ";
    }
    cout << endl;
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (staticArray[i] % 3 == 0) {
            sum += staticArray[i];
        }
    }

    cout << "Сумма элементов, кратных 3: " << sum << endl;

    return 0;
}
