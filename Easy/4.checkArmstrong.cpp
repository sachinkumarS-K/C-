#include<iostream>
using namespace std;

int main(){

     int num , sum=0,rem , temp;
     cout << "Enter any number  ";
     cin >> num;

     temp = num;
     while (temp)
     {
          rem = temp % 10;
          sum += rem * rem * rem;
          temp /= 10;
     }

     if(sum == num)
          cout << "The number is armstrong number";
     else
           cout << "The number is not armstrong number";

  return 0 ;
}