// Problem Statement: Given an integer N, write a program to count the number of digits in N.

let digitCount = (num)=>{
    let sum = 0;
    while(num>0){
        sum = sum + num%10;
        console.log("check the sum",sum,num);
        num = Math.floor(num/10);
    }

    return sum;
}

let ans = digitCount(123456789);
console.log("check data",ans);

// tsc main.ts && node main.js