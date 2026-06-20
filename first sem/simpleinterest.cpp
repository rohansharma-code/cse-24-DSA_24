#include <iostream> 
using namespace std;
float SimpleInterest(float P, float R, float T) {
    float simpleInterest = (P * R * T) / 100.0; 
    return simpleInterest;
}

int main() {
    float principal, rate, time;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter annual interest rate : ";
    cin >> rate;

    cout << "Enter time period in years: ";
    cin>> time;

    float interest = SimpleInterest(principal, rate, time);

    cout << "Simple Interest: " << interest << endl;
    cout << "Total Amount : " << principal + interest << endl;

    return 0;
}