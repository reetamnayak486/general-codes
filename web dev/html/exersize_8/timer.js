let button= document.getElementById("button1");
button.addEventListener("click",()=>{
    let textarea= document.getElementById("input");
    let time_value=textarea.value;
    let time1=parseInt(time_value);
    let time2=time1*1000;
    setTimeout(function play() {
        var audio = new Audio('file:///C:/Users/ASUS/Music/01%20Gandi%20Baat.mp3');
        audio.play();
      },time2)
})


