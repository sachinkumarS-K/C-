#include<iostream>
using namespace std;

int main(){
      int num,fact = 1;
     cout << "Enter any number  ";
     cin >> num;

     for (int i = 1; i <= num; i++)
          fact *= i;

     cout << "The factorial of " << num << " is " << fact;
     return 0;
}