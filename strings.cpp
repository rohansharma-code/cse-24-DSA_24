#include<bits/stdc++.h>
using namespace std;

int main(){
char f_name[20];
char l_name[20];
char full_name[50];
cout<<"enter your first name : ";
cin>>f_name;
cout<<"enter your last name : ";
cin>>l_name;
cout<< "hi "<<f_name<<" ! Your first name has "<<strlen(f_name)<<" characters."<<endl<<" And your last name has "<<
strlen(l_name)<<" characters."<<endl;
strcpy(full_name , f_name);
strcat(full_name , " ");
strcat(full_name , l_name);
cout<<" Your full name is: "<<full_name<<endl;
if ((strlen(f_name)== strlen(l_name)))
    cout<<"Both strings are equal. "<<endl;
else
    cout<<"String are not equal."<<endl;
return 0;
 }