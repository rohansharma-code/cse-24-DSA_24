#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);

    cout << "Size of set = " << s.size();

    return 0;
}
