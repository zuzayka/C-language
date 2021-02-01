### Exercise 16.07

Assume that the `fraction` structure contains two members: `numerator` and
`denominator` (both of type `int`). Write functions that perform the following
operations on fractions:

(a) Reduce the fraction `f` to lowest terms. *Hint:* To reduce a fraction to
lowest terms, first compute the greates common divison (GCD) of the numerator
and denominator. Then devide both the numerator and denominator by the GCD.  
(b) Add the fractions `f1` and `f2`.  
(c) Subtract the fraction `f2` from the fraction `f1`.  
(d) Multiply the fractions `f1` and `f2`.  
(e) Divide the fraction `f1` by the fraction `f2`.

The fractions `f`, `f1` and `f2` will be arguments of type `struct fraction`:
each function will return a value of type `struct fraction`. The fractions
returned by the functions in parts (b)-(e) should be reduced to lowest terms.
*Hint:* You may use the function from part (a) to help write the functions in
parts (b)-(e).

### Solution

#### (a)

```c
struct fraction reduce(int num, int den)
{
    int  i;
    if(num < den)
        i = num;
    else
        i = den;
    while(i > 0)
    {
        if((num % i == 0) && (den % i == 0))
        {
            num /=  i;
            den /=  i;
            i = 0;
        }
        else
            i--;
    }
    f .numerator = num;
    f .denominator = den;
    return f;
}
```

#### (b)

```c
struct fraction fr_adding(int num1, int den1, int num2, int den2)
{
    int num, den;
    num = num1 * den2 + num2 * den1;
    den = den1 * den2;
    reduce(num, den);

    return f;
}
```

#### (c)

```c
struct fraction fr_subtracting(int num1, int den1, int num2, int den2)
{
    int num, den;
    num = num1 * den2 - num2 * den1;
    den = den1 * den2;
    reduce(num, den);

    return f;
}
```

#### (d)

```c
struct fraction fr_multiplying(int num1, int den1, int num2, int den2)
{
    int num, den;
    num = num1 *  num2;
    den = den1 * den2;
    reduce(num, den);

    return f;
}
```

#### (e)

```c
struct fraction fr_dividing(int num1, int den1, int num2, int den2)
{
    int num, den;
    num = num1 * den2;
    den = den1 * num2;
    reduce(num, den);

    return f;
}
```
