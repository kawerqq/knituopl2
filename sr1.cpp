#include <iostream> 
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double rost, ves;
    cout << "Введите рост ";
    cin >> rost;
    if (cin.fail()) {
        cout << "Ошибка: введено не число" << endl;
        return 0;
    }
    cout << "Введите вес ";
    cin >> ves;
    if (cin.fail()) {
        cout << "Ошибка: введено не число" << endl;
        return 0;
    }
    cout << "Ваш ИМТ " << fixed << setprecision(1) << ves/pow(rost/100.0, 2) << endl;
    return 0;
}

