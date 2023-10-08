
function plusMinus(arr) {
    const con = arr.length;
    let posi = 0, nega=0
    for(let i=0;i < con;i++){
        if(arr[i]<0)
            nega++;
        else if(arr[i]>0)
            posi++;
    }
    
    console.log((posi/con).toFixed(6))
    console.log((nega/con).toFixed(6))
    console.log(((con-posi-nega)/con).toFixed(6))
}

plusMinus([-4, 3, -9, 0, 4, 1]);
