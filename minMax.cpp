#include <bits/stdc++.h>
using namespace std;

void findMinMax(vector<int> arr, int& min, int& max) {
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
 
    vector<int> arr = {23, 56, 12, 78, 34, 89, 5, 90, 1, 67};

    int min = 0;
    int max = 0;
    findMinMax(arr, min, max);
    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;

    return 0;
}
