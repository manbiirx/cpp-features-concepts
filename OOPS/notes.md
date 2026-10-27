
# Object-Oriented Programming System (OOPS)

OOPS stands for Object-Oriented Programming System. It is a programming approach that organizes programs around classes and objects rather than only functions and instructions.

The four main pillars of OOPS are:
1. Encapsulation
2. Abstraction
3. Inheritance
4. Polymorphism

## 1. Basic OOPS Concepts

### 1.1 Class

**Definition:** A class is a blueprint or template used to create objects. It defines the data members and member functions that describe an object's properties and behaviour.

**Example:** A `Phone` class can define the brand, model, colour, and functions such as calling and taking photos.

**Four Characteristics of a Class:**

- **Definition:** A class is a user-defined data type that groups data and functions together.
- **State:** The properties defined for its objects, such as colour, model, and battery level.
- **Behaviour:** The actions its objects can perform, such as calling, charging, and taking photos.
- **Identity:** A class is a common template; each object created from it has its own identity.

**Advantages:**
- Organizes related data and functions together.
- Makes programs easier to maintain and reuse.
- Provides a foundation for encapsulation and other OOPS concepts.

**Example in C++:**

```cpp
class Phone
{
public:
    string brand;

    void call()
    {
        cout << "Making a call";
    }
};
```

Here, `Phone` is the class, `brand` is a data member, and `call()` is a member function.

### 1.2 Object

**Definition:** An object is an instance of a class. It occupies memory for its non-static data members and can access the class's accessible member functions.

**Example:** A Samsung phone and an iPhone can be considered two objects of a general `Phone` class.

**Four Characteristics of an Object:**

- **Definition:** An object is a specific instance created from a class.
- **State:** Its current data values, such as brand = Samsung and battery = 80%.
- **Behaviour:** The actions it can perform through member functions.
- **Identity:** Its individual existence, distinguishing it from other objects.

**Advantages:**
- Represents real-world entities in a program.
- Allows multiple instances of the same class.
- Each object can maintain its own state.

**Example in C++:**

```cpp
Phone p1;
Phone p2;

p1.brand = "Samsung";
p2.brand = "Apple";
```

Here, `p1` and `p2` are two separate objects of the `Phone` class.

### 1.3 Encapsulation

**Definition:** Encapsulation is the process of combining data members and member functions into a single unit (class) and controlling access to the data.

**Example:** A banking application keeps an account balance private and allows it to be changed through functions such as `deposit()` and `withdraw()`.

**Four Characteristics:**

- **Definition:** Wrapping data and the functions that operate on it into a class.
- **State:** The data stored inside the object.
- **Behaviour:** The member functions that operate on the data.
- **Identity:** The individual object whose data is being managed.

**Advantages:**
- Protects data from unauthorized or invalid direct modification.
- Improves modularity and maintainability.
- Allows validation before data is changed.

**Example in C++:**

```cpp
class BankAccount
{
private:
    int balance = 1000;

public:
    void deposit(int amount)
    {
        if (amount > 0)
            balance += amount;
    }

    int getBalance()
    {
        return balance;
    }
};
```

The balance cannot be accessed directly from outside the class because it is `private`.

### 1.4 Abstraction

**Definition:** Abstraction means hiding unnecessary implementation details and exposing only the essential features required by the user.

**Example:** When using a phone camera, the user presses a button to take a photo without needing to understand the internal image-processing operations.

**Four Characteristics:**

- **Definition:** Showing essential functionality while hiding implementation details.
- **State:** Internal data used to perform an operation.
- **Behaviour:** The essential operations exposed to the user.
- **Identity:** The object or interface through which the functionality is accessed.

**Advantages:**
- Reduces complexity for the user.
- Makes implementation easier to change without changing how the feature is used.
- Separates the interface from the implementation.

**Example in C++:**

```cpp
class Camera
{
public:
    void takePhoto()
    {
        cout << "Photo captured";
    }
};
```

The user calls `takePhoto()` without needing to know the internal processing involved. Formal abstraction in C++ can also be implemented using abstract classes and pure virtual functions.

### 1.5 Inheritance

**Definition:** Inheritance is an OOPS concept in which one class acquires accessible properties and behaviours from another class.

**Example:** A `SmartPhone` class can inherit common features from a `Phone` class and add internet access or GPS functionality.

**Four Characteristics:**

