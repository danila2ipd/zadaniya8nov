

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    const int maxSize = 10; 
    int staticArray[maxSize] = { 10,20,30,40,50,60,70,80,90,100}; 

    
    int n = sizeof(staticArray) / sizeof(staticArray[0]);

   
    int maxElement = staticArray[0];
    int minElement = staticArray[0];
    int maxIndex = 0;
    int minIndex = 0;

   
    for (int i = 1; i < n; i++) {
        if (staticArray[i] > maxElement) {
            maxElement = staticArray[i];
            maxIndex = i;
        }
        if (staticArray[i] < minElement) {
            minElement = staticArray[i];
            minIndex = i;
        }
    }

    
    cout << "Максимальный элемент: " << maxElement << " Номер: " << maxIndex << endl;

   
    cout << "Минимальный элемент: " << minElement << " Номер: " << minIndex << endl;

    return 0;
}


