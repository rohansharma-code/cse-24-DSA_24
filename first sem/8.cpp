#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    string str = "rohan";

    sort(str.begin(), str.end());
    cout << "String sorted in ascending order: " << str << endl;

    return 0;
}