## `break` Keyword (C++)

### Concept
- `break` **immediately terminates the nearest loop or switch**.
- It does **not** stop `if` blocks, functions, or the entire program.

### Where it works
- Loops: `for`, `while`, `do-while`
- `switch` statement

### Rules
- `break` exits **only the closest enclosing loop/switch**.
- If inside nested loops, it breaks **only the inner loop**.
- Code after `break` inside the same loop **does not execute**.

### Important Notes
- `if` is **not** a loop; `break` inside `if` still breaks the loop.
- To exit multiple nested loops, use flags or refactor logic.

### Example
```cpp
while (i <= 5) {
    if (i == 4) {
        break; // exits the while loop
    }
    cout << i << endl;
}
