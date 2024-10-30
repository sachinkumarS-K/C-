#include<iostream>
using namespace std;

int main(){

      int num,fact = 1,sum = 0;
     cout << "Enter any number  ";
     cin >> num;
     for (int i = num; i > 1;i--)
          fact *= i;
     while(fact){
          sum += fact % 10;
          fact /= 10;
     }
     cout << "Sum of digits  " << sum;

     return 0;
}