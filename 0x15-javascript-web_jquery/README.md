# 0x15-javascript-web_jquery
 
## Project Overview

This project focuses on utilizing jQuery to enhance front-end programming. The aim is to gain a solid understanding of JavaScript in the browser, manage static and dynamic data, and perform various operations such as DOM manipulation and AJAX requests.

## Concepts Covered

- JavaScript in the Browser
- Handling Data Statistically vs. Dynamically
- jQuery Basics and Advanced Features
- DOM Manipulation
- AJAX Requests (GET & POST)
- Event Binding

## Resources

To successfully complete this project, please refer to the following resources:

- [What is JavaScript?](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Introduction)
- [Selector](https://api.jquery.com/category/selectors/)
- [Get and Set Content](https://api.jquery.com/html/)
- [Manipulate CSS Classes](https://api.jquery.com/category/css/)
- [Manipulate DOM Elements](https://api.jquery.com/category/manipulation/)
- [API](https://api.jquery.com/)
- [Introduction to AJAX](https://www.codecademy.com/articles/what-is-ajax)
- [GET & POST Requests](https://api.jquery.com/jquery.ajax/)
- [jQuery Ajax Tutorial #1 - Using AJAX & APIs](https://www.youtube.com/watch?v=fEYx8dQr_cQ)
- [Troubleshooting JavaScript](https://developer.mozilla.org/en-US/docs/Learn/JavaScript/First_steps/What_went_wrong)
- [jQuery](https://jquery.com/)
- [jQuery API Documentation](https://api.jquery.com/)
- [jQuery Ajax](https://api.jquery.com/jquery.ajax/)

## Learning Objectives

By the end of this project, you should be able to:

1. Explain why jQuery makes front-end programming easier.
2. Select HTML elements using JavaScript.
3. Select HTML elements using jQuery.
4. Understand the differences between ID, class, and tag name selectors.
5. Modify the style of HTML elements.
6. Get and update the content of HTML elements.
7. Manipulate the DOM.
8. Make GET requests using jQuery Ajax.
9. Make POST requests using jQuery Ajax.
10. Listen to and bind DOM events.
11. Listen to and bind user events.

## Requirements

- **Editors Allowed:** vi, vim, emacs
- **Browser:** All files will be interpreted on Chrome (version 57.0)
- **File Endings:** All files should end with a new line
- **README.md:** A README.md file at the root of the project folder is mandatory
- **Coding Standards:** Code should be semistandard compliant with the flag `--global $: semistandard *.js --global $`
- **jQuery Version:** Use jQuery version 3.x
- **JavaScript Variables:** Do not use `var`
- **Page Reloads:** HTML should not reload for each action; use DOM manipulation and AJAX to update values and fetch data

## Usage

1. Clone the repository.
2. Navigate to the project directory.
3. Follow the instructions in each JavaScript file to implement the required functionality.
4. Ensure that your code meets all the listed requirements.
5. Run your project in Chrome (version 57.0) to test its functionality.
6. Submit your project and request a manual QA review upon completion.

## Example Code Snippets

### Selecting Elements

```javascript
// Using JavaScript
let element = document.getElementById('elementId');

// Using jQuery
let $element = $('#elementId');
