//Create insert and display and print set


#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> mySet;
    // Insert five integers
    mySet.insert(50);
    mySet.insert(20);
    mySet.insert(40);
    mySet.insert(10);
    mySet.insert(30);

    // Display all elements (will be sorted automatically)
    cout << "Elements in set: ";
    for (int x : mySet) {
        cout << x << " ";
    }
    cout << endl;

    // Print the size
    cout << "Size of the set: " << mySet.size() << endl;
    return 0;
}