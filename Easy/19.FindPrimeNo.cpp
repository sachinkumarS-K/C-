#include<iostream>
using namespace std;

int main(){
     int start, end , count;
     cout << "Enter the starting and Ending range  ";
     cin >> start >> end;
     for (int i = start; i <= end; i++){
          count = 0;
          for (int j = 2; j < start; j++){
               if(i%j == 0)
                    count++;
          }
          if(count == 0)
               cout << i << "  ";
     }
          return 0;
}