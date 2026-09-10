let arr=[10,20,30,40,50]
arr.forEach(function(ele,index){
    if(ele==20){
        console.log("Found at "+index);
    }
})


for (let ele of arr){
    console.log(ele);
}



let student={
    name:"Jagruti",
    age:21,
    city:"Pune"
}
for(let key in strudent){
    console.log(key+"="+student[key]);
}


let students=[{
    name:"Jagruti",
    age:21,
    city:"Pune"
},{
     name:"Pragati",
    age:22,
    city:"Pune"
},{
     name:"Shruti",
    age:21,
    city:"Pune"
}]
for(let student of students){
   for(let key in student){
    console.log(key+"="+student[key]);
}
}