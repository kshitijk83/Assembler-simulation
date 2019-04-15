const readline = require('readline');

const rt = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

// const person={
//     name: '',
//     say:[]
// }

// rt.question('whats your name?', (name)=>{
//     person.name = name;
//     console.log(name);
//     rt.setPrompt('alj;fsdj;af?');
//     rt.prompt();
//     rt.on('line', (saying)=>{
//         if(saying.toLowerCase().trim()==='exit'){
//             rt.close();
//         } else{
//             person.say.push(saying.trim());
//             rt.setPrompt('alj;fsdj;af?');
//             rt.prompt();
//         }
//     })
// })

// rt.on('close', ()=>{
//     process.exit();
// })

class Assembler{
    constructor(){
        this.load = "Load Instruction";
        this.move="Move Instruction";
        this.add ="Add Instruction";
        this.inst_input_list = [];
        this.reg_list={};
        this.instructionList = {};
        this.instructionType = {};
    }

    createSystem(numReg, insts){
        var flag = -1;
        var count =0;
        console.log('System intial setup configuration');
        if(numReg>=3){
            if(count!=numReg){
                
            }
            for (let i = 0; i < numReg; i++) {
                rt.question('name of Register ', (name)=>{
                    // this.reg_list[name]= 0;
                    console.log(name);
                    rt.close();
                });
                // rt.on('line', (name)=>{
                //     console.log(name);
                // })
            }

            // for (let i = 0; i < insts; i++) {
            //     rt.question('enter Instruction name:', (name)=>{
            //         console.log(name);
            //         console.log(this);
            //     })
                
            // }
        }
    }
}

const assembler = new Assembler();
assembler.createSystem(3, 2);