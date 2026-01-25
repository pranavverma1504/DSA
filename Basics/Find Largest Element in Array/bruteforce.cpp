#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {3, 5, 1, 9, 2};
    int n = 5;

    sort(arr, arr + n);

    cout << arr[n - 1];
    return 0;
}
//Time: O(n log n)

//Space: O(1)