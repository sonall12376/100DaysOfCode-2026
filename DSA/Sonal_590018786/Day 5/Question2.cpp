bool equalarr(int arr1[],int arr2[]){
    int n1=arr1.size();
    int n2=arr2.size();

    if(n1!=n2)return false;
    for(int i=0;i<n1;i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
}