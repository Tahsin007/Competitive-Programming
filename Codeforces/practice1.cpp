#include <bits\stdc++.h>
using namespace std;

int main(){
    string x;
    cin>>x;
    int y=0;
    if(x[0]=='9'){
        cout<<9;
        y=1;
    }
    for(int i=y;i<x.size();i++){
        if(x[i]>='5'){
            cout<<9-(x[i]-48);
        }else{
            cout<<x[i]-48;
        }
    }

}
