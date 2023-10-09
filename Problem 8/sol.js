function countingSort(arr) {
    let arrCount = new Array(100).fill(0);
    let co = arr.length;
    
    for(let i=0;i<co;i++){
        arrCount[arr[i]]++;
    }
    
    return arrCount;
}
