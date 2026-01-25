#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 5, 1, 9, 2};
    int n = 5;

    for (int i = 0; i < n; i++) {
        bool isLargest = true;

        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[i]) {
                isLargest = false;
                break;
            }
        }

        if (isLargest) {
            cout << arr[i];
            break;
        }
    }
    return 0;
}
//Time: O(n^2)
//Space: O(1)