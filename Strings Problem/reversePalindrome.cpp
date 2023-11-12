Algorithm :
At starting we have maz_str = s[0] and max_len = 1 as every single character is a palindrome.
Now, we will iterate over the string and for every character we will expand around its center.
For odd length palindrome, we will consider the current character as the center and expand around it.
For even length palindrome, we will consider the current character and the next character as the center and expand around it.
We will keep track of the maximum length and the maximum substring.
Print the maximum substring.
Complexity Analysis
Time complexity : O(n^2). Since expanding a palindrome around its center could take O(n) time, the overall complexity is O(n^2).

Space complexity : O(1).


  

#include <bits/stdc++.h>
using namespace std;

string reversePalindrome(string s)
{
    if (s.empty())
    {
        return s;
    }
    string lps = "";

    for (int i = 0; i < s.length(); i++)
    {
        // Odd length palindrome
        int low = i, high = i;
        while (low >= 0 && high < s.length() && s[low] == s[high])
        {
            low--;
            high++;
        }

        string palindrome = s.substr(low + 1, high - low - 1);
        if (palindrome.length() > lps.length())
        {
            lps = palindrome;
        }

        // Even length palindrome
        low = i;
        high = i + 1;
        while (low >= 0 && high < s.length() && s[low] == s[high])
        {
            low--;
            high++;
        }

        palindrome = s.substr(low + 1, high - low - 1);
        if (palindrome.length() > lps.length())
        {
            lps = palindrome;
        }
    }

    return lps;
}

int main()
{
    string s1 = "EBBABAD";
    string ans = reversePalindrome(s1);
    cout << ans;
}
