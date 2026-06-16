int MaxEle(vector<int>& arr){
    int MaxE=arr[0];

    if(arr.size()==0){
        return -1;
    }

    for(int i=1;i<arr.size();i++){
        MaxE= max(MaxE,arr[i]);
    }
    return MaxE;
}
