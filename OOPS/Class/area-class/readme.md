
# Area Calculator Using OOP in C++

## Description
This program calculates the areas of four geometric shapes: a square, a rectangle, a triangle, and a circle. It uses a class named `area` and a member function named `calculate()` to take input from the user and display the calculated areas.

## Concepts Used
- **Class:** The `area` class groups the calculation functionality.
- **Object:** The object `a` is created from the `area` class.
- **Member Function:** The `calculate()` function handles user input and area calculations.
- **User Input:** The `cin` statement accepts dimensions from the user.
- **Output:** The `cout` statement displays the calculated areas.
- **Arithmetic Operators:** Multiplication (`*`) is used in the area formulas.

## Formulas Used
1. **Area of Square:** Side × Side
2. **Area of Rectangle:** Length × Breadth
3. **Area of Triangle:** ½ × Base × Height
4. **Area of Circle:** π × Radius × Radius

The value of π is taken as `3.14`.

## How the Program Works
1. The program includes the `iostream` library for input and output operations.
2. The `area` class is declared with a public member function called `calculate()`.
3. The function asks the user to enter the side of a square and calculates its area.
4. It then accepts the length and breadth of a rectangle and calculates its area.
5. Next, it takes the base and height of a triangle and calculates its area.
6. Finally, it accepts the radius of a circle and calculates its area.
7. In `main()`, an object `a` is created, and `a.calculate()` is called to execute the calculations.

## Sample Output

```text
Enter side of square: 5
Area of square = 25
Enter length and breadth: 4 6
Area of rectangle = 24
Enter base and height of triangle: 4 5
Area of triangle = 10
Enter radius of circle: 3
Area of circle = 28.26
```

## Advantages
- Demonstrates the basic use of classes and objects in C++.
- Performs multiple area calculations in a single program.
- Accepts dimensions dynamically from the user.
- Organizes the calculations inside a member function.

## Limitations
- The program does not validate negative or invalid inputs.
- The value of π is approximated as `3.14`.
- All calculations are performed within one member function, which could become lengthy as more shapes are added.

## Result
The program successfully calculates and displays the areas of a square, rectangle, triangle, and circle using a class and its member function.

## Conclusion
This program demonstrates the implementation of basic Object-Oriented Programming concepts in C++. It uses a class, an object, and a member function to perform geometric area calculations based on user input.
