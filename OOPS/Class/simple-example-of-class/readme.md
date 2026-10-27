
# Addition Using a Class and Return Value in C++

## Description
This program performs addition of two integers entered by the user. It uses a class named `calculator` and a member function named `add()` to accept the input, calculate the sum, and return the result to the calling function.

## Concepts Used
- **Class:** The `calculator` class groups the data and addition functionality.
- **Object:** The object `cal` is created from the `calculator` class.
- **Data Members:** The integer variables `a` and `b` store the two input numbers.
- **Member Function:** The `add()` function accepts input and calculates the sum.
- **Return Statement:** The `return` statement sends the calculated sum back to the calling function.
- **Function Call:** The expression `cal.add()` calls the member function using the object.
- **Variable Assignment:** The variable `c` stores the returned sum.

## How the Program Works
1. The program includes the `iostream` library for input and output operations.
2. The `calculator` class is declared with two integer data members, `a` and `b`.
3. The public member function `add()` asks the user to enter two numbers.
4. The entered values are stored in `a` and `b`.
5. The function calculates their sum and returns it using `return(a + b)`.
6. In `main()`, an object named `cal` is created.
7. The statement `int c = cal.add();` calls the function and stores the returned sum in `c`.
8. Finally, the program displays the value of `c`.

## Sample Output

```text
Enter two numbers: 10 20
c=30
```

## Advantages
- Demonstrates how a member function can return a value.
- Separates the calculation from the output statement in `main()`.
- Uses a class and object to organize the program.
- Allows the returned result to be stored or reused in other calculations.

## Limitations
- The program accepts only integer inputs.
- It does not validate invalid or non-numeric input.
- The function combines input collection and calculation, making it less reusable than a function that accepts its numbers as parameters.

## Result
The program successfully accepts two integers, calculates their sum using the `add()` member function, returns the result, and displays it through the variable `c`.

## Conclusion
This program demonstrates the use of classes, objects, member functions, and return values in C++. It shows how a member function can calculate a result and pass it back to the calling function for further use.
