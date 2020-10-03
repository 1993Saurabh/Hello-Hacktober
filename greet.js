const greet = name => (
  `Hello, ${ typeof name === 'string'
    ? name
    : 'World'}!`
)

console.log(greet())
