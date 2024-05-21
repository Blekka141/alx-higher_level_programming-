# 0x14. JavaScript - Web Scraping

## Resources

Make sure to read or watch the following:

- [Working with JSON data](#)
- [The workflow of accessing the attributes of a simply-created JSON object by Jimmy Tran from Cohort 1 - San Francisco](#)
- [Request module](#)
- [Modern JS](#)

## Learning Objectives

By the end of this project, you should be able to explain:

- Why JavaScript programming is amazing.
- How to manipulate JSON data.
- How to use the request and fetch APIs.
- How to read and write a file using the `fs` module.

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`.
- All files will be interpreted on Ubuntu 20.04 LTS using Node.js (version 14.x).
- All files should end with a new line.
- The first line of all your files should be `#!/usr/bin/node`.
- A `README.md` file at the root of the folder is mandatory.
- Your code should be semistandard compliant (Standard + semicolons on top). Refer to AirBnB style.
- All files must be executable.
- The length of your files will be tested using `wc`.
- Do not use `var`.

### Setup

1. **Install Node 14**:
    ```sh
    $ curl -sL https://deb.nodesource.com/setup_14.x | sudo -E bash -
    $ sudo apt-get install -y nodejs
    ```

2. **Install semi-standard**:
    ```sh
    $ sudo npm install semistandard --global
    ```

3. **Install request module**:
    ```sh
    $ sudo npm install request --global
    $ export NODE_PATH=/usr/lib/node_modules
    ```

    > Note: The request module has been deprecated since February 2020, but it is still widely used in the industry and is useful for practicing web scraping in JavaScript.
