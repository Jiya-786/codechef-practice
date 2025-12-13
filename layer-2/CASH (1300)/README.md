## \## Hard Cash

## Chef wants to take Chefina on a date. However, he has to complete one more task before leaving. Since he does not want to be late, he is asking you for help.

## 

## There are 

## N

## N bags with coins in a row (numbered 

## 1

## 1 through 

## N

## N); for each valid 

## i

## i, the 

## i

## i-th bag contains 

## A

## i

## A 

## i

## ​

## &nbsp; coins. Chef should make the number of coins in each bag divisible by a given integer 

## K

## K in the following way:

## 

## choose an integer 

## c

## c between 

## 0

## 0 and 

## N

## N (inclusive)

## take some coins from the first 

## c

## c bags ― formally, for each 

## i

## i (

## 1

## ≤

## i

## ≤

## c

## 1≤i≤c), he may choose any number of coins between 

## 0

## 0 and 

## A

## i

## A 

## i

## ​

## &nbsp; inclusive and take them out of the 

## i

## i-th bag

## move some of these coins to some of the last 

## N

## −

## c

## N−c bags ― formally, for each 

## i

## i (

## c

## \+

## 1

## ≤

## i

## ≤

## N

## c+1≤i≤N), he may place a non-negative number of coins in the 

## i

## i-th bag

## Of course, the number of coins placed in the last 

## N

## −

## c

## N−c bags must not exceed the number of coins taken out from the first 

## c

## c bags, but there may be some coins left over. Let's denote the number of these coins by 

## R

## R. You should find the smallest possible value of 

## R

## R.

## 

## \## Input

## The first line of the input contains a single integer 

## T

## T denoting the number of test cases. The description of 

## T

## T test cases follows.

## The first line of each test case contains two integers 

## N

## N and 

## K

## K.

## The second line contains 

## N

## N space-separated integers 

## A

## 1

## ,

## A

## 2

## ,

## …

## ,

## A

## N

## A 

## 1

## ​

## &nbsp;,A 

## 2

## ​

## &nbsp;,…,A 

## N

## ​

## 

## \## Output

## For each test case, print a single line containing one integer ― the smallest value of 

## R

## R.

