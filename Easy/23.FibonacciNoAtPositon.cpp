#include<iostream>
using namespace std;

int main(){
     int pos,a = 0 , b = 1 , c;
     cout << "Enter the position  ";
     cin >> pos;
     for (int i = 0; i <= pos-2; i++){
          c = a + b;
          a = b;
          b = c;
     }

     cout << "Fibonacci number at positon "<<pos <<" is "<<c;
     return 0;
}