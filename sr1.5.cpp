#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int a, n;
    double c=1;
    cout << "Введите число " << endl;
    cin >> a;
    if (cin.fail()) {
        cout << "Ошибка: введено не число" << endl;
        return 0;
    }
    cout << "В какую степень хотите возвести " << endl;
    cin >> n;
    if (cin.fail()) {
        cout << "Ошибка: введено не число" << endl;
        return 0;
    }
    
    if (n >= 0){
        for (int i=0; i<n; i++){
            c=c*a;
        }
    } else {
        for (int i=0; i<(-n); i++){
            c=c*a;
        }
        c= 1.0 /c;
    }
    cout << c << endl;
    return 0;
}