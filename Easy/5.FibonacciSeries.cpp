#include<iostream>
using namespace std;

int main(){
     int num,sum,a=0,b=1;
     cout <<"Enter the Number ";
     cin >> num;
     cout <<" "<< a <<" " <<b;
     while (3)
     {
          sum = a + b;
          if(sum>num)
               break;
          cout << " "<<sum;
          a = b;
          b = sum;
     }
     
          return 0;
}