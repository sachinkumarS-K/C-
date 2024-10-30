#include<iostream>
using namespace std;

int main(){
     string str;
     cout << "Enter any string  ";
     cin >> str;
     int len;
     bool isSame = true;
     for (len = 0; str[len]; len++);

     for (int i = 0; i < len / 2; i++){
          if(str[i] != str[len-1-i]){
               isSame = false;
               break;
          }
     }
     if(isSame)
          cout << "the string is palindrome";
     else
          cout << "The string is not palindrome";

          return 0;
}