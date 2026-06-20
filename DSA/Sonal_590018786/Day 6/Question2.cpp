vector<int> unionArr(vector<int>&  arr1,vector<int>& arr2){
    vector<int> res;
    
    int i=0;int j=0;

    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            if(res.empty() || res.back()!=arr1[i]){
                res.push_back(arr1[i]);
            }
            i++;
        }
        else if(arr1[i]>arr2[j]){
            if(res.empty() || res.back()!=arr2[j]){
                res.push_back(arr2[j]);
            }
            j++;
        }
        else{
            if(res.empty() || res.back()!=arr1[i]){
                res.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    while(i<arr1.size()){
        if(res.empty() || res.back()!=arr1[i]){
                res.push_back(arr1[i]);
            }
            i++;
    }

    while(j<arr2.size()){
        if(res.empty() || res.back()!=arr2[j]){
                res.push_back(arr2[j]);
        }
        j++;
    }
    return res;
}