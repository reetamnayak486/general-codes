// problem 1

// let func1=(src)=>{
//     let p1= new Promise((resolve,reject)=>{
//         let script1= document.createElement("script");
//        script1.src=src;
//        script1.onload=function(){
//         resolve("the script is loaded");
       
//     }
//     document.head.append(script1)
//     })
//     p1.then((value)=>{
//         console.log(value);})
//     }
    
//     func1("https://cdn.jsdelivr.net/npm/@popperjs/core@2.11.8/dist/umd/popper.min.js");

// problem 2

// let func1= (src)=>{
//     let p1= new Promise((resolve,reject)=>{
//     let script= document.createElement("script");
//    script.src=src;
//    script.onload=function(){
//     resolve("the script is loaded");
   
//     }
//     script.onerror= function(){
//         reject(new Error("an error"))
//     }
//     document.head.append(script)})
//     // let b=await p1;
//     // console.log(b);
//     // p1.then((value)=>{return value})
//     // .then((value)=>{console.log(value);})
//     console.log(p1);
//     // p1.then((value)=>{
//     //     console.log(value);
//     // })
//     return p1
// }

// let main=async()=>{
//     let a= await func1("https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js");
//     console.log(a);
//     // a.then((data)=>{
//     //     console.log(data);

//     // })
// }

//  main();

//problem 3

// let p1= new Promise((resolve,reject)=>{
//     setTimeout(()=>{
//         reject(new Error("this is an error"))
//     },3000)
// })

// let main=async()=>{
//     try{
//     let a= await p1
//     console.log(a);
//     }
//     catch(error){
//         console.log(error);
//     }
//     // a.then((data)=>{
//     //     console.log(data);

//     // })
// }

//  main();

// problem 4
let p1= new Promise((resolve,reject)=>{
    setTimeout(()=>{
        resolve("this is solved");
    },3000)
}) 
let p2= new Promise((resolve,reject)=>{
    setTimeout(()=>{
        resolve("this is solved");
    },3000)
}) 
let p3= new Promise((resolve,reject)=>{
    setTimeout(()=>{
        resolve("this is solved");
    },4000)
}) 

let main=async()=>{
        console.time("run");
        let promise_all=await Promise.all([p1,p2,p3]);
        console.log(promise_all);
        console.timeEnd("run");
}

main()