- **Definition:** Creating a new class based on an existing class.
- **State:** The inherited data members and any additional data members.
- **Behaviour:** The inherited member functions and any new or overridden functions.
- **Identity:** Each object of the derived class has its own identity while belonging to the derived type.

**Advantages:**
- Promotes code reuse.
- Reduces duplication.
- Makes it easier to extend existing programs.

**Disadvantages:**
- Poorly designed inheritance can create tight coupling.
- Deep inheritance hierarchies can be difficult to understand and maintain.

**Example in C++:**

```cpp
class Phone
{
public:
    void call()
    {
        cout << "Calling...";
    }
};

class SmartPhone : public Phone
{
public:
    void browseInternet()
    {
        cout << "Browsing Internet";
    }
};
```

Here, `SmartPhone` is the derived class, and `Phone` is the base class.

### 1.6 Polymorphism

**Definition:** Polymorphism means "many forms." It allows the same function name, interface, or operation to behave differently depending on the arguments or the object involved.

**Types of Polymorphism:**

1. **Compile-time polymorphism:** Achieved through function overloading and operator overloading.
2. **Run-time polymorphism:** Commonly achieved through function overriding using virtual functions.

**Example:** A function named `area()` can calculate the area of a circle, rectangle, or square using different parameters.

**Four Characteristics:**

- **Definition:** One interface or name can represent multiple forms of behaviour.
- **State:** The data or object involved in the operation.
- **Behaviour:** The operation produces different results depending on the arguments or object type.
- **Identity:** The object involved can determine which overridden function executes at runtime.

**Advantages:**
- Improves flexibility and code reuse.
- Allows common interfaces for different implementations.
- Makes programs easier to extend.

**Example in C++:**

```cpp
class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a shape";
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a circle";
    }
};
```

The `draw()` function behaves differently for a `Shape` object and a `Circle` object when used through appropriate references or pointers.

## 2. Other OOPS Concepts

### 2.1 Access Modifiers

**Definition:** Access modifiers specify the accessibility of class members. C++ provides three main access modifiers: `public`, `private`, and `protected`.

| Modifier | Accessibility |
|---|---|
| `public` | Accessible from anywhere the object or class interface permits. |
| `private` | Accessible only within the class and its friends. |
| `protected` | Accessible within the class, its friends, and derived classes. |

**Example:**

```cpp
class Student
{
public:
    int rollNo;

private:
    int marks;

protected:
    int semester;
};
```

**Advantages:**
- Helps protect data.
- Controls how class members are accessed.
- Supports encapsulation.

**Important:** In a C++ `class`, members are private by default. In a `struct`, members are public by default.

### 2.2 Scope Resolution Operator (::)

**Definition:** The scope resolution operator (`::`) specifies the scope to which an identifier belongs. It is used to define class member functions outside the class, access global variables hidden by local variables, and access static members or namespace members.

**Example: Defining a Member Function Outside the Class**

```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    void display();
};

void Student::display()
{
    cout << "Student details";
}

int main()
{
    Student s;
    s.display();

    return 0;
}
```

Here, `Student::display()` indicates that `display()` belongs to the `Student` class.

**Advantages:**
- Separates class declarations from function definitions.
- Clarifies which class or scope an identifier belongs to.
- Helps resolve naming conflicts.

### 2.3 Inline Function

**Definition:** An inline function is a function declared using the `inline` keyword. It suggests that the compiler may substitute the function's code at the point of the call instead of using an ordinary function call. The compiler is not required to do so.

**Example:**

```cpp
#include <iostream>
using namespace std;

inline int square(int n)
{
    return n * n;
}

int main()
{
    cout << square(5);
    return 0;
}
```

**Output:**
```text
25
```

**Advantages:**
- May reduce function-call overhead for small functions.
- Can be useful for short, frequently called functions.

**Disadvantages:**
- Excessive inlining can increase program size.
- The compiler decides whether to inline the function.
- It is not necessarily faster in every situation.

## 3. Class and Object: Phone Example

A class defines the common properties and functions, whereas an object represents an individual phone with its own data.

```cpp
#include <iostream>
#include <string>
using namespace std;

class Phone
{
public:
    string brand;
    string model;

    void takePhoto()
    {
        cout << brand << " is taking a photo." << endl;
    }
};

int main()
{
    Phone p1;
    p1.brand = "Samsung";
    p1.model = "Galaxy";

    Phone p2;
    p2.brand = "Apple";
    p2.model = "iPhone";

    p1.takePhoto();
    p2.takePhoto();

    return 0;
}
```

