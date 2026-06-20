    #include <iostream>
    using namespace std;

    void printFibonacciIterative(int n) {
        if (n <= 0) {
            cout << "Please enter a positive integer." << endl;
            return;
        }
        if (n == 1) {
            cout << "0" << endl;
            return;
        }

        int a = 0;
        int b = 1;

        cout << a << " " << b << " ";

        for (int i = 2; i < n; ++i) {
            int next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
        cout << endl;
    }

    int main() {
        int count = 10; 
        cout << "Fibonacci Series (Iterative for " << count << " terms): ";
        printFibonacciIterative(count);
        return 0;
    }