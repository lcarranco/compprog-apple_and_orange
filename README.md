# HackerRank - Apple and Orange

## Table of Contents
<!-- TOC -->

- [HackerRank - Apple and Orange](#hackerrank---apple-and-orange)
    - [Table of Contents](#table-of-contents)
    - [Description](#description)
    - [Input Format](#input-format)
    - [Constraints](#constraints)
    - [Output Format](#output-format)
    - [Samples](#samples)
        - [Sample Input 0](#sample-input-0)
        - [Sample Output 0](#sample-output-0)
        - [Explanation 0](#explanation-0)
    - [Solving](#solving)
        - [Algorithm](#algorithm)

<!-- /TOC -->

## Description
* A plot of land has a house, an apple tree, and an orange tree. Each tree yields and abundance of fruit.
	* House is located at points _s_ and _t_
	* Apple tree is located at point _a_
	* Orange tree is located at point _b_
* The apple tree is to the left of the house and the orange tree is to the right of the house
* When a fruit falls from its tree, it lands at a certain distance from its tree
	* _m_ - Number of apples that fell from tree
	* _n_ - Number of oranges that fell from tree
	* A negative distance is to the left of the tree
	* A positive distance is to the right of the tree

## Input Format
* The first line contains 2 space-separated integers denoting the respective values of _s_ and _t_
* The second line contains 2 space-separated integers denoting the respective values of _a_ and _b_
* The third line contains 2 space-separated integers denoting the respective values of _m_ and _n_
* The fourth line contains _m_ space-separated integers denoting the respective distances that each apple falls from point _a_
	* a<sub>1</sub> a<sub>2</sub> ... a<sub>m</sub><br/>
* The fifth line contains _n_ space-separated integers denoting the respective distances that each orange falls from point _b_
	* b<sub>1</sub> b<sub>2</sub> ... b<sub>n</sub>

s t<br/>
a b<br/>
m n<br/>
a<sub>1</sub> a<sub>2</sub> ... a<sub>m</sub><br/>
b<sub>1</sub> b<sub>2</sub> ... b<sub>n</sub>


## Constraints
* **1 &le; _s, t, a, b, m, n_ &le; 10<sup>5</sup>**
* **-10<sup>5</sup> &le; _d_ &le; 10<sup>5</sup>**
* **_a_ < _s_ < _t_ < _b_**

## Output Format
Print two integers on different lines:
1. The first integer: the number of apples that fall on Sam's house
2. The second integer: the number of oranges that fall on Sam's house

## Samples

### Sample Input 0
```
7 11
5 15
3 2
-2 2 1
5 -6
```

### Sample Output 0
```
1
1
```

### Explanation 0
* First apple falls at position 5 - 2 = **3**
* Second apple falls at position 5 + 2 = **7**
* Third apple falls at position 5 + 1 = **6**
* First orange falls at position 15 + 5 = **20**
* Second orange falls at position 15 - 6 = **9**
* Only the second apple falls within the region between 7 and 11, print 1 as first line of output
* Only the second orange falls within the region between 7 and 11, print 1 as first line of output

## Solving


### Algorithm
1. Read from input and write to respective variables
2. Compute summation of a<sub>m</sub> and a
3. Test if summation is in the inclusive range of s and t
	* If so, increase counter by one
4. Compute summation of b<sub>m</sub> and b
5. Test if summation is in the inclusive range of s and t
	* If so, increase counter by one
6. Print each counter on new line
