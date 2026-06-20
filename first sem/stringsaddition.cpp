#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char str1[20];
  char str2 [20];
  cout << "enter 1st string: ";
  cin>>str1;
  cout << "enter 2st string: ";
  cin>>str2;
  strcat(str1, " ");
  strcat(str1, str2);
    
    cout<<str1;

}