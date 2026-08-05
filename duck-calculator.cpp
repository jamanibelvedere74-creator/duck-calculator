#include <iostream>
#include <cmath>
using namespace std;


int main(){
int result;
int num1;
int num2;
int num3;
int mode;
char ch;
char ch2;

cout << "welcome to duckcalculator a simple calculator made in C++\n";
cout << "pick a mode 1-2 ";
cin >> mode;
if (mode == 1)
{
    cout << "you picked normal mode\n";
    cout << "use +-* ";
cin >> ch;
cout << "type number";
cin >> num1;
cout << "type second number";
cin >> num2;

switch(ch){
    case '+':
    result = num1 + num2;
    cout << result;
    break;
    case '-':
    result = num1 - num2;
    cout << result;
    break;
    case '*':
    result = num1 * num2;
    cout << result;
    break;
}}else if (mode == 2)
{
    cout << "you picked 3 numbers mode\n";
    cout << "welcome to duckcalculator 3 numbers mode\n";
cout << "use +-* ";
cin >> ch;
cout << "second";
cin >> ch2;
cout << "type number";
cin >> num1;
cout << "type second number";
cin >> num2;
cout << "type finale number";
cin >> num3;

switch(ch2){
    case '+':
    result = num1 + num2 + num3;
    cout << result;
    break;
    case '-':
    result = num1 - num2 - num3;
    cout << result;
    break;
    case '*':
    result = num1 * num2 * num3;
    cout << result;
    break;
}
}

}