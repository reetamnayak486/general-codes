let time=()=>{
    let date =new Date();
    let hours=date.getHours();
    let minutes=date.getMinutes();
    let seconds=date.getSeconds();
    
    let x= document.querySelector('#time');
    x.innerText= hours+':'+minutes+':'+seconds;
    
}

let timerId=setInterval(time,1000);

