# 0x1D. C - Binary trees

This DSA project is done to gain insightful knowledge about Binary Trees:
* What is a Binary Tree?
	- Binary Trees are rooted trees(having a node as root/head node), they are ordered and each node must connect
at most two child nodes or subtrees.
* The types of binary trees are:
	- Full Binary Tree - a binary tree structure where each node must either 0(leaf node) or 2(perfect subtree).
	- Perfect Trees - in this case, each node in all levels (except the last level) has 2 child nodes. It is also a Full binary tree
	- ...

## Properties of Binary Trees
* No. of nodes, n:
  - Max no. of nodes (In a perfect node): `n = 2^L - 1` where `L` is the number of levels in the tree
    - No. of levels, L = height + 1: `L = h + 1`.
    - therefore we can substitute the value of `L` into the equation:
	`n = 2^(h + 1) - 1`.

  - Min no. of nodes: `n = 2h + 1`

* No. of leaf nodes:
  - No. of leaf node, `l`
```
	l = ((2^L - 1) + 1)/2
	l = (n + 1)/2
```

## Examples of Binary Trees
### Simple Binary Tree
```
	.-------(098)-------.
   .--(402)--.	       .--(060)--.
 (006)     (056)     (100)     (098)

```

### Binary Search Tree
```
	.-------(098)-------.
   .--(086)--.         .--(150)--.
 (043)     (093)     (110)     (200)

```
