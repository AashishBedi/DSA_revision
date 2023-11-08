#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void nextPermutation(int arr[], int n){
    int i = n - 2;
    
    while(i >= 0 && arr[i] >= arr[i + 1]){
        i--;
    }
    
    if(i >= 0){
        int j = n - 1;
        while(j >= 0 && arr[j] <= arr[i]){
            j--;
        }
        swap(arr[i], arr[j]);
    }
    reverse(arr, i+1, n-1);
}

int main() {
    int n, arr[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    nextPermutation(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}