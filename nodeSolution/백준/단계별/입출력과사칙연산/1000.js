// A+B

const readline=require("readline");

const r = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

r.on('line', function (line){
    input = line.split(' ').map((el) => parseInt(el));
    r.close();
}).on('close', function (){
    console.log(input[0]+input[1]);
    process.exit();
});
