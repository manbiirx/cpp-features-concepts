
# Basic Calculator Using OOP in C++

## Description
This program performs basic arithmetic operations on two integers entered by the user. It calculates addition, subtraction, multiplication, division, and the square and cube of both numbers using a class named `calculator`.

## Concepts Used
- **Class:** The `calculator` class groups the data and operations of the calculator.
- **Object:** The object `cal` is created from the `calculator` class.
- **Data Members:** The variables `a` and `b` store the two numbers.
- **Member Functions:** The `getdata()` function accepts input, while `display()` performs calculations and displays the results.
- **Access Specifiers:** The variables `a` and `b` are private by default because they are declared inside a C++ class before the `public:` label.
- **Type Casting:** `(float) a / b` converts `a` to a floating-point value so that division can produce a decimal result.

## Operations Performed
1. **Addition:** Adds the two numbers (`a + b`).
2. **Subtraction:** Subtracts `b` from `a` (`a - b`).
3. **Multiplication:** Multiplies the two numbers (`a * b`).
4. **Division:** Divides `a` by `b` using floating-point division.
5. **Square of a:** Multiplies `a` by itself (`a * a`).
6. **Cube of a:** Multiplies `a` by itself three times (`a * a * a`).
7. **Square of b:** Multiplies `b` by itself (`b * b`).
8. **Cube of b:** Multiplies `b` by itself three times (`b * b * b`).

## How the Program Works
1. The program includes the `iostream` library for input and output operations.
2. The `calculator` class is declared with two integer data members, `a` and `b`.
3. The `getdata()` function asks the user to enter two numbers and stores them in the variables.
4. The `display()` function calculates and prints all eight results.
5. In `main()`, an object named `cal` is created.
6. The program calls `cal.getdata()` to accept the numbers and `cal.display()` to perform and display the calculations.

## Sample Output

```text
Enter two numbers: 10 5
Addition = 15
Subtraction = 5
Multiplication = 50
Division = 2
Square of a = 100
Cube of a = 1000
Square of b = 25
Cube of b = 125
```

## Advantages
- Demonstrates the use of classes and objects in C++.
- Combines related calculations into a single class.
- Uses separate member functions for input and processing.
- Performs several arithmetic operations using the same two inputs.

## Limitations
- The program does not check whether the second number is zero before division.
- It does not validate invalid or non-numeric input.
- Large input values may cause integer overflow when calculating squares or cubes.

## Result
The program successfully accepts two integers and displays their sum, difference, product, quotient, squares, and cubes.

## Conclusion
This program demonstrates basic Object-Oriented Programming concepts in C++. It uses a class, private data members, an object, and public member functions to perform arithmetic calculations on user-provided numbers.
```

**Important improvement:** Add a check for `b != 0` before division. Otherwise, entering zero as the second number causes an invalid division operation.
