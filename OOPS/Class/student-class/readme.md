
# Student Details Using Class and Object in C++

## Description
This program accepts and displays a student's roll number and name. It uses a class named `student` to store student information and two member functions, `getdata()` and `display()`, to handle input and output operations.

## Concepts Used
- **Class:** The `student` class groups student information and related functions.
- **Object:** The object `s` is created from the `student` class.
- **Data Members:** The variables `rollno` and `name` store the student's roll number and name.
- **Member Functions:** The `getdata()` function accepts input, while `display()` prints the stored information.
- **Access Specifier:** The variables are private by default because they are declared before the `public:` label.
- **Encapsulation:** The data and functions are grouped within a single class.

## How the Program Works
1. The program includes the `iostream` library for input and output operations.
2. The `student` class is declared with two data members: `rollno` and `name`.
3. The `getdata()` function prompts the user to enter the student's roll number and name.
4. The entered values are stored in the corresponding data members.
5. The `display()` function prints the roll number and name.
6. In `main()`, an object named `s` is created.
7. The statement `s.getdata()` accepts the student's details, and `s.display()` displays them.

## Sample Output

```text
Enter roll number and name: 101 Manbiir
Roll number = 101
Name = Manbiir
```

## Advantages
- Demonstrates the basic use of classes and objects in C++.
- Organizes student information using data members.
- Uses separate functions for input and output.
- Demonstrates encapsulation by grouping data and functions within a class.

## Limitations
- The program accepts only a single student's details.
- The `cin` statement reads the name only until the first whitespace, so it cannot accept a full name containing spaces.
- The program does not validate the entered roll number.

## Result
The program successfully accepts a student's roll number and name and displays the stored information.

## Conclusion
This program demonstrates fundamental Object-Oriented Programming concepts in C++, including classes, objects, data members, member functions, and encapsulation. It illustrates how a class can organize and manage related student information.
