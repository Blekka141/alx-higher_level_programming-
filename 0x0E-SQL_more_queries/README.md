# MySQL User and Privileges Management Project

## Learning Objectives

Upon the completion of this project, you will be able to confidently explain the following concepts to anyone, even without the aid of online resources:

### General

- **How to create a new MySQL user:** Understanding the steps to create a user in MySQL using the `CREATE USER` statement.
- **How to manage privileges for a user to a database or table:** Knowing how to grant or revoke privileges to a user for specific databases or tables using the `GRANT` and `REVOKE` statements.
- **What’s a PRIMARY KEY:** The unique identifier for a row in a table.
- **What’s a FOREIGN KEY:** A key used to link two tables together, a constraint that enforces referential integrity.
- **How to use NOT NULL and UNIQUE constraints:** Implementing constraints to ensure that a column cannot have a NULL value (NOT NULL) and that all values in a column are unique (UNIQUE).
- **How to retrieve data from multiple tables in one request:** Using JOIN statements to combine rows from two or more tables based on a related column between them.
- **What are subqueries:** A query nested within another SQL query.
- **What are JOIN and UNION:** JOIN is used to combine rows from two or more tables, based on a related column between them, whereas UNION is used to combine the result sets of two or more SELECT statements.
## Requirements

### General

- **Editors:** Only vi, vim, or emacs may be used.
- **Execution Environment:** Files will be run on Ubuntu 20.04 LTS using MySQL 8.0 (version 8.0.25).
- **File Format:** Each file must end with a newline.
- **SQL Queries:** Should begin with a comment describing the task.
- **Code Style:** All SQL keywords must be in uppercase (e.g., SELECT, WHERE).
- **Documentation:** A README.md file is required at the root of the project folder.
- **File Length:** Will be checked using `wc`.

## More Info

### Example SQL File Comment

```sql
-- 3 first students in Batch ID=3
-- because Batch 3 is the best!
SELECT id, name FROM students WHERE batch_id = 3 ORDER BY created_at DESC LIMIT 3;
