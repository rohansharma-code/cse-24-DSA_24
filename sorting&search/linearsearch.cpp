#include <iostream>
using namespace std;

int main() {
    int n, key, i;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    // Linear Search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at position " << i + 1;
            break;
        }
    }

    if(i == n) {
        cout << "Element not found";
    }

    return 0;
}