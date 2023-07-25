// let container= document.querySelector(".sexy");
// container.onclick=() =>{
//     console.log("you have clicked on the class");
//     alert("u have clicked the class1");
// }
// document.getElementsByClassName
// document.getElementById
// document.querySelector(".sexy")

//get element by class aname here is not woring but do
//it by query selector or by id

const button=document.querySelector('#twn');

// let a=prompt("no.");

const x=(e) =>{
console.log("para1");
console.log(e.type,e.clientX, e.clientY);
}                                               // the event object is local to the event function and 
const y=() =>{                                  //hence can,t be accesed from outside 
console.log("para2");
}

button.addEventListener('click',x);
button.addEventListener('click',y);

// console.log(e.type);

// if(a==='1'){
//     button.removeEventListener('click',y);
// }
// button.addEventListener('click',x());
// button.addEventListener('click',y());