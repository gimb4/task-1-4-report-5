#include <iostream>
using namespace std;
int main() {
    setlocale(0,"");
    int height;

    
    cout << "Введите высоту: ";
    
    cin >> height;
    cout << " " << endl;
    cout << "Равнобедренный треугольник" << endl;
    cout << " " << endl;
    
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height - i - 1; ++j)
            cout << ' ';
        for (int j = 0; j < 2 * i + 1; ++j)
            cout << '*';
        cout << '\n';
    }
    cout << " " << endl;
    cout << "Равнобедренная трапеция" << endl;
    cout << " " << endl;
    
    int trapHeight = height / 2; 
    int trapWidth = height * 2 - 1; 
    for (int i = 0; i < trapHeight; ++i) {
        for (int j = 0; j < i; ++j)
            cout << ' ';
        for (int j = 0; j < trapWidth - 2 * i; ++j)
            cout << '*';
        cout << '\n';
    }

    return 0;
}