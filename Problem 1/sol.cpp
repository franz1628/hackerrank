void plusMinus(vector<int> arr) {
    int count = arr.size();
    int posi = 0;
    int nega = 0;
    
    for(int i=0;i<count;i++){
        if(arr[i]>0){
            posi++;
        }else if(arr[i]<0){
            nega++;
        }
    } 
    
    printf("%.4lf\n",static_cast<double>(posi)/count);
    printf("%.4lf\n",static_cast<double>(nega)/count);
    printf("%.4lf\n",static_cast<double>(count-posi-nega)/count);
    
}