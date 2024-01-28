#include<iostream>
using namespace std;

void prefixSum(int arr[],int n,int output[]){
    output[0] = arr[0];
    for(int i = 1; i < n; i++){
        output[i] = output[i-1] + arr[i];
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int output[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    prefixSum(arr,n,output);
    for(int i = 0;i<n;i++){
        cout<<output[i]<<" ";
    }
}
