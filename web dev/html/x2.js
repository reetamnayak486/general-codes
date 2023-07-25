// let avg=0;
// function avg_(a) {
    
//     avg=avg+a/2;
    
//     return avg;
// }

// let v=0;
// for(let i=0;i<2;i++){
//     let a=prompt("enter the no.");
//      v=avg_(a);
// }
// console.log(v);
// const mean=(a,b,c,d)=>{
//     return (a+b+c+d)/4;
// }
// console.log(mean(4,5,6,7));

// let v="reetam";
// console.log(`this is ${v} `);

//==> examples of includes, startsWith, endsWith

// let a="this ie reetam";
// let test="ie";
// console.log(a.includes(test));
// console.log(`the word "${test}" ${a.includes('ie')?"is":'is not'} int the string`);
// console.log(a.slice(0,4));
// console.log('reetam'+'nayak');
// console.log(a.replace("e",'a'));   // relpace function only replaces the start letter  

//==>difference b/w '==' & '===' >https://www.scaler.com/topics/javascript/difference-between-double-equals-and-triple-equals-in-javascript/

// let c=7;let b='7';
// if(c==b){console.log('true');}
// if(c===b){console.log('true');}
// else{console.log('false');}

// let arr_=[3,4,7,87];
// console.log(`the length of the arr_ ${arr_.length}`,arr_);
// const navneeta="she is my attraction";
// navneeta='she is beautiful'
// console.log(navneeta);
// console.log(typeof navneeta);

// console.log(arr_.toString());
// let v=arr_.join('and');
// console.log(v);
// console.log(typeof v); 
// console.log(arr_.pop(),arr_);

// let profile={
    //     name:"ree",
    //     age:32,
    //     sex:`ale`,
    // }
    // for(key in profile){
        // console.log(`the ${key} is ${profile[key]}`);
        // }
        // let d=arr_.push(`reet`);
        // console.log(arr_,d);
        // console.log(arr_.shift(),arr_);
        // console.log(arr_.unshift(`name`),arr_);
        // console.log(delete arr_[1]);
        
        // console.log(arr_.length);
        // let arr_3=arr_2.concat(arr_,arr_1);
        // console.log(arr_3);
        // let compare=(a,b)=>{
        //     return b-a;
        // }
        // arr_.sort(compare);
        // console.log(arr_);
        // arr_.reverse();
        // console.log(arr_);

        //console.log(arr_);
        // let v=arr_.splice(2,1,50,70);
        // console.log(arr_);
        // console.log(arr_.splice(2,1,50,70));
        // let arr_5=arr_.slice(1,5);
        // console.log(arr_5);
//let arr_=[4,61,54,3,5,109,5540];

// arr_.forEach =((element)=>{
    //     console.log(element*element);
    // });
//         let arr_=[5,4,6,8];
// arr_.forEach((elemen)=>{
//   console.log(elemen*elemen);
// })
//    let namre='reetam';
//    let arr_5=Array.from(namre);
//    console.log(arr_5);  

//    for(let element of arr_5){
    //     console.log(element);
    //    }
    
    //    for(let index in arr_5){
        //     console.log(index);
        //    }
        // let emp={
            //     name:`reetam`,
            //     age: 16,
            //     id: 123,
            // }
            // for(let element1 of emp){
//     console.log(`the values are ${element1}`);

// }
// for(let keys in emp){
//     console.log(`the ${keys} is ${emp[keys]}`);
// }


// let a=arr_2.forEach((value,index,array)=>{
    //     // console.log(value+index,array);
    //     return value+index
    // })
    // console.log(a);
    
    //array filter
    
    // let a=arr_2.map((value,index)=>{
        //     return index+value;
        // })
        // console.log(a);
        
        // array filter
        
        // let b=arr_2.filter((values)=>{
            //     return values<10;
            // })
            // console.log(b);
            
            // array reduce
            
            // let a=arr_1.reduce((h1,h2)=>{
                //     return h1-h2;
                // })
                // console.log(a);

                //in java scprit we can have another func as a parameter of a func.
                
                // let func_=(h1,h2)=>{
                    //     return h1-h2;
// }

// let a=arr_1.reduce(func_);          
let arr_2=[44,61,4,3,09,540];
let arr_1=[4,61,5,3,19,550];