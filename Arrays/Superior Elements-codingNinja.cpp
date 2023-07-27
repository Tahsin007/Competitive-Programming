vector<int> superiorElements(vector<int>&arr) {
    // Write your code here.
    vector<int> ans;
    int n=arr.size();
    int maxi=INT_MIN;
    for (int i = n-1; i >= 0; i--) {
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi=arr[i];
        }
    }
    sort(ans.begin(),ans.end());
    return ans;

    // Push all the leaders in ans array.


  }
