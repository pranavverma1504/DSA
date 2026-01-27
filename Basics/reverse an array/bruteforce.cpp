#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int temp[n];

    for (int i = 0; i < n; i++) {
        temp[i] = arr[n - i - 1];
    }

    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
}
//Time: O(n)
//Space: O(n)
//Idea: Create a temporary array to store reversed elements