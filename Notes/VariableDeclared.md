# Variable Scope in C++

## Concept
- A variable is accessible **only inside the block `{ }`** where it is declared.
- Outside that block, the variable **does not exist** for the compiler.

## Blocks That Create Scope
- `if / else`
- `for`, `while`, `do-while`
- `switch`
- Function bodies

## Rules
- Variables declared inside a block **cannot be used outside** that block.
- To use a variable outside, **declare it before the block**.

## Examples

### Block Scope (Invalid)
```cpp
if (x > 0) {
    int p = 10;
}
cout << p;   // Error: p not declared

// Correct Usage

int p;
if (x > 0) {
    p = 10;
}
cout << p;   // OK
