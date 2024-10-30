#include<iostream>
using namespace std;

int main(){

     string str;
     cout << "Enter any string  ";
    getline(cin, str);
     int len;
     for (len = 0; str[len]; len++);
     for (int i = 0; i < len / 2; i++){
          char t = str[i];
          str[i] = str[len - 1 - i];
          str[len - 1 - i] = t;
     }
     cout << "The reversed string is  " << str;
     return 0;
}