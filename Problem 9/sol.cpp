string pangrams(string s) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz ";
    
    for(char c : alphabet){
        size_t encontrado = s.find(c);
        if(encontrado==std::string::npos ){
            size_t encontradoMayus = s.find(std::toupper(c));
            if(encontradoMayus==std::string::npos ){
              return "not pangram";
            }
        }
    }
    return "pangram";
}