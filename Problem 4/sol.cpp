vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    int contString = strings.size();
    int contQuery = queries.size();
    vector<int> arr;
    
    for(int i=0;i<contQuery;i++){
        int cont = 0;
        for(int j=0;j<contString;j++){
            if(strings[j] == queries[i]){
                cont++;
            }
        }
        arr.push_back(cont);
    }
    
    return arr;
    
}