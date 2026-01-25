#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 5, 1, 9, 2};
    int n = 5;

    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    cout << largest;
    return 0;
}
//Time: O(n)
//Space: O(1)