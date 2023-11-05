//https://leetcode.com/problems/largest-odd-number-in-string/description/


#include <bits/stdc++.h>
using namespace std;

string largestOddnumber(string num){
    int m = num.size();
    int val =0;
    for(int i=m-1;i>=0;i--){
        if((num[i]-'0')%2!=0){
            return num.substr(0, i + 1);
        }
    }
    return "";
}

int main()
{
    string sm = "52";
    string s = largestOddnumber(sm);
    cout<<s;
}
