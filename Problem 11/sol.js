function birthday(s, d, m) {
    const co = s.length;
    let count = 0;
    
    s.map((x,k)=>{
        if(s.slice(k,k+m).reduce((a,e) => a + e,0) == d ) 
            count++;
    })
    
    return count;
}
