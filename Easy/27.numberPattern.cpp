#include<iostream>
using namespace std;

int main(){

     int row , sum = 1;
     cout << "Enter the no of rows  ";
     cin >> row;

     for (int i = 1; i <= row; i++){
          for (int j = 1; j <= i; j++)
               cout << sum++ << " ";
          cout << endl;
     }

          return 0;
}