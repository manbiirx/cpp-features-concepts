# OBJECT-ORIENTED PROGRAMMING SYSTEM (OOPS)

## 1. Introduction to OOPS

**Definition:** OOPS stands for Object-Oriented Programming System. It is a programming approach that organizes programs around classes and objects rather than only functions and instructions.

The four main pillars of OOPS are:

1. Encapsulation
2. Abstraction
3. Inheritance
4. Polymorphism

## 2. Basic OOPS Concepts

### 2.1 Class

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
#include <iostream>
#include <string>
using namespace std;

class Phone
{
public:
    string brand;

    void call()
    {
        cout << "Making a call";
    }
};

int main()
{
    Phone p;
    p.brand = "Samsung";
    p.call();

    return 0;
}
```

Here, `Phone` is the class, `brand` is a data member, and `call()` is a member function.

### 2.2 Object

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

### 2.3 Encapsulation

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
#include <iostream>
using namespace std;

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

int main()
{
    BankAccount b;

    b.deposit(500);

    cout << "Balance = " << b.getBalance();

    return 0;
}
```

Here, the balance cannot be accessed directly from outside the class because it is `private`. It can only be modified through accessible member functions.

### 2.4 Abstraction

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
#include <iostream>
using namespace std;

class Camera
{
public:
    void takePhoto()
    {
        cout << "Photo captured";
    }
};

int main()
{
    Camera c;
    c.takePhoto();

    return 0;
}
```

The user calls `takePhoto()` without needing to know the internal processing involved.

Formal abstraction in C++ can also be implemented using abstract classes and pure virtual functions.

### 2.5 Inheritance

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
#include <iostream>
using namespace std;

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

int main()
{
    SmartPhone s;

    s.call();
    s.browseInternet();

    return 0;
}
```

Here, `SmartPhone` is the derived class, and `Phone` is the base class.

### 2.6 Polymorphism

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
#include <iostream>
using namespace std;

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

int main()
{
    Circle c;
    Shape *ptr = &c;

    ptr->draw();

    return 0;
}
```

**Output:**

```text
Drawing a circle
```

The `draw()` function behaves differently depending on the actual object type when called through an appropriate base class pointer or reference.

---

## 3. Other OOPS Concepts

### 3.1 Access Modifiers

**Definition:** Access modifiers specify the accessibility of class members. C++ provides three main access modifiers: `public`, `private`, and `protected`.

| Modifier | Accessibility |
|---|---|
| `public` | Accessible from outside the class through an object, subject to the class interface. |
| `private` | Accessible only within the class and its friends. |
| `protected` | Accessible within the class, its friends, and derived classes. |

**Example:**

```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;

private:
    int marks;

protected:
    int semester;
};

int main()
{
    Student s;

    s.rollNo = 10;

    return 0;
}
```

**Advantages:**

- Helps protect data.
- Controls how class members are accessed.
- Supports encapsulation.

**Important:**

- In a C++ `class`, members are private by default.
- In a C++ `struct`, members are public by default.

### 3.2 Scope Resolution Operator (::)

**Definition:** The scope resolution operator (`::`) specifies the scope to which an identifier belongs.

It is used to:

- Define class member functions outside the class.
- Access global variables hidden by local variables.
- Access static members or namespace members.

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

### 3.3 Inline Function

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

---

## 4. Class and Object: Phone Example

A class defines the common properties and functions, whereas an object represents an individual phone with its own data.

**Example in C++:**

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

---

## 5. Constructor and Destructor

### 5.1 Constructor

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

### 5.2 Types of Constructors

#### A. Default Constructor

A constructor that can be called without supplying arguments is called a default constructor.

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
};

int main()
{
    Area a;

    return 0;
}
```

Here, the constructor initializes both `l` and `b` to zero.

#### B. Parameterized Constructor

A constructor that accepts arguments to initialize an object is called a parameterized constructor.

**Example:**

```cpp
#include <iostream>
using namespace std;

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

**Important:** The copy constructor should copy values from the source object. It should not modify the source object while copying.

### 5.3 Constructor Overloading

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

### 5.4 Destructor

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

### 5.5 Difference Between Constructor and Destructor

| Constructor | Destructor |
|---|---|
| Initializes an object. | Performs cleanup when an object is destroyed. |
| Has the same name as the class. | Has the class name preceded by `~`. |
| Can accept parameters. | Cannot accept parameters. |
| Can be overloaded. | Cannot be overloaded. |
| Has no return type. | Has no return type. |
| Runs when an object is created. | Runs when an object's lifetime ends. |
| Multiple constructors may exist. | Only one destructor exists per class. |

### 5.6 Difference Between a Function and a Constructor

| Ordinary Function | Constructor |
|---|---|
| Performs a particular operation. | Primarily initializes an object. |
| Can have any valid name. | Must have the same name as the class. |
| May return a value or use `void`. | Has no return type. |
| Called explicitly in ordinary use. | Called automatically when an object is constructed. |
| Can be called repeatedly. | Is invoked as part of object construction. |
| Can have any number of parameters, including none. | Can have parameters or no parameters. |
| Can be inherited as a member function. | Is not inherited by derived classes as a constructor. |

**Exam Tip:** A constructor is a special member function, but an ordinary function is not a constructor merely because it initializes variables.

---

## 6. Function Overloading

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

---

## 7. Types of Inheritance

**Definition:** Inheritance is an OOPS concept in which one class acquires the properties and member functions of another class. It promotes code reusability and reduces code duplication.

There are five main types of inheritance in C++:

1. Single Inheritance
2. Multilevel Inheritance
3. Hierarchical Inheritance
4. Multiple Inheritance
5. Hybrid Inheritance

### 7.1 Single Inheritance

**Definition:** Single inheritance occurs when one derived class inherits from only one base class.

**Structure:**

```text
     Class A
   (Base Class)
        |
        |
     Class B
 (Derived Class)
