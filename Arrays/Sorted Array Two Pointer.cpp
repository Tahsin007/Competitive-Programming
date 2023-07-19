#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n1 = a.size();
    int n2 = b.size();
    int i=0;
    int j=0;
    vector<int> Union;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(Union.size()==0 || Union.back()!=a[i]){
                Union.push_back(a[i]);
            }
            i++;
        }else{
            if(Union.size()==0 || Union.back()!=b[i]){
                Union.push_back(b[i]);
            }
            j++;

        }
    }
    while(i<n1){
        if(Union.back()!=a[i]){
            Union.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if(Union.back()!=b[i]){
            Union.push_back(b[i]);
        }
        j++;
    }

    return Union;
}
