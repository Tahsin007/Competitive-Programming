//https://leetcode.com/problems/reverse-words-in-a-string/submissions/1092305129/


#include <bits/stdc++.h>
using namespace std;

string reverseWord(string s){
    string tmp="";
    string ans="";

    int left=0;
    int right=s.length()-1;

    while(s[left]==' '){
        left++;
    }
    while(s[right]==' '){
        right--;
    }

    for(int i=left;i<=right;i++){
        if(s[i]!=' '){
            tmp+=s[i];
        }else{
            if(s[i-1]==' '){
                left++;
                continue;
            }else{
                ans=tmp+" "+ans;
                tmp="";
            }
        }
    }
    ans = tmp + " " + ans;
    ans.erase(ans.begin() + ans.length() - 1);
    return ans;
}

int main(){
    string s = reverseWord("  sky is blue  ");
    cout<<s;
}
