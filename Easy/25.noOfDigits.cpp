#include<iostream>
using namespace std;

int main(){

      int num , digits=0;
     cout << "Enter any number  ";
     cin >> num;

     while(num){
          digits++;
          num /= 10;
     }
     cout << "Digits =  " << digits;

     return 0;
}