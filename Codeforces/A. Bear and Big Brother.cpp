#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int x=k-n;
    int count=0;
    while(n<=k){
        n=n*3;
        k=k*2;
        count++;
    }
    cout<<count;


}
