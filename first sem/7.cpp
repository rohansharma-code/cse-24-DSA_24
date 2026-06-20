#include <bits/stdc++.h>
#include <cstring>
#include <string>
using namespace std;
int main() {
    string s;
    string cleanS;
    getline(cin,s);
    cout<<"string is: "<<s<<endl;
    
    int n = s.length();
    
    int i = 0;
    while(i<n){
        if(isalnum(s[i])){
            cleanS += tolower(s[i]);
        }
        i++;
    }
    
    cout<<"cleared string is :"<<cleanS<<endl;
    string reverses = cleanS;
    reverse(reverses.begin(),reverses.end());
    
    cout<<"reversed string is:"<<reverses<<endl;
    
    if(cleanS==reverses){
        cout<<"string is palindrome";
        
    }
    else{
        cout<<"string is not palindrome";
    }
    
    
  
    
	
}