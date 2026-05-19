#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList<int> list;

    list.add(5);
    list.add(2);
    list.add(9);
    list.add(1);

    cout << "Original List:\n";

    for (int i = 0; i < list.getSize(); i++) {
        cout << list.get(i) << " ";
    }

    cout << "\n\nSorted List:\n";

    list.sort();

    for (int i = 0; i < list.getSize(); i++) {
        cout << list.get(i) << " ";
    }

    cout << "\n\nReversed List:\n";

    list.reverse();

    for (int i = 0; i < list.getSize(); i++) {
        cout << list.get(i) << " ";
    }

    cout << endl;

    return 0;
}
