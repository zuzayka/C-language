### Project 16.04

Modify the `inventory.c` program of Section 16.3 by adding a `price` member to
the `part` structure. The `insert` function should ask the user for the price of
a new item. The `search` and `print` functions should display the price. Add a
new command that allows the user to change the price of a part.

### Solution

I use `Qt Creator` with `CMake` build system. Accordingly Makefile has name `CMakeLists.txt`.
New command that allows the user to change the price of a part: `'c'`.
Changes in some parts of `inventory.c`:

#### (1)
```C
/*  change_price Prompts the user to enter a part number.
*                Prints an error message if the part doesn't
*                exist; otherwise, prompts the user to enter
*                new part price
*                                                               */

void change_price(void)
{
    int i, number;
    float change;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if (i >= 0)
    {
        printf("Enter new price: ");
        scanf("%f", &change);
        inventory[i].price = change;
    }
    else
        printf("Part not found.\n");
}
```

#### (2)
```C
void print(void)
{
  int i;

  printf("Part Number   Part Name                  "
         "Quantity on Hand   Part Price\n");
  for (i = 0; i < num_parts; i++)
    printf("%7d       %-25s%11d %16.2f\n", inventory[i].number,
           inventory[i].name, inventory[i].on_hand, inventory[i] .price);
}
```

#### (3)
```C
void search(void)
{
  int i, number;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number);
  if (i >= 0) {
    printf("Part name: %s\n", inventory[i].name);
    printf("Quantity on hand: %d\n", inventory[i].on_hand);
    printf("Part price: %.2f", inventory[i] .price);
  } else
    printf("Part not found.\n");
}
```

#### (4)
```C
void insert(void)
{
  int part_number;

  if (num_parts == MAX_PARTS) {
    printf("Database is full; can't add more parts.\n");
    return;
  }

  printf("Enter part number: ");
  scanf("%d", &part_number);
  if (find_part(part_number) >= 0) {
    printf("Part already exists.\n");
    return;
  }

  inventory[num_parts].number = part_number;
  printf("Enter part name: ");
  read_line(inventory[num_parts].name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &inventory[num_parts].on_hand);
  printf("Enter part price: ");
  scanf("%f", &inventory[num_parts] .price);
  num_parts++;
}
```

#### (5)
```C
int main(void)
{
  char code;

  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n')   /* skips to end of line */
      ;
    switch (code) {
      case 'i': insert();
                break;
      case 's': search();
                break;
      case 'u': update();
                break;
      case 'p': print();
                break;
    case 'c': change_price();
                break;
      case 'q': return 0;
      default:  printf("Illegal code\n");
    }
    printf("\n");
  }
}
```

#### (6)
```C
struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
  float price;
} inventory[MAX_PARTS];
```

