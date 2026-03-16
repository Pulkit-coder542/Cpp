# Python Data Types
Data types define the type of value a variable can store in Python. Python is dynamically typed, meaning you do not need to declare the data type of a variable explicitly.

## Built-in Data Types
### Integer (int)
Used to store whole numbers.
```python
a = 10
b = -5
```

### Floating Point (float)
Used to store decimal numbers.
```python
pi = 3.14
```

### String (str)
Used to store text.
```python
name = "Harsh"
```

### Boolean (bool)
Stores either True or False.
```python
is_active = True
```

## Collection Data Types
### List (list)
An ordered and mutable collection of items.
```python
scores = [80, 90, 85]
```

### Tuple (tuple)
An ordered and immutable collection.
```python
coordinates = (10, 20)
```
### Dictionary (dict)
Stores data in key-value pairs.
```python
person = {
    "name": "Harsh",
    "age": 20
}
```
### Set (set)
An unordered collection of unique elements.
```python
unique_numbers = {1, 2, 3}
```
## Checking Data Types
You can check the data type of a variable using the type() function.
```python
x = 10
print(type(x))
```
## Summary
- Python supports multiple built-in data types
- Variables can change type during execution
- Use type() to check a variable's data type
