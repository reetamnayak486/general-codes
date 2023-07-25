const random_num=(min,max)=>{
    return Math.floor(Math.random()*(max-min)+min);
}
let num=random_num(0,4);
console.log(num);

let arr=["anamera Turbo Alfa Romeo with TCT gearbox and certain General Motors products",
" Mitsubishi also incorporated launch control into their Twin Clutch SST gearbox on its S-Sport mode but the mode is only available in the Evolution X MR and MR Touring (USDM)",
" The Jaguar F-Type includes launch control",
" The Nissan GT-R has electronics to control launch but the company does not use the term launch control[1] since some owners have equated the term with turning off the stability control to launch the car which may void the warranty of the drivetrain",
" One version of Nissan GT-R allows user to launch the car by turning the Traction Control to R mode"];
// console.log(arr.length); 
let y=document.getElementById('reet');
// console.log(y);
y.innerHTML=arr[num];
