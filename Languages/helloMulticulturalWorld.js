//print hello world in 7 different languages after each passing second. 
//Your language not here?
//Don't worry I will keep committing till I can :p

let i = 0;
const msg = ['Hello World', 'नमस्ते दुनिया', 'Bonjour le monde', '你好，世界', 'Hallo Wereld', 'Hallo Welt', 'ਸਤਿ ਸ੍ਰੀ ਅਕਾਲ ਦੁਨਿਆ', 'Hai dunia',];
setInterval(() => {
  console.log(msg[i%7]);
  i++;
}, 1000);
