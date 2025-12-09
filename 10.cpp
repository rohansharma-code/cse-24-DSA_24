#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string str1, str2;
    cout << "Ennter Your Name: ";
    getline(cin, str1);
    sorrt (str1.begin(), str1.end());
    cout << "Sorted Name: " << str1 << endl;
    return 0;
}