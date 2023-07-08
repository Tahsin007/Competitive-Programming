#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;
        long long arr[n];
        int count=1;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                count++;
                //cout<<count;
            }else{
                v.push_back(count);
                count=1;
            }
        }
        v.push_back(count);
        sort(v.begin(),v.end());
        cout<<v.back();
}
