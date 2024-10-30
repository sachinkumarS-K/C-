#include<iostream>
using namespace std;

int main(){
     int num;
     cout << "Enter the ending range  ";
     cin >> num;
     for (int i = 1; i <= num; i++){
          int count = 0;
          for (int j = 2; j < i; j++){
               if(i%j ==0)
                    count++;
          }
          if(count == 0)
               cout << i << "  ";
     }
          return 0;
}