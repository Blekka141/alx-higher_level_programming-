#!/usr/bin/node
const dict = require('./101-data').dict;

let result = {};
Object.keys(dict).forEach(key => {
  let occurrence = dict[key];
  if (!result[occurrence]) {
    result[occurrence] = [];
  }
  result[occurrence].push(key);
});

console.log(result);
