#include <vector>
#include <algorithm>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size();
    long long sum = 0;
    int len = 0;
    int maxCount = 0;
    int j = 0;
    
    for (int i = 0; i < n; i++) {
        sum += a[i];

        while (j <= i && sum > k) {
            sum -= a[j];
            j++;
        }

        if (sum == k) {
            len = i - j + 1;
            maxCount = max(maxCount, len);
        }
    }

    return maxCount;
}
