#include<bits/stdc++.h>
using namespace std;


int main(){
    string str1, str2;
    cout << "Ennter Your Name: ";
    getline(cin, str1);
    sort (str1.begin(), str1.end());
    cout << "Sorted Name: " << str1 << endl;
    return 0;
}