```

**Example in C++:**

```cpp
#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "In class A" << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "In class B" << endl;
    }
};

int main()
{
    B obj;

    obj.display();
    obj.show();

    return 0;
}
```

**Output:**

```text
In class A
In class B
```

**Explanation:**

- Class A is the base class.
- Class B is the derived class.
- Class B inherits the accessible members of Class A.
- The object of Class B can access both `display()` and `show()`.

### 7.2 Multilevel Inheritance

**Definition:** Multilevel inheritance occurs when a class inherits from another derived class, forming a chain of inheritance.

**Structure:**

```text
       Class A
          |
          |
       Class B
          |
          |
       Class C
```

**Example in C++:**

```cpp
#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "In class A" << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "In class B" << endl;
    }
};

class C : public B
{
public:
    void display1()
    {
        cout << "In class C" << endl;
    }
};

int main()
{
    C obj;

    obj.display();
    obj.show();
    obj.display1();

    return 0;
}
```

**Output:**

```text
In class A
In class B
In class C
```

**Explanation:**

- Class B inherits from Class A.
- Class C inherits from Class B.
- Class C can access the accessible members inherited from both A and B.
- This creates a chain of inheritance.

### 7.3 Hierarchical Inheritance

**Definition:** Hierarchical inheritance occurs when two or more derived classes inherit from the same base class.

**Structure:**

```text
          Class A
        /        \
       /          \
   Class B       Class C
```

**Example in C++:**

```cpp
#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "In class A" << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "In class B" << endl;
    }
};

class C : public A
{
public:
    void print()
    {
        cout << "In class C" << endl;
    }
};

int main()
{
    B obj1;
    C obj2;

    obj1.display();
    obj1.show();

    obj2.display();
    obj2.print();

    return 0;
}
```

**Output:**

```text
In class A
In class B
In class A
In class C
```

**Explanation:**

- Class A is the common base class.
- Classes B and C independently inherit from Class A.
- Both derived classes can access the accessible members of Class A.
- An object of B cannot directly access the members specific to C, and vice versa.

### 7.4 Multiple Inheritance

**Definition:** Multiple inheritance occurs when a single derived class inherits from two or more base classes.

**Structure:**

```text
     Class A       Class B
          \         /
           \       /
            Class C
        (Derived Class)
```

**Example in C++:**

```cpp
#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "In class A" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "In class B" << endl;
    }
};

class C : public A, public B
{
public:
    void print()
    {
        cout << "In class C" << endl;
    }
};

int main()
{
    C obj;

    obj.display();
    obj.show();
    obj.print();

    return 0;
}
```

**Output:**

```text
In class A
In class B
In class C
```

**Explanation:**

- Class A and Class B are the base classes.
- Class C inherits from both A and B.
- The object of Class C can access the accessible members of both base classes.
- This allows a class to combine features from multiple classes.

### 7.5 Hybrid Inheritance

**Definition:** Hybrid inheritance is a combination of two or more types of inheritance in a single program.

**Example:** A combination of hierarchical and multilevel inheritance.

**Structure:**

```text
             Class A
            /       \
           /         \
       Class B      Class D
          |
          |
       Class C
```

**Example in C++:**

```cpp
#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "In class A" << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "In class B" << endl;
    }
};

class C : public B
{
public:
    void print()
    {
        cout << "In class C" << endl;
    }
};

class D : public A
{
public:
    void display1()
    {
        cout << "In class D" << endl;
    }
};

