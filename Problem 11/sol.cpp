int birthday(vector<int> s, int d, int m) {
    int co = s.size();
    int count = 0;
    
    for(int i=0;i<co-m+1;i++){
        int suma = 0;
        for(int k=0;k<m;k++){
            suma += s[i+k];
        }
        
        if(suma == d){
            count++;
        }
    }
    
    return count;
}