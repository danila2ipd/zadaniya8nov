

#include <iostream>
using namespace std;


int main() {
    setlocale(LC_ALL, "russian");
    int n, sum = 0;

    
    cout << "Введите число n: ";
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Сумма от 1 до " << n << " равна " << sum << endl;

    return 0;
}

