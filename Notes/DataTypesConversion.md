# Data Types Conversion

## 1) Automatic Conversion (Implicit)

C++ automatically smaller → bigger type can be convert.

### ✔ Rules:

- int / int → int
- int / float → float
- float / int → float
- int / double → double
- float / double → double
- double / float → double

Note: Bigger type always wins.

## 2) Important Rule

Variable data type can't change result.
Example: ``float x = 18 / 100;   // result int=0 → in float 0.0``

## 3) Decimal number = default double

- 5.0  → double
- 3.14 → double
- 69.08 → double

## 4) Before Store result is in bigger type

float x = 5.0 + 3;

- First result = double
- Then float convert in float.

## ⭐ 5) Explicit Casting (Manual Conversion)

Coder can force:<br>
`(float)18/100` <br>
`18.0/100` <br>
`static_cast<float>(18)/100`


## 🟢 Super Short Summary

- Result type = bigger operand type
- Decimal numbers = double
- Variable type does NOT decide result type

