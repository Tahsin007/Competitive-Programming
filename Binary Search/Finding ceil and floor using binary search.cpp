pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	// Write your code here.
	int low =0;
	int high=n-1;
	int ans1=-1;
	int ans2=-1;
	sort(arr,arr+n);
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]<=x){
			ans1 = arr[mid];
			low = mid+1;
		}if(arr[mid]>=x){
			ans2 = arr[mid];
			high = mid-1;
		}
	}
	pair<int,int> p;
	p.first=ans1;
	p.second=ans2;
	return p;
}
