#include<iostream>
using namespace std;

int main(){
     int start, end, sum ,temp,rem;
     cout << "Enter the starting and Ending range  ";
     cin >> start >> end;

     for (int i = start; i <= end; i++){
           temp = i;
           sum = 0;
           while (temp)
           {
                rem = temp % 10;
                sum += rem * rem * rem;
                temp /= 10;
           }

     if(sum == i)
          cout << i <<"  ";
          }
          return 0;
}