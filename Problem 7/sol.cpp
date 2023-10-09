int diagonalDifference(vector<vector<int>> arr) {
    int co = arr.size();
    int sumaLeft = 0;
    int sumaRight = 0;
    
    for(int i=0;i<co;i++){
        sumaLeft+=arr[i][i];    
        sumaRight+=arr[co-i-1][i];
    }
    
    return abs(sumaRight - sumaLeft);
}