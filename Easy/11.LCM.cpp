#include<iostream>
using namespace std;

int main(){
     int num1,num2,lcm;
     cout << "Enter two numbers  ";
     cin >> num1>>num2;
     int max = num1 > num2 ? num1 : num2;
     while (10)
     {
          if(max%num1 == 0 && max%num2 == 0){
               cout << "The lcm is " << max;
               break;
          }
          ++max;
     }
     
     return 0;
}