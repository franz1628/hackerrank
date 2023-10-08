function matchingStrings(strings, queries) {
    return queries.map(query=> 
        strings.reduce((count,y)=>(y==query?count+1:count),0)
    ); 
}