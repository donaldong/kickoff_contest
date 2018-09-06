Problem E

*Many Beagles Procured Toys*

You want to move your beagles to the other side of the room. It's a long
journey, they would not make it without Many Beagles Procured Toys.  Some of
them lost the toys (long story), but some of them have a reserve! 

The beagles are willing to lend their toys to the others if and only if their
ids are next to them. For example, a beagle with id 3 will lend its reserve toy
only to a beagle with id 2 and 4. Of course if a beagle lost its toy and has a
reserve, it will not lend the reserve toy to anyone.

You want to know what is the minimal number of beagles that cannot make it to
the other side of the room. 

*Input*
The first line of input contains three integers:
- total number of beagles: `2 <= N <= 10`
- the ids of beagles who lost their toys: `2 <= S <= N`
- the ids of beagles who has a reserve toy: `1 <= R <= N`

The second line contains `S` ids ranges from `1` to `N`.
The third line contains `R` ids ranges from `1` to `N`.

*Constrains*
Time Limit: `1 sec`
Mem Limit: `512 MB`

*Sample Input*
```
5 2 1
2 4
3
```

*Sample Output*
```
1
```
