let func1=(src)=>{
let p1= new Promise((resolve,reject)=>{
    let script1= document.createElement("script");
   script1.src=src;
   script1.onload=function(){
    resolve("the script is loaded");
   
}
document.head.append(script1)
})
p1.then((value)=>{
    console.log(value);})
}

func1("https://cdn.jsdelivr.net/npm/@popperjs/core@2.11.8/dist/umd/popper.min.js");

