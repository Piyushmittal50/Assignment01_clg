
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&arr){
    int n = arr.size();
    bool swapped; 

    for (int i = 0; i < n - 1; i++) {
        swapped = false; 
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
               
                swap(arr[j], arr[j + 1]);
                swapped = true; 
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr);
    cout << "Sorted array: ";
    for(int i=0;i<arr.size();i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;

    return 0;
}