**Output:**
```text
Samsung is taking a photo.
Apple is taking a photo.
```

**Explanation:**
- `Phone` is the class.
- `p1` and `p2` are objects.
- `brand` and `model` are data members.
- `takePhoto()` is a member function.
- Each object has its own brand and model values.

## 4. Constructor and Destructor

### 4.1 Constructor

**Definition:** A constructor is a special member function of a class that is automatically called when an object is created. It is generally used to initialize an object's data members.

**Characteristics:**
- Its name must be the same as the class name.
- It has no return type, not even `void`.
- It is called automatically when an object is constructed.
- It can be overloaded.
- It is commonly declared in the `public` section when objects must be created from outside the class.

**Syntax:**

```cpp
class ABC
{
public:
    ABC()
    {
        // Initialization statements
    }
};
```

### 4.2 Types of Constructors

#### A. Default Constructor

A constructor that can be called without supplying arguments is called a default constructor.

```cpp
class Area
{
private:
    int l, b;

public:
    Area()
    {
        l = 0;
        b = 0;
    }
};
```

Here, the constructor initializes both `l` and `b` to zero.

#### B. Parameterized Constructor

A constructor that accepts arguments to initialize an object is called a parameterized constructor.

```cpp
class Area
{
private:
    int l, b;

public:
    Area(int x, int y)
    {
        l = x;
        b = y;
    }

    void display()
    {
        cout << "Area = " << l * b;
    }
};

int main()
{
    Area a(5, 4);
    a.display();

    return 0;
}
```

**Output:**
```text
Area = 20
```

Here, `Area a(5, 4)` calls the parameterized constructor with `x = 5` and `y = 4`.

#### C. Copy Constructor

**Definition:** A copy constructor initializes a new object using an existing object of the same class.

**Syntax:**

```cpp
ClassName(const ClassName &obj)
{
    // Copy data from obj
}
```

**Example:**

```cpp
#include <iostream>
using namespace std;

class Area
{
private:
    int l, b;

public:
    Area()
    {
        l = 0;
        b = 0;
    }

    Area(const Area &i)
    {
        l = i.l;
        b = i.b;
    }

    void display()
    {
        cout << "Area = " << l * b << endl;
    }
};

int main()
{
    Area ar1;
    Area ar2(ar1);

    ar1.display();
    ar2.display();

    return 0;
}
```

**Output:**
```text
Area = 0
Area = 0
```

**Explanation:**
- `Area ar1;` creates `ar1` and calls the default constructor.
- `Area ar2(ar1);` creates `ar2` by copying the values from `ar1`.
- Since `ar1` contains `l = 0` and `b = 0`, `ar2` receives the same values.
- Both objects have their own data members.

**Important correction:** The copy constructor should copy values from the source object. Assigning `i.l = 20` or `i.b = 30` changes the source object and is not the correct way to demonstrate copying.

### 4.3 Constructor Overloading

**Definition:** Constructor overloading means defining multiple constructors in the same class with different parameter lists.

**Example:**

```cpp
#include <iostream>
using namespace std;

class Area
{
private:
    int r, l, b;

public:
    Area()
    {
        r = 0;
        l = 0;
        b = 0;
    }

    Area(int radius)
    {
        r = radius;
        l = 0;
        b = 0;
        cout << "Circle area = " << 3.14 * r * r << endl;
    }

    Area(int length, int breadth)
    {
        r = 0;
        l = length;
        b = breadth;
        cout << "Rectangle area = " << l * b << endl;
    }
};

int main()
{
    Area a1;
    Area a2(5);
    Area a3(4, 6);

    return 0;
}
```

**Output:**
```text
Circle area = 78.5
Rectangle area = 24
```

**Explanation:**
- `Area a1;` calls the default constructor.
- `Area a2(5);` calls the one-parameter constructor.
- `Area a3(4, 6);` calls the two-parameter constructor.
- The compiler selects the appropriate constructor based on the arguments.

**Advantages of Constructors:**
- Initialize objects automatically.
- Reduce repeated initialization code.
- Support multiple ways of creating objects.
- Help ensure that objects start with appropriate values.

**Disadvantages or Limitations:**
- Constructors cannot return values.
- They cannot be called like ordinary member functions to reinitialize an existing object.
- Incorrect initialization can leave an object in an invalid state.
- Constructor logic can become difficult to manage if it is overly complex.

