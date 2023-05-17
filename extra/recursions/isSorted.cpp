#include<bits/stdc++.h>

using namespace std;

bool isSorted(int arr[],int n){
    if(n<=1) return true;
    if(arr[0]>arr[1]) return false;
    return isSorted(arr+1,n-1);
}

int main(){
    int arr[5]  = {5,3,1,2,4};
    int arr1[5] = {1,2,3,4,5};

    cout<<isSorted(arr,5)<<endl;
    cout<<isSorted(arr1,5);

    return 0;
}