#include<iostream>
using namespace std;

int main(){
      
     int start, end , sum = 0;
     cout << "Enter the starting and Ending range  ";
     cin >> start >> end;
     start = start % 2 == 0 ? start : start + 1;
     for (int i = start; i <= end; i+=2)
          sum += i;
          
     cout << "The sum is  " << sum;
     return 0;
}