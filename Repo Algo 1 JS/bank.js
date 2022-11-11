const Bank = () =>{
    // Bunga Tunggal
    let modal=parseFloat(document.group.getElementById("Modal").value);
    let rate =parseFloat(document.group.getElementById("Rate").value);
    let time = parseFloat(document.group.getElementById("Time").value);
    
    let total = modal*(rate/100)**time;
    document.getElementById("Hasil").innerHTML =total;


}

export default Bank;