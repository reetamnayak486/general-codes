class superhero {
    constructor(name){
        this.name=name;
    }

    getname(){
        console.log(this.name);
    }

    setname(name){
        this.name=name;
    }
}

module.exports=superhero;