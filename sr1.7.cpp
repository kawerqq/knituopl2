#include <iostream>
#include <string>
using namespace std;
int main(){
    int k, k2;
    string s;
    cout << "Введите текст ";
    getline(cin, s);
    cout << "Введите порядковый номер ";
    cin >> k;
    if (k>s.length() || k<0) {
        cout << "Вводите от 0 до "<< s.length() << endl;  
        exit(0);      
    } else {
        cout << "Ваша буква " << s[k-1] << "\n";
    }
    cout << "Введите второй порядковый номер ";
    cin >> k2;
    if (k2>s.length() || k2<k) {
        cout << "Вводите от "<< k <<" до "<< s.length() << endl;  
        exit(0);      
    } else {
        int a=k-1,b=k2-1;
        while(a <= b){
            cout << s[a];
            a++;
        }
        
    }
    
    cout << "\n";
}