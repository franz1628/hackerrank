string timeConversion(string s) {
    std::string totalHora = s.substr(0, 8);
    std::string hora = s.substr(0, 2);
    std::string totalMenosHora = s.substr(2, 6);
    std::string em = s.substr(8, 2);
    
    std::string newHora = hora;
    
    if(em == "PM"){
        if(hora!="12"){    
            int entero = std::stoi(hora);
            entero = entero + 12;
            
            newHora = std::to_string(entero);
        }
    }else{
        if(hora=="12"){
            newHora="00";
        }
    }
    return newHora+totalMenosHora;
}