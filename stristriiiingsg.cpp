#include <iostream>
using namespace std;



int main(){
    
    string str1 = "Hi! Welcome Home";
    string str2 = "I am Nik";
    cout << str1.insert(4, "Joy ") << endl;
    cout << str1.insert(4, str2) << endl;
    cout << str1.insert(21, ". What will you have?", 4,5) << endl;
  return 0;
}