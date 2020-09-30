// GraphQL with Node

var { graphql, buildSchema } = require("graphql");

var schema = buildSchema(`
  type Query {
    hello: String
  }
`);

var resolvers = {
  hello: () => {
    return "Hello, World!";
  }
};

graphql(schema, "{ hello }", resolvers).then(response => {
  console.log(response);
});

/* Steps to run the code :
> npm init -y
> npm install graphql
> node HelloWorldGraphQL.js
*/
