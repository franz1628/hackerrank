function sockMerchant(n, ar) {
    ar.sort();
    let count = 0;
    for(let i=0;i<n-1;i++){
        if(ar[i]==ar[i+1]){
            i++;
            count++;
        }
    }
    
    return count;
}