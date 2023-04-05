# HashTable
_____________________________________________________________________________________________________________

Created by Nick Meyer for: CSCE2110 - Implementing a Hash Table
This Hash Table equally distributes values to buckets; handles potential collisions

To compile, use:
$	make all

To clean, use:
$	make clean

To execute:
$	./runMe


_____________________________________________________________________________________________________________
Example output:

Created by Nick Meyer for: CSCE2110 - Implementing a Hash Table

This Hash Table equally distributes values to buckets; handles potential collisions

We add two nodes:


Hash Table Bucket Values:
Bucket 1:
{ 111110 }
Bucket 2:
{ }
Bucket 3:
{ }
Bucket 4:
{ }
Bucket 5:
{ }
Bucket 6:
{ }
Bucket 7:
{ }
Bucket 8:
{ }
Bucket 9:
{ 111111 }
Bucket 10:
{ }
--------------------------------------------------------


Hash Table Contains 2 Nodes total
1:       O
2:
3:
4:
5:
6:
7:
8:
9:       O
10:
--------------------------------------------------------

We add 100 more nodes:

Attempting to add node[0]

Node instantiated, continuing...

Inserted a new row with an ID of: 2

Attempting to add node[1]

Node instantiated, continuing...

Inserted a new row with an ID of: 3

Attempting to add node[2]

Node instantiated, continuing...

Inserted a new row with an ID of: 0

Attempting to add node[3]

Node instantiated, continuing...

Inserted a new row with an ID of: 1

Attempting to add node[4]

Node instantiated, continuing...

Inserted a new row with an ID of: 6

Attempting to add node[5]

Node instantiated, continuing...

Inserted a new row with an ID of: 7

Attempting to add node[6]

Node instantiated, continuing...

Inserted a new row with an ID of: 4

Attempting to add node[7]

Node instantiated, continuing...

Inserted a new row with an ID of: 5

Attempting to add node[8]

Node instantiated, continuing...

Inserted a new row with an ID of: 10

Attempting to add node[9]

Node instantiated, continuing...

Inserted a new row with an ID of: 11

Attempting to add node[10]

Node instantiated, continuing...

Inserted a new row with an ID of: 8

Attempting to add node[11]

Node instantiated, continuing...

Inserted a new row with an ID of: 9

Attempting to add node[12]

Node instantiated, continuing...

Inserted a new row with an ID of: 14

Attempting to add node[13]

Node instantiated, continuing...

Inserted a new row with an ID of: 15

Attempting to add node[14]

Node instantiated, continuing...

Inserted a new row with an ID of: 12

Attempting to add node[15]

Node instantiated, continuing...

Inserted a new row with an ID of: 13

Attempting to add node[16]

Node instantiated, continuing...

Inserted a new row with an ID of: 18

Attempting to add node[17]

Node instantiated, continuing...

Inserted a new row with an ID of: 19

Attempting to add node[18]

Node instantiated, continuing...

Inserted a new row with an ID of: 16

Attempting to add node[19]

Node instantiated, continuing...

Inserted a new row with an ID of: 17

Attempting to add node[20]

Node instantiated, continuing...

Inserted a new row with an ID of: 22

Attempting to add node[21]

Node instantiated, continuing...

Inserted a new row with an ID of: 23

Attempting to add node[22]

Node instantiated, continuing...

Inserted a new row with an ID of: 20

Attempting to add node[23]

Node instantiated, continuing...

Inserted a new row with an ID of: 21

Attempting to add node[24]

Node instantiated, continuing...

Inserted a new row with an ID of: 26

Attempting to add node[25]

Node instantiated, continuing...

Inserted a new row with an ID of: 27

Attempting to add node[26]

Node instantiated, continuing...

Inserted a new row with an ID of: 24

Attempting to add node[27]

Node instantiated, continuing...

Inserted a new row with an ID of: 25

Attempting to add node[28]

Node instantiated, continuing...

Inserted a new row with an ID of: 30

Attempting to add node[29]

Node instantiated, continuing...

Inserted a new row with an ID of: 31

Attempting to add node[30]

Node instantiated, continuing...

Inserted a new row with an ID of: 28

Attempting to add node[31]

Node instantiated, continuing...

Inserted a new row with an ID of: 29

Attempting to add node[32]

Node instantiated, continuing...

Inserted a new row with an ID of: 34

Attempting to add node[33]

Node instantiated, continuing...

Inserted a new row with an ID of: 35

Attempting to add node[34]

Node instantiated, continuing...

Inserted a new row with an ID of: 32

Attempting to add node[35]

Node instantiated, continuing...

Inserted a new row with an ID of: 33

Attempting to add node[36]

Node instantiated, continuing...

Inserted a new row with an ID of: 38

