let arr=[11,29,30,42,56]

let result=arr.map(function(ele){
    return ele*2
})
//console.log(result);

result=arr.filter(function(ele){
    return ele%2!=0
})
//console.log(result)

result=arr.reduce(function(ele,sum){
    return sum=ele+sum
})
console.log(result)