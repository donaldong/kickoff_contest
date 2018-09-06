Problem A

*Magic Brown Pepsi Truck*

This is an emergency! People in SodaLand run out of Pepsi! Fortunately, a Magic
Brown Pepsi Truck is heading to the SodaLand. This is an extremely important
mission, and now it’s assigned to you. As the driver of the Pepsi Truck, you
will need to follow the instructions and drop off the Pepsi at certain
locations, and mark these locations on your map.

There are `N` rows and `M` columns in the map. Originally the map is filled with
`.`, which indicates you have not dropped off any Pepsi at that location.
Then you’re given some instructions. The possible instructions are:
- `L k`: move left `k` steps
- `R k`: move right `k` steps
- `U k`: move up `k` steps
- `D k`: move down `k` steps
- `X`: drop off Pepsi at the current position and mark the map

You will follow the instructions and start at the top-left corner of the map.
You may trust your commander who gives the instructions: you won’t go outside
of the map following the instructions.

*Input*
```
0 < N, M <= 100
```
There are most 100 instructions.

*Constrains*
Time Limit: `1 sec`
Mem Limit: `512 MB`

*Sample Input*
```
5 5  
R 2  
D 3  
X  
L 2  
X  
U 1  
X  
```

*Sample Output*
```
.....  
.....  
X....  
X.X..  
.....  
```
