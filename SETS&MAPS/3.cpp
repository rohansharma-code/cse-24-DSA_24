//Difference of sets


#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    set<int> set1 = {1, 2, 3, 4, 5};
    set<int> set2 = {3, 4, 5, 6, 7};
    vector<int> differenceResult; // Elements in set1 but not in set2

    set_difference(set1.begin(), set1.end(), 
                   set2.begin(), set2.end(), 
                   back_inserter(differenceResult));

    cout << "Difference (set1 - set2): ";
    for(int x : differenceResult) {
        cout << x << " ";
    }
    return 0;
}