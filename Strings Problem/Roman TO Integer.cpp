//https://leetcode.com/problems/roman-to-integer/description/

#include <bits/stdc++.h>
using namespace std;

int countNumber(string s){
    int totall=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='C' && s[i+1]=='D'){
            totall+=400;
            i++;
        }else if(s[i]=='C' && s[i+1]=='M'){
            totall+=900;
            i++;
        }else if (s[i] == 'X' && s[i+1] == 'L'){
            totall += 40;
            i++;
        }
        else if (s[i] == 'X' && s[i+1] == 'C')
        {
            totall += 90;
            i++;
        }
        else if (s[i] == 'I' && s[i + 1] == 'V')
        {
            totall += 4;
            i++;
        }
        else if (s[i] == 'I' && s[i + 1] == 'X')
        {
            totall += 9;
            i++;
        }else if(s[i]=='I'){
            totall+=1;
        }
        else if (s[i] == 'V')
        {
            totall += 5;
        }
        else if (s[i] == 'X')
        {
            totall += 10;
        }
        else if (s[i] == 'L')
        {
            totall += 50;
        }
        else if (s[i] == 'C')
        {
            totall += 100;
        }
        else if (s[i] == 'D')
        {
            totall += 500;
        }
        else if (s[i] == 'M')
        {
            totall += 1000;
        }
    }

    return totall;
}

int main(){
    string s1 = "MCMXCIV";
    int ans = countNumber(s1);
    cout<<ans;
}
