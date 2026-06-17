int countOccur(vector<int>& arr,int target){
    int n=arr.size();
    int cnt=count(arr.begin(),arr.end(),target);
    return cnt;
}
