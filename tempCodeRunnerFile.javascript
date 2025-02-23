function isBlank(str) {
    if (str === "" || str.trim() === "") {
        console.log("string is blank");
    } else {
        console.log("string is not blank");
    }
}


isBlank("");       
isBlank("   ");    
isBlank("               ");   
isBlank("123");     
