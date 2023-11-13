#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int count = 0;  
    int sum = 0;    
    int number;     
    while (true) {
        cout << "Введите число (для завершения введите 0): ";
        cin >> number;

        if (number == 0) {
            break;  
        }

        count++;          
        sum += number;    
    }

    cout << "Количество чисел: " << count << endl;
    cout << "Сумма чисел: " << sum << endl;

    
    if (count != 0) {
       int average = static_cast<double>(sum) / count;  
        cout << "Среднее арифметическое: " << average << endl;
    }
    else {
        cout << "Нет чисел для вычисления среднего арифметического." << endl;
    }

    return 0;
}