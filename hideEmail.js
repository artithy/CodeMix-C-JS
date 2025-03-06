function hideEmail(email) {
    let parts = email.split("@");               
    let hiddenName = "******";                   
    return hiddenName + "@" + parts[1];         
}

console.log(hideEmail("example@gmail.com"));      
console.log(hideEmail("john@yahoo.com"));        
