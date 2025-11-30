# Difference between \n and endl;
## 1) \n

- Just add new line character.
- Not Buffer flush
- Not instant Output show on screen or console.
- Faster (no extra work)
### Flush Buffer Limitations:

- When program end
 `OR`
- When Buffer full store with given capacity.

## 2) endl

- New line + buffer flush
- The data of Buffer (Temp Storage) instant display on screen.
- Slower (flush = extra work)
- The buffer gets empty after flush.