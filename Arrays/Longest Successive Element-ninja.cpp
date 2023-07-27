int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    if(n==0) return 0;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }  
    //bool flag=false;
    int maxi=INT_MIN;
    for(auto it:s){
        if(s.find(it-1)==s.end()){
            int cnt =1;
            int x=it;
            while(s.find(x+1)!=s.end()){
                x=x+1;
                cnt++;
                
            }
            maxi=max(maxi,cnt);
        }
    }
    return maxi;
}
