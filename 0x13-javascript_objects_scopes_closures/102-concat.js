#!/usr/bin/node
const fs = require('fs');

const args = process.argv.slice(2);
const fileA = args[0];
const fileB = args[1];
const fileC = args[2];

const contentA = fs.readFileSync(fileA, { encoding: 'utf8' });
const contentB = fs.readFileSync(fileB, { encoding: 'utf8' });

fs.writeFileSync(fileC, contentA + contentB);
