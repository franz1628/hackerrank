int lonelyinteger(vector<int> a) {
    int cont = a.size();
    std::sort(a.begin(), a.end());
    
    for(int i=0;i<cont;i=i+2){
        if(i==cont-1) return a[i];
        
        if(a[i]!=a[i+1]){
            return a[i];    
        }
    } 
    return 0;
}