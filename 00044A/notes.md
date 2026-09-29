# 44A. Alyona and Numbers of Leaves

**Difficulty:** 900
**Topic:** Implementation
**Link:** https://codeforces.com/problemset/problem/44/A

## Problem Description

Alyona collects fallen leaves from different trees. Each leaf has two properties:
- Tree species
- Color
She does not collect a leaf if she already has another leaf with the same species and color. The task is to find the total number of unique leaves.

## Approach
- Take an integer `n` as input, representing the number of leaves.
- Declare a `set<pair<string, string>>` to store unique combinations of tree species and color.
- For each leaf, take its species and color as input.
- Insert the pair `{species, color}` into the set.
- Since a set automatically removes duplicate elements, only unique pairs are stored.
- Print the size of the set to get the total number of unique leaves.

## Key Concepts

### 1. Set
A `set` stores unique elements. If an element already exists, inserting it again does not change the set.

### 2. Pair
A `pair` stores two values together. Here, each pair represents a leaf's species and color.

### 3. Set of Pairs
`set<pair<string, string>>` stores unique combinations of two strings.
Two leaves are considered identical only when both their species and color match.

### 4. Size of Set
The `size()` function returns the number of unique elements in the set.

## Complexity Analysis
* **Time Complexity:** O(nlogn)
* **Space Complexity:** O(n)
Here,
    `n`=Number of leaves.

## Key Takeaway

Use `set<pair<string, string>>` when we need to count unique combinations of two strings. The set automatically handles duplicate pairs.