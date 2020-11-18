const express = require('express');
var app = express();

app.get('/', (req,res) => {
  return res.end("Hello World");
});

app.listen(3000);
