#include <iostream>
using namespace std;
int sumOfDigitsIterative(int n) {
    int sum = 0;
    
    while (n > 0) {
        sum += n % 10; 
        n /= 10;       
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result = sumOfDigitsIterative(number);
    cout << "Sum of digits: " << result << endl;
    return 0;
}