Attempting to add node[37]

Node instantiated, continuing...

Inserted a new row with an ID of: 39

Attempting to add node[38]

Node instantiated, continuing...

Inserted a new row with an ID of: 36

Attempting to add node[39]

Node instantiated, continuing...

Inserted a new row with an ID of: 37

Attempting to add node[40]

Node instantiated, continuing...

Inserted a new row with an ID of: 42

Attempting to add node[41]

Node instantiated, continuing...

Inserted a new row with an ID of: 43

Attempting to add node[42]

Node instantiated, continuing...

Inserted a new row with an ID of: 40

Attempting to add node[43]

Node instantiated, continuing...

Inserted a new row with an ID of: 41

Attempting to add node[44]

Node instantiated, continuing...

Inserted a new row with an ID of: 46

Attempting to add node[45]

Node instantiated, continuing...

Inserted a new row with an ID of: 47

Attempting to add node[46]

Node instantiated, continuing...

Inserted a new row with an ID of: 44

Attempting to add node[47]

Node instantiated, continuing...

Inserted a new row with an ID of: 45

Attempting to add node[48]

Node instantiated, continuing...

Inserted a new row with an ID of: 50

Attempting to add node[49]

Node instantiated, continuing...

Inserted a new row with an ID of: 51


Hash Table Bucket Values:
Bucket 1:
{ 45, 43, 28, 11, 0, 111110 }
Bucket 2:
{ 47, 22, 8 }
Bucket 3:
{ 21, 13, 5, 2 }
Bucket 4:
{ 50, 35, 34, 23, 17, 7 }
Bucket 5:
{ 37, 24, 10 }
Bucket 6:
{ 44, 42, 26, 4, 1 }
Bucket 7:
{ 46, 31, 30, 19 }
Bucket 8:
{ 51, 40, 36, 33, 29, 14, 9 }
Bucket 9:
{ 39, 25, 20, 16, 18, 12, 6, 111111 }
Bucket 10:
{ 41, 38, 32, 27, 15, 3 }
--------------------------------------------------------


Hash Table Contains 52 Nodes total
1:       O O O O O O
2:       O O O
3:       O O O O
4:       O O O O O O
5:       O O O
6:       O O O O O
7:       O O O O
8:       O O O O O O O
9:       O O O O O O O O
10:      O O O O O O
--------------------------------------------------------

We lookup our first node with an ID of: 111111
--------------------------------------------------------
Student found with an ID of: 111111
Major:
Computer Science
GPA:
1.9
--------------------------------------------------------

We lookup our second node with an ID of: 111110:
--------------------------------------------------------
Student found with an ID of: 111110
Major:
Mechanical Science
GPA:
3.99
--------------------------------------------------------

We remove our first node...ID:111111:


Hash Table Bucket Values:
Bucket 1:
{ 45, 43, 28, 11, 0, 111110 }
Bucket 2:
{ 47, 22, 8 }
Bucket 3:
{ 21, 13, 5, 2 }
Bucket 4:
{ 50, 35, 34, 23, 17, 7 }
Bucket 5:
{ 37, 24, 10 }
Bucket 6:
{ 44, 42, 26, 4, 1 }
Bucket 7:
{ 46, 31, 30, 19 }
Bucket 8:
{ 51, 40, 36, 33, 29, 14, 9 }
Bucket 9:
{ 39, 25, 20, 16, 18, 12, 6 }
Bucket 10:
{ 41, 38, 32, 27, 15, 3 }
--------------------------------------------------------


Hash Table Contains 51 Nodes total
1:       O O O O O O
2:       O O O
3:       O O O O
4:       O O O O O O
5:       O O O
6:       O O O O O
7:       O O O O
8:       O O O O O O O
9:       O O O O O O O
10:      O O O O O O
--------------------------------------------------------

We lookup and print the node that we just removed (111111 does not exist):
--------------------------------------------------------
Node not found.
--------------------------------------------------------

We remove half the nodes:


Hash Table Bucket Values:
Bucket 1:
{ 45, 43, 28, 111110 }
Bucket 2:
{ 47 }
Bucket 3:
{ }
Bucket 4:
{ 50, 35, 34 }
Bucket 5:
{ 37, 24 }
Bucket 6:
{ 44, 42 }
Bucket 7:
{ 46, 31, 30 }
Bucket 8:
{ 51, 40, 36, 33, 29 }
Bucket 9:
{ 39, 25 }
Bucket 10:
{ 41, 38, 32, 27 }
--------------------------------------------------------


Hash Table Contains 26 Nodes total
1:       O O O O
2:       O
3:
4:       O O O
5:       O O
6:       O O
7:       O O O
8:       O O O O O
9:       O O
10:      O O O O
--------------------------------------------------------
