class Stack{
    constructor(){
        this.strorage ={}
        this.size =0;
    }
    AddingElement(element){
        this.size++
        this.strorage[this.size]=element
        }

    RemovingElement (element){
        let removed= this.strorage[this.size];
        delete this.strorage[this.size];
        this.size--;
        return removed
    }
    LookingAtStack(){
        return this.strorage[this.size]
    }
}
 let arc =new Stack()

 arc.AddingElement(1);
 arc.AddingElement(12);
 arc.AddingElement(134);
  console.log(arc);