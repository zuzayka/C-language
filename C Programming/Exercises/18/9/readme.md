### Exercise 18.09

Use a series of type definitions to simplify each of the declarations in
Exercise 8. (d) `void (*x(int, void (*y)(int)))(int);`


### Solution

#### (d)
```c
typedef void Fn(int);
typedef Fn *Fn_ptr;
typedef  void Fn1(int);
typedef Fn1 (*Fn1_ptr);
Fn_ptr x(int, Fn1_ptr y);
``` 
