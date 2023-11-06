//https://leetcode.com/problems/isomorphic-strings/description/

#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if(s.size()!=t.size()) return false;

    unordered_map<char,char> mp1 ;
    unordered_map<char,char> mp2;

    for(int i=0;i<s.size();i++){
        char s1 = s[i];
        char t1 = t[i];

        if(mp1.find(s1)!=mp1.end()){
            if(mp1[s1]!=t1){
                return false;
            }
        }else{
            mp1[s1]=t1;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        char s1 = s[i];
        char t1 = t[i];

        if (mp2.find(t1) != mp2.end())
        {
            if (mp2[t1] != s1)
            {
                return false;
            }
        }
        else
        {
            mp2[t1] = s1;
        }
    }

    return true;
}

int main()
{
    string s1 = "egg", t1 = "add";
    string s2 = "foo", t2 = "bar";
    string s3 = "paper", t3 = "title";
    string s4 = "badc", t4 = "kikp";

    cout << isIsomorphic(s1, t1) << endl; // Output: true
    cout << isIsomorphic(s2, t2) << endl; // Output: false
    cout << isIsomorphic(s3, t3) << endl; // Output: true
    cout << isIsomorphic(s4, t4) << endl; // Output: true

    return 0;
}
