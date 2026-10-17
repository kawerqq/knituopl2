#include <iostream>
#include <iomanip>
#include <bitset>
#include <string>
using namespace std;
int main(){
    long c;
    cout << "Введите число: ";
    cin >> c;
    int n=c;
    string bin = "";
    while (n>0){
        bin = char('0' + n%2) + bin;
        n/=2;
    } 
    cout << "В двоичной " << bin << endl;
    cout << "В восьмеричной " << oct << c << endl;
    cout << "В шестнадцатеричной " << uppercase << hex << c << endl;
    return 0;
}

