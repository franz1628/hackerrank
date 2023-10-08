void miniMaxSum(vector<int> arr) {
    int count = arr.size();
    long suma = 0;
    long min = arr[0];
    long max = 0;
    
    for(int i=0; i<count;i++){
        suma += arr[i];
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    
    printf("%ld %ld",suma-max,suma-min);
    
    
}