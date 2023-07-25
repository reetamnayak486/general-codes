// let func1=()=>{
//     let message ="hey";
//     let test=()=>{
//         console.log("the message is"+message);
//     }
//     return test;
// }

//  let a=func1();
// a();
function hello(){
let x=()=>{
    let a=45;
    console.log(a);
    let y=()=>{
        // let a=47;
        console.log(a);
        let z=()=>{
            // let a=48;
            console.log(a);
        }
        z()
    }
    a=999
    y()
}
return x
}

let b=hello()
b()