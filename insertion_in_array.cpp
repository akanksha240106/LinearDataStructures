
#include <iostream>
using namespace std;

int main() {
    int a[10] = {5, 10, 8, 12};
    int n = 4;
    int pos = 2;
    int item = 11;

    for (int i = n - 1; i >= pos; i--) {
        a[i + 1] = a[i];
    }

    a[pos] = item;
    n++;

    cout << "Array after insertion: ";

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
