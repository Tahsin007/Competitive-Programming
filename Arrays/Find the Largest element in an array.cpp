#include<bits/stdc++.h>
using namespace std;


int main(){
    long long int n;
    cin>>n;
    vector<long long int> v;
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1];

}
