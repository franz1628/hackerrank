int pageCount(int n, int p) {
    int begin = p/2;
    
    if(n%2==0) n++;
    int end = (n-p)/2;
    
    return (begin<=end)?begin:end;
}