int main()
{
    C obj1;
    D obj2;

    obj1.display();
    obj1.show();
    obj1.print();

    obj2.display();
    obj2.display1();

    return 0;
}
```

**Output:**

```text
In class A
In class B
In class C
In class A
In class D
```

**Explanation:**

- Class B and Class D inherit from Class A (hierarchical inheritance).
- Class C inherits from Class B (multilevel inheritance).
- The combination of these inheritance types forms hybrid inheritance.

### Advantages of Inheritance

- Promotes code reusability.
- Reduces code duplication.
- Makes programs easier to extend.
- Improves code organization.
- Supports runtime polymorphism.

### Disadvantages of Inheritance

- Increases dependency between classes.
- Complex inheritance structures can be difficult to understand.
- Multiple inheritance may create ambiguity when base classes contain members with the same name.
- Poorly designed inheritance can make maintenance difficult.

---

## 8. Virtual Functions

### 8.1 Definition

A virtual function is a member function of a base class that is declared using the `virtual` keyword. It allows a derived class to override the function and enables runtime polymorphism.

When a virtual function is called through a base class pointer or reference, the function belonging to the actual object type is executed.

**Example:** A base class `A` has a function called `display()`. A derived class `B` overrides the same function. When a base class pointer points to an object of B, the derived class's `display()` function is executed.

### 8.2 Example in C++

```cpp
#include <iostream>
using namespace std;

class A
{
public:
    virtual void display()
    {
        cout << "In class A" << endl;
    }
};

class B : public A
{
public:
    void display() override
    {
        cout << "In class B" << endl;
    }
};

int main()
{
    B obj;
    A *ptr;

    ptr = &obj;

    ptr->display();
    obj.display();

    return 0;
}
```

**Output:**

```text
In class B
In class B
```

**Explanation:**

1. Class A is the base class and contains a virtual function `display()`.
2. Class B inherits from A and overrides the `display()` function.
3. An object `obj` of Class B is created.
4. A pointer `ptr` of Class A is declared.
5. `ptr = &obj` makes the base class pointer point to the derived class object.
6. `ptr->display()` calls the derived class version because the function is virtual.
7. `obj.display()` also calls the derived class version.

### 8.3 Characteristics of Virtual Functions

- A virtual function is declared using the `virtual` keyword in the base class.
- It is used to achieve runtime polymorphism.
- It can be overridden in a derived class.
- It is generally called through a base class pointer or reference to achieve runtime polymorphism.
- A virtual function can have a function body in the base class.
- Constructors cannot be virtual, but destructors can be virtual.

### 8.4 Advantages of Virtual Functions

- Supports runtime polymorphism.
- Provides flexibility in programming.
- Allows different derived classes to provide their own implementations.
- Makes programs easier to extend and maintain.

### 8.5 Difference Between Normal and Virtual Functions

| Normal Function | Virtual Function |
|---|---|
| Does not use the `virtual` keyword. | Declared using the `virtual` keyword in the base class. |
| Usually uses compile-time binding. | Supports runtime binding. |
| Function call is determined by the pointer or reference's static type in ordinary non-virtual calls. | Function call is determined by the actual object type when overridden. |
| Does not provide runtime polymorphism by itself. | Supports runtime polymorphism. |

**Important:** In the example, if `virtual` is removed from `display()`, then `ptr->display()` calls the base class version (`In class A`), even though the pointer points to an object of Class B.

---

# QUICK EXAM REVISION

## Four Pillars of OOPS

| Concept | Meaning |
|---|---|
| Encapsulation | Combining data and functions into one unit and controlling access. |
| Abstraction | Hiding implementation details and showing essential features. |
| Inheritance | Acquiring properties and behaviours from another class. |
| Polymorphism | One name or interface having multiple forms of behaviour. |

## Types of Inheritance

| Type | Meaning |
|---|---|
| Single | One derived class inherits from one base class. |
| Multilevel | A derived class inherits from another derived class. |
| Hierarchical | Multiple derived classes inherit from one base class. |
| Multiple | One derived class inherits from multiple base classes. |
| Hybrid | Combination of two or more inheritance types. |

## Types of Constructors

| Type | Meaning |
|---|---|
| Default Constructor | Constructor called without arguments. |
| Parameterized Constructor | Constructor that accepts arguments. |
| Copy Constructor | Creates a new object by copying an existing object. |

## Important C++ Keywords and Operators

| Keyword / Operator | Use |
|---|---|
| `class` | Declares a class. |
| `public` | Allows access through the public interface. |
| `private` | Restricts access to the class and its friends. |
| `protected` | Allows access within the class, friends and derived classes. |
| `virtual` | Enables runtime polymorphism. |
| `override` | Indicates that a derived function overrides a virtual function. |
| `inline` | Declares an inline function. |
| `::` | Scope resolution operator. |
| `~` | Used to declare a destructor. |
| `->` | Accesses a member through a pointer. |
| `&` | Used to declare a reference and in other C++ operations. |

## Important Exam Differences to Remember

1. Class vs Object
2. Encapsulation vs Abstraction
3. Constructor vs Destructor
4. Constructor vs Ordinary Function
5. Function Overloading vs Function Overriding
6. Compile-time vs Runtime Polymorphism
7. Normal Function vs Virtual Function
8. Single vs Multilevel vs Hierarchical vs Multiple vs Hybrid Inheritance

