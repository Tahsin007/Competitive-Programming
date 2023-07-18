
#include<bits/stdc++.h>
vector<int> getSecondOrderElements(int n, vector<int> v) {
    // Write your code here.

    if(n==0 || n==1)return {-1} ;

    sort(v.begin(),v.end());
    vector<int> v1;
    v1.push_back(v[n-2]);
    v1.push_back(v[1]);
    return v1;
}
