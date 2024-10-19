
const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

readline.question('Dont say "ksi i love you" ', userInput => {
    userInput = userInput.toLowerCase();

    if (userInput === 'ksi i love you') {
        console.log('JavaScript wouldnt let me do it LOL');
  
    } else {
        console.log("you got lucky");
    }

    readline.close();
});
