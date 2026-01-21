#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << a << " " << b;
    return 0;
}
//TC:    O(1)
//SC:    O(1)