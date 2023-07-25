// let options={
//     method: "POST",
//     headers: {
//         "Content-type": "application/json"
//     },
//     body: JSON.stringify({
//         title: "harry",
//         body: "bhao",
//         userId: 1100,
//     }),

// }

// let p= fetch("https://jsonplaceholder.typicode.com/posts",options);
// p.then((response)=>{
//     return response.json()
// })
// .then((response)=>{
//     console.log(response);
// })

let pass_data=async(data)=>{
    let options={
            method: "POST",
            headers: {
                "Content-type": "application/json"
            },
            body: JSON.stringify(data),
        
        }
        
        let p= await fetch("https://jsonplaceholder.typicode.com/posts",options);
        let response= await p.json()
        return response;
}

let fetch_data=async(id)=>{
    let p= await fetch("https://jsonplaceholder.typicode.com/posts" +id);
    let response= await p.json()
        return response;
}

let mainFunc=async()=>{
    let data={
        userId:"reetam",
        pass:"reet#",
        data_no:"67@",
    }
    let passdata= await pass_data(data);
    console.log(passdata);
    let fetchdata= await fetch_data(1);
    console.log(fetchdata);
}


mainFunc()