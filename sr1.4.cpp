#include <iostream>
using namespace std;
int main(){
    int old, m, d, g, cd=4, cm=10, cg=2026;

    cout << "Введите день ";
    cin >> d;
    cout << "Введите месяц ";
    cin >> m;
    cout << "Введите год ";
    cin >> g;
    old = cg - g;
    if (cm < m){
        cout << "Ваш возраст" << old-1 << "\n";
    }
    else if (cm==m){
        if(cd<d){
            cout << "Ваш возраст" << old-1 << "\n";
        }
        else{
            cout << "Ваш возраст" << old << "\n";
        }
    }
    else{
        cout << "Ваш возраст" << old << "\n";
    }
    return 0;
}