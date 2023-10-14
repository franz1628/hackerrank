int sockMerchant(int n, vector<int> ar) {
    int count=0;
    std::sort(ar.begin(),ar.end());
    
    for(int i=0;i<n-1;i++){
        if(ar[i] == ar[i+1]){
            i++;
            count++;
        }
    }
    return count;
}