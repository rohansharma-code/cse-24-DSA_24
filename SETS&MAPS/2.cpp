//Intersection of 2 sets


#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    set<int> set1 = {1, 2, 3, 4, 5};
    set<int> set2 = {3, 4, 5, 6, 7};
    vector<int> intersectionResult;

    set_intersection(set1.begin(), set1.end(), 
                     set2.begin(), set2.end(), 
                     back_inserter(intersectionResult));

    cout << "Intersection: ";
    for(int x : intersectionResult) {
        cout << x << " ";
    }
    return 0;
}