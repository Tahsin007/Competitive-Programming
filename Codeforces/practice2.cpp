//https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink= (k*l)/nl;
    int lime= c*d/n;
    int salt=p/np;
    int salt1=salt/n;

    int drink1=drink/n;

    int arr[5];
    vector<int> v;
    v.push_back(lime);
    v.push_back(drink1);
    v.push_back(salt1);
    sort(v.begin(),v.end());
    cout<<v[0];

}
