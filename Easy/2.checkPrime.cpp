#include<iostream>
using namespace std;

int main(){
     int num;
     cout << "Enter any number  ";
     cin >> num;
     bool isPrime = true;
     for (int i = 2; i < num; i++){
          if(num%i == 0){
               isPrime = false;
               break;
          }        
     }
     if(!isPrime)
          cout << "Number is Not prime";
     else
          cout << "Number is Prime";

          return 0;
}