### 4.4 Destructor

**Definition:** A destructor is a special member function automatically called when an object is destroyed. It is commonly used to release resources owned by the object, such as dynamically allocated memory or file handles.

**Characteristics:**
- Its name is the class name preceded by a tilde (`~`).
- It has no return type.
- It takes no parameters.
- A class can have only one destructor; it cannot be overloaded.
- It is automatically called when an object's lifetime ends, subject to the object's storage duration and lifetime rules.

**Syntax:**

```cpp
class ABC
{
public:
    ~ABC()
    {
        cout << "Destructor called";
    }
};
```

**Example:**

```cpp
#include <iostream>
using namespace std;

class Area
{
private:
    int l, b;

public:
    Area()
    {
        l = 0;
        b = 0;
        cout << "Constructor called" << endl;
    }

    Area(const Area &i)
    {
        l = i.l;
        b = i.b;
        cout << "Copy constructor called" << endl;
    }

    ~Area()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Area ar1;
    Area ar2(ar1);

    return 0;
}
```

**Output:**
```text
Constructor called
Copy constructor called
Destructor called
Destructor called
```

**Explanation:**
1. `ar1` is created, so the default constructor runs.
2. `ar2` is created from `ar1`, so the copy constructor runs.
3. When `main()` ends, the local objects are destroyed in reverse order of construction.
4. Therefore, the destructor runs first for `ar2`, then for `ar1`.

### 4.5 Difference Between Constructor and Destructor

| Constructor | Destructor |
|---|---|
| Initializes an object. | Performs cleanup when an object is destroyed. |
| Has the same name as the class. | Has the class name preceded by `~`. |
| Can accept parameters. | Cannot accept parameters. |
| Can be overloaded. | Cannot be overloaded. |
| Has no return type. | Has no return type. |
| Runs when an object is created. | Runs when an object's lifetime ends. |
| Multiple constructors may exist. | Only one destructor exists per class. |

### 4.6 Difference Between a Function and a Constructor

| Ordinary Function | Constructor |
|---|---|
| Performs a particular operation. | Primarily initializes an object. |
| Can have any valid name. | Must have the same name as the class. |
| May return a value or use `void`. | Has no return type. |
| Called explicitly in ordinary use. | Called automatically when an object is constructed. |
| Can be called repeatedly. | Is invoked as part of object construction. |
| Can have any number of parameters, including none. | Can have parameters or no parameters. |
| Can be inherited as a member function. | Is not inherited by derived classes as a constructor. |

**Exam tip:** A constructor is a special member function, but an ordinary function is not a constructor merely because it initializes variables.

## 5. Function Overloading

**Definition:** Function overloading is a feature of compile-time polymorphism in which two or more functions in the same scope have the same name but different parameter lists.

Functions can differ in:
- Number of parameters.
- Types of parameters.
- Order of parameter types.

Functions cannot be overloaded solely by changing their return types.

**Example:**

```cpp
#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << c.add(10, 20) << endl;
    cout << c.add(10, 20, 30) << endl;
    cout << c.add(2.5, 3.5) << endl;

    return 0;
}
```

**Output:**
```text
30
60
6
```

**Explanation:**
- `add(int, int)` adds two integers.
- `add(int, int, int)` adds three integers.
- `add(double, double)` adds two decimal numbers.
- The compiler chooses the matching overload based on the arguments.

**Advantages:**
- Improves readability by using one meaningful function name.
- Supports different types and numbers of inputs.
- Reduces the need for unrelated function names.

**Limitations:**
- Ambiguous overloads can cause compilation errors.
- Overloading does not work by changing only the return type.
- Too many overloads can make code harder to understand.

## 6. Quick Revision

| Concept | Key idea |
|---|---|
| Class | Blueprint for creating objects |
| Object | Instance of a class |
| Encapsulation | Bundling data and functions while controlling access |
| Abstraction | Hiding implementation details |
| Inheritance | Reusing and extending an existing class |
| Polymorphism | One interface or name, multiple behaviours |
| Access modifiers | Control accessibility of class members |
| Scope resolution (`::`) | Specifies the scope of an identifier |
| Inline function | Function declared with the `inline` keyword |
| Constructor | Initializes an object during construction |
| Destructor | Performs cleanup when an object's lifetime ends |
| Constructor overloading | Multiple constructors with different parameter lists |
| Copy constructor | Initializes an object from another object |
| Function overloading | Same function name with different parameter lists |
