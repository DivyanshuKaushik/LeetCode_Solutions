#include<bits/stdc++.h>

using namespace std;

int sum(int *arr,int n){
    if(n==0) return 0;
    return arr[0] + sum(arr+1,n-1);
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    cout<<sum(arr,10);
    return 0;
}