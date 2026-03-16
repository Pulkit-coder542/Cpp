# Functions in Python
A function is a reusable block of code that performs a specific task.
**Functions help:**
- Reduce code repetition
- Improve readability  
- Make programs easier to maintain
## Defining a Function
Functions are defined using the `def` keyword.
```python
def greet():
    print("Hello!")
```
## Calling a Function
A function is executed by calling its name followed by parentheses.
```python
greet()
```
## Functions with Parameters
Parameters allow functions to accept input values.
```python
def greet(name):
    print("Hello,", name)
greet("Harsh")
```
## Returning Values
Functions can return values using the `return` statement.
```python
def add(a, b):
    return a + b
result = add(5, 3)
print(result)
```
## Default Parameters
Default parameter values are used if no argument is provided.
```python
def greet(name="Guest"):
    print("Hello,", name)
greet()
greet("Harsh")
```
## Multiple Parameters
Functions can accept multiple parameters.
```python
def calculate(a, b, c):
    return a + b + c

print(calculate(1, 2, 3))  # 6
```
## Scope of Variables
### Local Variable
Defined inside a function and accessible only within that function.
```python
def show():
    x = 10
    print(x)
show()  # 10
```
### Global Variable
Defined outside a function and accessible throughout the program.
```python
x = 5
def display():
    print(x)
display()  # 5
```
## Summary
- Functions allow code reuse
- Parameters pass data into functions
- `return` sends data back from a function
- Scope defines variable accessibility
