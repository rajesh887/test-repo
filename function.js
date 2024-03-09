// Non-primitive => array, object, function
// fn def

function sayHi(param){
    //console.log("Hello from sayHi");
    //console.log("param received", param);
    let rval = Math.random()>0.5?true:"less then 0.5";
    return rval;
}



let rVal = sayHi([1,2,3,4,5]);
console.log("rVal", rVal);