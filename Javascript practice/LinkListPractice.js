// constructer to make the node 
class node{
    constructor(data, next = null){
        this.data =data;
        this.next =next;
    }
}

class LinkedList{
constructor(){
    this.head;
    this.size =0;
}

insertFirst(data) {
    this.head = new node (data, this.head);
    this.size++;
}

insertlast(data){
    let node = new node(data);
    let current;
}

printListData(){
    let current=this.head;

    while(current){
        console.log(current.data);
        current = current.next
    }
    
}
}

let Listing =new LinkedList()

Listing.insertFirst(300);
Listing.insertFirst(400);
Listing.insertFirst(500);
Listing.printListData();