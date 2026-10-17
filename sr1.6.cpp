#include <iostream>

using namespace std;
int main(){
    long n;
    long i = 0;
    long summ = 0;
    cout << "Введите число ";
    cin >> n;
    if (cin.fail()) {
        cout << "Ошибка: введено не число" << endl;
        return 0;
    }
    if (n>0){
        while(i<=n){
            if (i % 5 == 0){
                summ += i;
            }
            i++;
        }
    }
    else{
        while(i>=n){
            if (i % 5 == 0){
                summ += i;
            }
            i--;
        }
    }
    cout << summ << endl;
    return 0;
}
