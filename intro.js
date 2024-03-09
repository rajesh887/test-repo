
console.log("Hello js )");

// declare
let a;
console.log(a);
// undefined
// a = 10;
// a = 10.1;
// console.log(a);
// a = "Hello I am a string";
// a = 'Hello I am also a string';

// console.log(a);

// variable trype: primitive type : number, string, boolean, null

// js -> java, c++, c

// let number = 10;

// for(let i = 1; i<=number; i++){

//     console.log("number is", i);
// }

let number = 23;
let flag = true;

for(let div = 2; div*div < number; div++){

    if(number % div == 0){

        flag = false;
        break;
    }
}


if(flag == true){

    console.log(number, "is prime");
}

else{

    console.log(number, "is not prime");
}

