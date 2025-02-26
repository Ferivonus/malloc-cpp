# Malloc-Memory-Management-with-Cpp

Welcome to my fun experiment with memory management in C++! 😄
This project demonstrates the usage of `malloc` and `realloc` to manage memory dynamically, with a focus on two primary functionalities: performing math operations on integers and managing a list of names.

The program uses dynamic memory allocation to load numbers or names from files, perform calculations, and manipulate strings—showing off the power and flexibility of manual memory handling

---

## Features

- **Memory Management**:  
  It uses `malloc` and `realloc` to manage memory dynamically, which is pretty fun when you think about how the memory grows and shrinks as we process data.

- **Integer Math Operations**:  
  Load numbers from a file and perform basic math operations such as addition, subtraction, multiplication, and division.

- **Name Concatenation**:  
  Load names from a file and dynamically allocate memory to store and print them in a friendly format.

- **Error Handling & Memory Limits**:  
  The program gracefully handles memory allocation errors, ensuring that the memory usage doesn't exceed a defined limit (100MB in this case). It also catches file access and data-related errors.

- **Database Interaction:**
  The program interacts with a SQLite database. It can create tables, insert data from a file, and perform other database operations.

- **Server Mode:**
  The program can run as a server, listening on a specified port and handling database interactions via network requests.

- **Error Handling**:  
  Sometimes things go wrong (like when memory can't be allocated or a file doesn't open), but don’t worry! The program checks for those cases and handles them so you don’t have to deal with the chaos :D

## Usage

### Building the Project

To build the program, you can use your IDE (e.g., Visual Studio) or a terminal. Below are the instructions for building with Visual Studio:

For Visual Studio 2022:

``` bash
  Shortcut: Press **Ctrl + Shift + B** to build the project.
```

Alternatively, if you're using a terminal, you can use the following command:

``` bash
  g++ -o c_malloc *.cpp -std=c++11
```

This will compile your program with g++.

## Running the Program

You can choose from four different modes: math, names, db, and server. Here’s how to run the program in each mode:

### 1. Math Operations Mode

Load numbers from a file and perform basic math operations.

``` bash
  ./c_malloc.exe math "path/to/numbers.txt"
```

This will load numbers from the provided file and perform operations like addition, subtraction, multiplication, and division.

### 2. Names Management Mode

Load names from a file, store them dynamically, and print the concatenated result.

``` bash
  ./c_malloc.exe names "path/to/names.txt"
```

This will read names from the file, dynamically allocate memory for them, and concatenate the names into a single output string

### 3. Database Mode

Insert data from a file into a SQLite database and perform operations such as table creation.

```bash
  ./c_malloc.exe db "path/to/data.txt"
```

This will create a database table and insert data from the provided file.

### 4. Server Mode

Run the program as a server that handles database operations.

```bash
  ./c_malloc.exe server [port]
```

This will start the server on the specified port (default is 8080) and listen for database interactions.

---

## What Happens Under the Hood

1. **Sum Integers**:  
  You can feed it a file full of numbers, and it will sum them up using `malloc` and `realloc` to store each number in memory.

2. **Concatenate Names**:  
  Feed it a list of names, and it will allocate space for each name, concatenating them into one long string that gets printed out.

3. **Database Interaction**:
  The program interacts with a SQLite database, where it can create tables, insert data, and perform queries.

4. **Server Mode**:
  program runs a server that can listen on a specified port, handling incoming database interactions via network requests.

---

I hope this little project brings a smile to your face :3 It's always a fun challenge playing with `malloc` and seeing how memory behaves when we're manipulating it. Enjoy the code, and remember—don't forget to free your memory! 🌟

## Conclusion

This project is a fun exploration of manual memory management in C++, utilizing malloc and realloc to dynamically allocate memory. It’s also a great exercise in working with file input/output and ensuring the program handles errors and memory limits gracefully.

I hope you enjoy experimenting with this code! If you have any questions or suggestions for improvements, feel free to reach out. 😄

Happy coding and don't forget—always free your memory! 🌟

---

Let me know if you'd like to adjust anything or add more features!
