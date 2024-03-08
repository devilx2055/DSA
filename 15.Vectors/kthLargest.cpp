#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Klargest(int arr[],int output[],int n,int k){
    // for (int i = 0; i < k; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         if (arr[i] < arr[j]) {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    //     output[i] = arr[i];
    //     reverse(output, output + k);
    // }

    sort(arr, arr + n);

    for (int i = 0; i < k; i++) {
        output[i] = arr[n - i - 1];
    }

    reverse(output, output + k);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int brr[k];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Klargest(arr, brr, n,k);
        for(int i = 0;i<k;i++){
            cout<<brr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
