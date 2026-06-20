#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> num = {64, 25, 12, 22, 11};
    cout << "Original Vector: ";
    for (size_t i = 0; i < num.size(); ++i) {
        cout << num[i];
        if (i + 1 < num.size()) cout << " ";
    }
    cout << endl;
    num.push_back(6);
    num.push_back(99);
    cout << "Updated Vector: ";
    for (size_t i = 0; i < num.size(); ++i) {
        cout << num[i];
        if (i + 1 < num.size()) cout << " ";
    }
    cout << endl;
    return 0;
}