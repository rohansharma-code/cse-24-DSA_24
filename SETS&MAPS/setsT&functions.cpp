#include <iostream>
using namespace std;

class Set {
private:
    int arr[100];
    int count;

public:
    Set() {
        count = 0;
    }

    bool include(int value) {
        for (int i = 0; i < count; i++) {
            if (arr[i] == value)
                return true;
        }
        return false;
    }

    void insert(int value) {
        if (!include(value)) {
            arr[count] = value;
            count++;
        }
    }

    void erase(int value) {
        for (int i = 0; i < count; i++) {
            if (arr[i] == value) {
                // Shift elements left
                for (int j = i; j < count - 1; j++) {
                    arr[j] = arr[j + 1];
                }
                count--;
                return;
            }
        }
    }

    int size() {
        return count;
    }

    bool equals(Set &other) {
        if (count != other.count)
            return false;

        for (int i = 0; i < count; i++) {
            if (!other.include(arr[i]))
                return false;
        }

        return true;
    }

    void display() {
        cout << "{ ";
        for (int i = 0; i < count; i++) {
            cout << arr[i] << " ";
        }
        cout << "}" << endl;
    }
};

int main() {
    Set s1, s2;

    s1.insert(10);
    s1.insert(20);
    s1.insert(30);

    s2.insert(30);
    s2.insert(20);
    s2.insert(10);

    cout << "Set 1: ";
    s1.display();

    cout << "Set 2: ";
    s2.display();

    cout << "Size of Set 1: " << s1.size() << endl;

    cout << "Include 20 in Set 1? ";
    cout << (s1.include(20) ? "Yes" : "No") << endl;

    s1.erase(20);

    cout << "After erasing 20 from Set 1: ";
    s1.display();

    cout << "Are sets equal? ";
    cout << (s1.equals(s2) ? "Yes" : "No") << endl;

    return 0;
}