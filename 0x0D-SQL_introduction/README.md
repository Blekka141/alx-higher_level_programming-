# SQL & MySQL Basics Project README

## Learning Objectives

Upon completion of this project, you should be able to confidently explain the following concepts without the need for external resources:

### General

- **What’s a database:** A structured set of data held in a computer, especially one that is accessible in various ways.
- **What’s a relational database:** A type of database that stores and provides access to data points that are related to one another.
- **What does SQL stand for:** SQL stands for Structured Query Language, which is used for managing and manipulating relational databases.
- **What’s MySQL:** MySQL is an open-source relational database management system based on SQL.
- **How to create a database in MySQL:** The basics of creating a database involve using the `CREATE DATABASE` SQL command.
- **What does DDL and DML stand for:** DDL stands for Data Definition Language, involving commands like CREATE, DROP, ALTER. DML stands for Data Manipulation Language, involving commands like SELECT, INSERT, UPDATE, DELETE.
- **How to CREATE or ALTER a table:** Using the `CREATE TABLE` or `ALTER TABLE` SQL commands.
- **How to SELECT data from a table:** Utilizing the `SELECT` statement to query and retrieve data from a database table.
- **How to INSERT, UPDATE or DELETE data:** Using the `INSERT`, `UPDATE`, or `DELETE` commands to manipulate data in the database.
- **What are subqueries:** A query nested within another SQL query.
- **How to use MySQL functions:** Utilizing built-in MySQL functions in queries to perform various operations like calculations, data manipulation, etc.

## Requirements

### General

- **Editors:** Use vi, vim, or emacs.
- **Environment:** Your files will be executed on Ubuntu 20.04 LTS using MySQL 8.0 (version 8.0.25).
- **File Format:** All files must end with a new line.
- **SQL Queries:** Each SQL query should begin with a comment describing its purpose.
- **SQL Keywords:** Use uppercase for SQL keywords (e.g., SELECT, WHERE).
- **README:** A README.md file must be included at the root of the project folder.
- **File Length:** The `wc` command will be used to test the length of your files.

## More Info

### SQL File Comments Example

```sql
-- 3 first students in the Batch ID=3
-- because Batch 3 is the best!
SELECT id, name FROM students WHERE batch_id = 3 ORDER BY created_at DESC LIMIT 3;
