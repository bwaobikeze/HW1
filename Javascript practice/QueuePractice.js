class Queue{
    constructor(){
this.storage ={}
this.head=0
this.tail=0
    }

    AddingToQueue(element){
        this.storage[this.tail]=element
        this.tail++
    }

    RemovingFromQueue(){
        let removed = this.storage[this.head]
        delete this.storage[this.head]
        this.head++
        return removed
    }
}

let line = new Queue()

line.AddingToQueue(3);
line.AddingToQueue(4);
line.AddingToQueue(370);
line.AddingToQueue(223);
line.RemovingFromQueue();
console.log(line);
