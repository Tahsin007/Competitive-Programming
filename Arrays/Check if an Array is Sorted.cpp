int isSorted(int n, vector<int> a) {
    // Write your code here.

    if(n==1){
        return 1;
    }
    bool flag = false;
    for(int i=0;i<a.size()-1;i++){
        if(a[i+1]<a[i]){
            return 0;

        }
    }
    return 1;
}
