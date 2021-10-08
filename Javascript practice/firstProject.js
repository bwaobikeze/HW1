//alert("Hello, world");
// let age=25;
// let name="Brian"
// console.log(age,name)
// const greet = function(){
//     return 'hello, world';
// }
//const greet=()=> console.log("hello, world");



let  vertices = [ 'A', 'B', 'C', 'D', 'E', 'F' ];


const ListOfFriends=new map();


function AddingTownsPeople(vertices ){
    ListOfFriends.set(vertices ,[]);
    
}

 function LinkFriends(friendOne,friendTwo){
    ListOfFriends.get(friendOne).push(friendTwo);
    ListOfFriends.get(friendTwo).push(friendOne);
    
}
 function printGraph(){
     
 }

   

vertices.forEach(AddingTownsPeople);




// let NumberOfTrips=[]
// console.log(greet());