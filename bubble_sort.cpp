#include<iostream>
using namespace std;
#include<vector>

// A Function to implement Bubble Sort
void bubbleSort(vector<int> &arr, int n) {

    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Start entering array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    bubbleSort(arr, n);

    cout<<"Array after sorting: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}