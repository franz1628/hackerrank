let n_s = ""
for(let i in s){
    const ccs = s[i].charCodeAt(0);
    if(/^[a-zA-Z]+$/.test(s[i])){
        const base = (s[i] === s[i].toLowerCase())?'a':'A';
        const ccbase = base.charCodeAt(0);
        n_s += String.fromCharCode(ccbase + (ccs - ccbase +k )%26);
    }else{
        n_s+=s[i];
    }
}
return n_s;