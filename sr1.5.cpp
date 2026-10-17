#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int a, n;
    double c=1;
    cout << "Введите число ";
    cin >> a;
    cout << "В какую степень хотите возвести ";
    cin >> n;
    
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