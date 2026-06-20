#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, n;
    cout << "Enter a string: ";
    getline(cin, s);

    int begin = 0;
    int end = s.length() - 1;
    while (begin < end ){
        while (begin < end && !isalnum(s[begin])) {
            begin++;
        }
        while (begin < end && !isalnum(s[end])) {
            end--;
        }
        if (tolower(s[begin]) != tolower(s[end])) {
            cout << "The string is not a palindrome." << endl;
            return 0;
        }
        begin++;
        end--;

    }
    cout << "The string is a palindrome." << endl;
    return 0;
}