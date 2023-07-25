
let loadscript=(src,callback)=>{
    let script= document.createElement("script");
    script.src=src;
    script.onload=function(){
        callback(null,src);
    } 
    script.onerror=function(){
        callback(new Error("gand mara"),src);
    } 
    document.body.appendChild(script);
}

let func=(error,src)=>{
    if(error){
        console.log(error);
    }
    else{console.log(src);}

}

loadscript("https://cdn.jsdjhmfdelivr.net/npm/@popperjs/core@2.11.8/dist/umd/popper.min.js",func);