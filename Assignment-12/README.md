# C++ Type Casting and Casting Operators

## Aim
To write a C++ program to demonstrate implicit type casting, explicit type casting, and the use of the `static_cast` operator.

## Description
This program demonstrates different types of type casting in C++. Type casting is used to convert a value from one data type to another. The program performs implicit conversion, explicit conversion, and conversion using the `static_cast` operator.

## Concepts Used
- **iostream:** Used for input and output operations.
- **Implicit Type Casting:** Automatically converts one data type into another.
- **Explicit Type Casting:** Manually converts one data type into another using a cast.
- **static_cast:** A C++ casting operator used for explicit type conversion.
- **int:** Used to store integer values.
- **double:** Used to store decimal values.

## Algorithm
1. Start the program.
2. Declare an integer variable and convert it into a double using implicit casting.
3. Display the integer and double values.
4. Declare a double variable and convert it into an integer using explicit casting.
5. Display the original and converted values.
6. Declare an integer variable and convert it into a double using `static_cast<double>()`.
7. Display the integer and converted double values.
8. End the program.

## Sample Output

```text
Implicit Type Casting:
Integer value = 10
Double value = 10

Explicit Type Casting:
Double value = 25.75
Integer value = 25

Using static_cast:
Integer value = 100
Double value = 100
```

## Conclusion
This program demonstrates different type casting techniques in C++. It shows how implicit casting automatically converts data types, while explicit casting and `static_cast` allow manual type conversion.
