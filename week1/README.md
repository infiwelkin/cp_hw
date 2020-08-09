# N-th Tribonacci Number
---
[leetcode link](https://leetcode.com/problems/n-th-tribonacci-number)

## Thought
First thought was just using the recursion to solve this problem, but found out that it would occur TLE after n > 31.
After a little bit thinking, realize that it would causing too much redundant recursion when calculating smaller Tribonacci sequence.
