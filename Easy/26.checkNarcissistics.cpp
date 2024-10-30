#include<iostream>
using namespace std;

int calculatePower(int n , int p){
     if(p == 1)
          return n;
     else
          return n * calculatePower(n, p - 1);
}

int main(){

     int num , digits=0,sum = 0;
     cout << "Enter any number  ";
     cin >> num;
     int temp = num;

     while(temp){
          digits++;
          temp /= 10;
     }
     temp = num;
    
     while(temp){
          int rem = temp % 10;
          sum += calculatePower(rem, digits);
          temp /= 10;
     }
     if(sum == num)
          cout << "Narcissistic Number";
     else
          cout << "Not a Narcissistic Number";

     return 0;
}