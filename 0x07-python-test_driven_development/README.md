# 0x07. Python - Test-driven development

## Overview

This project emphasizes the importance of test-driven development (TDD) in Python, a programming approach where tests are written before the actual code. Participants will learn to write comprehensive test cases and documentation, focusing on using Python's `doctest` and `unittest` modules to ensure their code is robust and error-free.

## Background Context

- **Intranet Checks:** From today, documentation and tests must be written before coding. This approach helps focus on TDD and ensures all possible cases are considered.
- **Collaboration:** While collaboration on test cases is encouraged to cover edge cases, implementation should be done individually.

## Learning Objectives

By the end of this project, participants should be able to:

- Discuss why Python programming is ideal for TDD.
- Define interactive tests and their importance.
- Explain the significance of tests in development.
- Utilize Docstrings to create tests that are integrated with documentation.
- Write comprehensive documentation for each module and function.
- Identify basic option flags for creating tests and finding edge cases.

## Resources

- **Reading:**
  - "doctest — Test interactive Python examples" (until "26.2.3.7. Warnings" included)
  - "Unit Tests in Python"
  - "Unittest module"
  - "Interactive and Non-interactive tests"

## Requirements

### Python Scripts

- **Environment:** All files will be executed on Ubuntu 20.04 LTS using Python 3.8.5.
- **Coding Style:** All Python files must adhere to Pycodestyle (version 2.8.*).
- **Editors Allowed:** vi, vim, emacs.
- **Script Requirements:**
  - Must begin with `#!/usr/bin/python3`
  - Must be executable
  - Must end with a new line
  - Must include comprehensive docstrings for modules and functions.

### Python Test Cases

- **Test File Location:** All test files must be placed in a folder named `tests`.
- **File Type:** All test files should be text files with a `.txt` extension.
- **Execution:** Tests should be run using the command: `python3 -m doctest ./tests/*`
- **Documentation:** Every module and function must have detailed docstrings that explain their purpose and functionality.

## More Info

- **Collaboration on Tests:** You are encouraged to collaborate on developing test cases to ensure coverage of all possible edge cases, but the implementation of these tests must be individual.
- **Documentation Importance:** Emphasizing the necessity of documentation, this project aims to integrate learning with practical application, making code more understandable and maintainable.
