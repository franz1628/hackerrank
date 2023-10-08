function timeConversion(s) {
    let hora = s.substring(0,2);
    let totalMenosHora = s.substring(2,8);
    let em = s.substring(8,10);
    
    if(em == "PM"){
        if(hora!="12"){
            let intHora = parseInt(hora);
            intHora += 12;
            hora = intHora.toString();
        }
    }else if(hora=="12"){
        hora = "00";
    }
    
    return hora + totalMenosHora;
}

