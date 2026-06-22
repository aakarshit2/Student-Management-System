# Student Management System

A console-based Student Management System developed in C++ using Object-Oriented Programming (OOP) principles. The project provides functionalities for managing students, teachers, and administrators through a structured and modular design.

## Features

* Add and manage student records
* Add and manage teacher records
* Administrator controls
* Object-Oriented design using inheritance and polymorphism
* Modular code structure using header and source files
* User-based architecture (User, Student, Teacher, Admin)
* Menu-driven console interface
* Easy to extend with new functionalities

## Project Structure

```text
Student-Management-System/
│
├── include/
│   ├── User.h
│   ├── Student.h
│   ├── Teacher.h
│   └── Admin.h
│
├── src/
│   ├── User.cpp
│   ├── Student.cpp
│   ├── Teacher.cpp
│   └── Admin.cpp
│
├── main.cpp
└── README.md
```

## Object-Oriented Concepts Used

### Encapsulation

Data and related functions are grouped together inside classes.

### Inheritance

Student, Teacher, and Admin classes inherit common functionality from the User base class.

### Polymorphism

Virtual functions are used to provide runtime flexibility and extensibility.

### Abstraction

Complex implementation details are hidden behind class interfaces.

## Technologies Used

* C++
* Object-Oriented Programming (OOP)
* Standard Template Library (STL)

## How to Compile

Using g++:

```bash
g++ main.cpp src/*.cpp -I include -o sms
```

## How to Run

### Windows

```bash
sms.exe
```

### Linux / macOS

```bash
./sms
```

## Learning Outcomes

This project helped in understanding:

* Class design and relationships
* Inheritance and polymorphism
* Modular programming
* Multi-file C++ projects
* Code organization and maintainability
* Real-world software development practices

## Future Improvements

* File handling for persistent storage
* Attendance management system
* Marks and grade management
* Login and authentication system
* Database integration
* Graphical User Interface (GUI)
* Report generation

## Author

**Aakarshit Upveja**
B.Tech Computer Science & Engineering (AI & ML)
Jaypee University of Information Technology (JUIT)

## License

This project is intended for educational and learning purposes.
