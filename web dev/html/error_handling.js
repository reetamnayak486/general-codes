try{//console.log(rahul);
setTimeout(()=>{
    console.log("this is me"); 
    let a= prompt("enter age");
    a= Number.parseInt(a);
    if(a>180){
        throw new ReferenceError("gand mara");
    }      //shudled for execution
},1000);}
catch(err){
    console.log(err.name);
    console.log(err.message);
    console.log(err.stack);
}
setTimeout(()=>{
    console.log("this is me");
},1000);
setTimeout(()=>{
    console.log("this is me");
},1000);