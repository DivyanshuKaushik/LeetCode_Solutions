#include<bits/stdc++.h>

using namespace std;

int linearSearch(int *arr,int n,int k,int size){
    if(n==0) return -1;
    if(arr[0]==k) return size-n;
    return linearSearch(arr+1,n-1,k,size);
}

int binarySearch(int *arr,int s,int e,int k){
    int mid = s + (e-s)/2;
    if(s==e) return -1;
    if(arr[mid]==k) return mid;
    if(arr[mid]>k) return binarySearch(arr,s,mid,k);
    return binarySearch(arr,mid+1,e,k);
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    cout<<linearSearch(arr,10,6,10)<<endl;
    cout<<binarySearch(arr,0,9,11);

    return 0;
}