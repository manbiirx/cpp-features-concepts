
# Student and Teacher Details Using Classes and Objects in C++

## Description
This program accepts and displays the details of a student and a teacher. It uses two separate classes, `student` and `teacher`, to store their respective information. Each class contains data members and member functions to accept and display the details.

## Concepts Used
- **Classes:** The `student` and `teacher` classes organize the information and functions associated with each entity.
- **Objects:** The objects `s` and `t` are created from the `student` and `teacher` classes, respectively.
- **Data Members:** The student class stores `rollno`, `age`, `name`, and `gender`. The teacher class stores `id`, `experience`, `name`, and `expertise`.
- **Member Functions:** Both classes contain `getdata()` and `display()` functions for accepting and displaying information.
- **Encapsulation:** Data members and member functions are grouped within their respective classes. However, the data members are public, so they are accessible directly from outside the classes.
- **Multiple Classes and Objects:** The program demonstrates how separate classes can represent different entities in the same program.

## How the Program Works
1. The program includes the `iostream` library for input and output operations.
2. The `student` class is declared with four data members: roll number, age, name, and gender.
3. The `getdata()` function of the student class accepts the student's details, and `display()` prints them.
4. The `teacher` class is declared with four data members: ID, experience, name, and expertise.
5. The `getdata()` function of the teacher class accepts the teacher's details, and `display()` prints them.
6. In `main()`, two objects are created: `s` for the student class and `t` for the teacher class.
7. The program calls the input functions for both objects and then calls their display functions to show the entered details.

## Sample Output

```text
Enter roll number, age, name and gender of student: 101 18 Aman Male
Enter ID, experience, name and expertise of teacher: 201 10 Ravi CSE
Student: 101 18 Aman Male

Teacher: 201 10 Ravi CSE
```

## Advantages
- Demonstrates the use of multiple classes and objects in a single program.
- Keeps student and teacher information organized separately.
- Uses member functions to accept and display data.
- Makes the program easier to extend with additional details and functions.

## Limitations
- The program accepts only one student and one teacher.
- The `cin` statement reads names and expertise only until the first whitespace.
- The data members are public, allowing direct modification from outside the classes.
- The program does not validate the entered data.

## Result
The program successfully accepts and displays the details of a student and a teacher using separate classes and objects.

## Conclusion
This program demonstrates the fundamental concepts of Object-Oriented Programming in C++, including classes, objects, data members, member functions, and encapsulation. It illustrates how different real-world entities can be represented using separate classes within the same program.
