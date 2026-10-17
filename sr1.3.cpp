#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string s;
    cout << "Введите строку: ";
    getline(cin, s);
    string punctuation = ".,!?;:-()\"";
    int a=0, d=0, probel=0, prep=0;
    for (unsigned char ch :s){
        if (isalpha(ch)){
            a++;
        } else if (isdigit(ch)){
            d++;
        } else if (isspace(ch)){
            probel++;
        } else if (punctuation.find(ch) != string::npos){
            prep++;
        }
    }
cout << "Букв: " << a << endl;
cout << "Цифр: " << d << endl;
cout << "Пробелов: " << probel << endl;
cout << "Знаков препинания: " << prep << endl;
}
