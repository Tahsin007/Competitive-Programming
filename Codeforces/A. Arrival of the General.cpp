#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=200;
    int maxPos=0;
    int minPos=0;
    int min=-1;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        if(arr[i]>min){
            min=arr[i];
            maxPos=i;
        }if(arr[i]<=max){
            max=arr[i];
            minPos=i;
        }
    }
    if(maxPos<minPos){
        int x=maxPos-1;
        int y=n-minPos;
        cout<<x+y;
    }else{
        int x=maxPos-1;
        int y=n-minPos-1;
        cout<<x+y;
    }

}
