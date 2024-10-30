#include<iostream>
using namespace std;

int main(){

     int arr[] = {4, 6, 1, 7, 2, 9, 21, 5};
     int len = sizeof(arr) / sizeof(arr[0]);
     int largest = arr[0], smallest= arr[0];
     for (int i = 1; i < len; i++){
          if(largest <arr[i])
               largest = arr[i];
          if(smallest> arr[i])
               smallest = arr[i];
     }
     cout << "The smallest is  " << smallest << endl
          << "The largest is  " << largest;
     return 0;
}