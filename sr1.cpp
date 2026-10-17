#include <iostream> 
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double rost, ves;
    cout << "Введите рост ";
    cin >> rost;
    cout << "Введите вес ";
    cin >> ves;
    cout << "Ваш ИМТ " << fixed << setprecision(1) << ves/pow(rost/100.0, 2) << endl;
    return 0;
}

