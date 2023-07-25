let p1= new Promise((resolve,reject)=>{
    setTimeout(()=>{resolve(56);
    },2000);
})
let p2= new Promise((resolve,reject)=>{
    setTimeout(()=>{
        // resolve(756);
        reject(new Error("an error"))
    },2000);
})
let p3= new Promise((resolve,reject)=>{
    setTimeout(()=>{resolve(560);
    },2000);
})

// let promise_all= Promise.all([p1,p2,p3]);
// let promise_rall= Promise.allSettled([p1,p2,p3]);
let promise_all= Promise.allSettled([p1,p2,p3]);

promise_all.then((value)=>{
    console.log(value);
})