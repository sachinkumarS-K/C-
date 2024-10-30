#include<iostream>
using namespace std;


int main(){
     int arr[] = {4, 6, 1, 7};
     int sum = 0 , len = sizeof(arr) / sizeof(arr[0]);

     for (int i = 0; i < len; i++)
          sum += arr[i];
     
     cout << "The sum of the elements are " << sum;
     return 0;
}