### Exercise 16.09

Write the following functions. (The `color` structure is defined in Exercise 8.)

(d) `struct color brighter(struct color c);`  
Returns a `color` structure that represents a brighter version of the color `c`.
The structure is identical to `c`, except that each member has been divided by
0.7 (with the result truncated to an integer). However, there are three special
cases: (1) If all members of `c` are zero, the function returns a color whose
members all have the value 3. (2) If any member of `c` is greater than 0 but
less than 3, it is repaced by 3 before the division by 0.7. (3) If dividing by
0.7 causes a member to exceed 255, it is reduced to 255.

(e) `struct color darker(struct color c);`  
Returns a `color` structure that represents a darker version of the color `c`.
The structure is identical to `c`, except that each member has been multiplies
by 0.7 (with the result truncated to an integer).

### Solution
#### (d) (e)
I don't know how about `C99`, but in `C11` functions such type as
`struct color brighter(struct color c)` or `struct color darker(struct color c)` not run.
