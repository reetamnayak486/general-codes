class raiway {
    constructor(givenname,id){
        this.name=givenname;
        this.id=id;
    }
    submit=()=>{
        alert(`${this.name} ticket has been submited ${this.trin_no}`);
    }
    cancel=()=>{
        alert(`${this.name} ticket has been canceled ${this.trin_no}`);
    }

    
}

let rohan= new raiway("rohan",67885)
// rohan.form();

let sunil= new raiway("sunil",632885)
// sunil.form();

rohan.submit();
sunil.submit();
sunil.cancel()