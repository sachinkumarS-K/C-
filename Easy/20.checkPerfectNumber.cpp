#include<iostream>
using namespace std;

int main(){
       int num,sum = 0;
     cout << "Enter any number  ";
     cin >> num;
     for (int i = 1; i <= num / 2; i++){
          if(num %i == 0){
               sum += i;
          }
     }
     if(sum == num){
          cout << "It is Perfect divisor";
     }
     else{
          cout << "It is not Perfect divisor";
     }
          return 0;
}