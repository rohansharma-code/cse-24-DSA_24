#include <iostream>
using namespace std;

       int factorial(int n){
           int fact=1;
           for(int i=1;i<=n;i++){
               fact*=i;
               
           }
         cout<<"The factorial of the given number is "<<fact<<endl;  
       }
       
 int main() {    
     int num1=10;
     factorial(num1);
     return 0;
	   

}