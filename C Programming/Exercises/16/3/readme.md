### Exercise 16.03

(a) Show how to declare a tag named `complex` for a structure with two members,
`real` and `imaginary`, of type `double`.

(b) Use the `complex` tag to declare variables named `c1`, `c2` and `c3`.

(c) Write a function named `make_complex` that stores its two arguments (both of
type `double`) in a `complex` structure, then returns the structure.

(d) Write a function named `add_complex` that adds the corresponding members of
its arguments (both `complex` structures), then returns the result (another
`complex` structure).

### Solution

#### (a)

```c
struct complex {
    double real;
    double imaginary;
}
```

#### (b)

```c
	struct complex
	{
		double real;
		double imaginary;
	} c1, c2, c3;
```

#### (c)

```c
struct
{
    double real;
    double imaginary;
} complex;


double make_complex(double complex)
    return complex;
```


#### (d)

```c
typedef struct complex
{
    double real;
    double imaginary;
} Cplx;

Cplx add_complex(Cplx complex1, Cplx complex2)
{
    Cplx complex3;
    complex3 .real = complex1 .real + complex2 .real;
    complex3 .imaginary = complex1 .imaginary + complex2 .imaginary;
    return complex3;
}
```

