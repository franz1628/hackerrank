vector<int> countingSort(vector<int> arr) {
    vector<int> arrCount(100,0);
    int co = arr.size();
    
    for(int i=0;i<co;i++){
        arrCount[arr[i]] = arrCount[arr[i]] + 1;
    }
    
    return arrCount;
}