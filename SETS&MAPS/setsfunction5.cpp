#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1;
    set<int> s2;

    s1.insert(10);
    s1.insert(20);
    s1.insert(30);

    s2.insert(30);
    s2.insert(20);
    s2.insert(10);

    if (s1 == s2)
    {
        cout << "Sets are equal";
    }
    else
    {
        cout << "Sets are not equal";
    }

    return 0;
}