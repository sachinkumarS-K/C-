#include<iostream>
using namespace std;

int main(){
     int n;
     cout << "Enter the no of rows  ";
     cin >> n;

     for (int i = 0; i < n; i++){
          for (int s = n-1; s > i; s--)
               cout << " ";
          for (int j = 0; j < 2 * i + 1; j++)
               cout << "*";
          cout << endl;
     }
          return 0;
}