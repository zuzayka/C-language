### Exercise 16.10

The following structures are designed to store information about objects on a
graphics screen:

```c
struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };
```

A `point` structure stores the *x* and *y* coordinates of a point on the screen.
A `rectangle` structure stores the coordinates of the upper left and lower right
corners of a rectangle. Write functions that perform the following operations on
a `rectangle` structure `r` passed as an argument:

(a) Compute the area of `r`.  
(b) Compute the center of `r`, returning it as a `point` value. If either the
*x* or *y* coordinate of the center isn't an integer, store its truncated value
in the `point` structure.  
(c) Move `r` by `x` units in the *x* direction and `y` units in the *y*
direction, returning the modified version of `r` (`x` and `y` are additional
arguments to the function).  
(d) Determine whether a point `p` lies within `r`, returning `true` or `false`
(`p` is an addition argument of type `struct point`).

### Solution

#### (a)

```c
int area_rectangle(struct rectangle r) {
    return (r.lower_right.x - r.upper_left.x) 
           * (r.lower_right.y - r.upper_left.y);
}
```

#### (b)

```c
#include <stdio.h>

struct point {int x, y;} upper_left, lower_right, center_point;
struct point rectangle_center(struct point c) {
    return (struct point) {(lower_right.x + upper_left.x) / 2,
                    (lower_right.y + upper_left.y) / 2};
}

int main()
{

    printf("Enter lower right point x y: ");
    scanf("%d %d", &lower_right .x,  &lower_right .y);
    printf("Enter upper left point x y: ");
    scanf("%d %d", &upper_left .x,  &upper_left .y);


    //printf("Rectangle square: %d\n", square(r));

    center_point = rectangle_center(center_point);

    printf("%d %d\n", center_point .x, center_point .y);
    return 0;
}
```
