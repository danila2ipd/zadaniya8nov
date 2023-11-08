
#include <iostream>

using namespace std;



int main() {
    setlocale(LC_ALL, "russian");

    int n, minNum, count = 0;

    
    cout << "Введите количество чисел в последовательности: ";
    cin >> n;

    
    cout << "Введите первое число: ";
    cin >> minNum;

    
    int currentNum = minNum;

    
    for (int i = 1; i < n; ++i) {
        int num;
        cout << "Введите следующее число: ";
        cin >> num;

        if (num < minNum) {
            minNum = num;
            count = 1;
        }
        else if (num == minNum) {
            count++;
        }
    }

    
    cout << "Минимальное число: " << minNum << endl;
    cout << "Количество повторений: " << count << endl;

    return 0;
}

