Problem B

*Monte Brownie Partition Technology*

Monte Brownie Partition Technology is hiring engineers. They bake a giant piece
of brownie everyday, and partition it into pieces for their customers.

The customers are okay if the brownie is not split evenly, but they demand to
have a single rectangular piece, aligned with the grid. Some cells have already
been assigned, marked with the customers’ initials. Can you assign the rest
of the cells to the customers?

*Input*
There are `T` test cases. Each test case begins with one line with two integers
`R` and `C`. Then, there are `R` more lines of `C` characters each,
representing the brownie. Each character is either an uppercase English
letter (has been assigned to a customer) or `?` (which means that that cell is
blank).

It is guaranteed that this is always possible. For each test case, output one
line containing `Case #x:` , then print the grid with every `?` replaced with
an uppercase English letter to assign this cell to a customer. If there are
multiple possible answers, you may output any of them.

```
1 <= T <= 100  
1 <= R <= 25  
1 <= C <= 25  
```

*Constrains*
Time Limit: `1 sec`
Mem Limit: `512 MB`

*Sample Input*
```
1
4 4
M???
?B??
??P?
???T
```

*Sample Output*
```
Case #1:
MBBT
MBBT
MPPT
MPPT
```
