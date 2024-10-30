#include<iostream>
using namespace std;

int main(){
     string str;
     cout << "Enter any string  ";
     getline(cin, str);
     
     int len,vowel=0 , cons=0;
     bool isSame = true;
     for (len = 0; str[len]; len++){
          if((int(str[len])>=65 && int(str[len])>=90) || (int(str[len])>=97 && int(str[len])>=122)){
               if(str[len] == 'a' || str[len] == 'e' || str[len] == 'i'|| str[len] == 'o' || str[len] == 'u' || str[len] == 'A' || str[len] == 'E' || str[len] == 'I'|| str[len] == 'O' || str[len] == 'U')
                    vowel++;
               else
                    cons++;
          }
     }

     cout << "Vowel =  " << vowel << endl
          << "Consonant =  " << cons;

     return 0;
}