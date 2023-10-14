string twoArrays(int k, vector<int> A, vector<int> B) {
    std::sort(A.begin(),A.end(), std::greater<int>());
    std::sort(B.begin(),B.end());
    
    int co = A.size();
    bool exist = false;
    
    for(int i=0;i<co;i++)
        if(A[i] + B[i]<k)
            exist = true;
        
    return exist?"NO":"YES";
}