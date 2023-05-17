#include<bits/stdc++.h>

using namespace std;

void count_n_say(int n){
    string str[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0) return;
    count_n_say(n/10);
    cout<<str[n%10]<<" ";
}

int main(){
    
    int n = 14042002;
    count_n_say(n);
    return 0;
}