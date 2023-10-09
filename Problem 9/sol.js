function pangrams(s) {
    const alphabet = "abcdefghijklmnopqrstuvwxyz ";
    s = s.toLowerCase();
    
    for(let ind in alphabet){
        if(s.indexOf(alphabet[ind])=="-1")
            return "not pangram";
    }
    
    return "pangram";

}