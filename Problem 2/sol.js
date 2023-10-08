function miniMaxSum(arr) {
    arr.sort((a,b) => a-b);
    const suma = arr.reduce((total,numero)=>total + numero,0);
    console.log(suma-arr[arr.length-1], suma-arr[0]);
}
