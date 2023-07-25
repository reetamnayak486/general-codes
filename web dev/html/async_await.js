// let func= async()=>{
//     // resolve(46);
//     return 46;
// }
// let output1= await func()
// console.log(output1);
// func.then((value)=>{
//     console.log(value);
// })

async function func1(){
    let p1=new Promise((resolve,reject)=>{
        resolve(43);
    })
    let p2=new Promise((value,reject)=>{
        resolve(23);
    })
    let bang=await p1;
    console.log("the temp is "+bang+"in bang");
    let allab=await p2;
    console.log("the temp is "+allab+"in allab");
    return[bang,allab]
}
console.log(func1());
// let main=async()=>{
//     let a= await func1() 
//     let b= await func2() 
// }

// main();
