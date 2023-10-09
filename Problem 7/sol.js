function diagonalDifference(arr) {
    const size = arr.length;
    let sumLeft = 0;
    let sumRight= 0;
    
    for(let i=0;i<size;i++){
        sumLeft += arr[i][i];
        sumRight+= arr[size-1-i][i];
    }
    
    return Math.abs(sumLeft-sumRight);

}