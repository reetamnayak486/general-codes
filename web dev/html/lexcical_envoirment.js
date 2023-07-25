let obj={
    name:"reetam",
    property:"sexy",
    function: function(){
        console.log(this);
        let x=()=>{
            console.log(this.name);
        }
        x();
    }
}
obj.function();