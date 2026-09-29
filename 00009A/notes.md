# 9A. Yakko, Wakko and Dice

**Difficulty:** 800  
**Topics:** Math, Probabilities  
**Link:** https://codeforces.com/problemset/problem/9/A  

## Approach

We can solve this problem using basic mathematics and GCD.
- Read two integers:
  - `y` = Yakko's dice result
  - `w` = Wakko's dice result
- Find the maximum value between `y` and `w` using `max(y, w)`.
- Calculate the number of possible outcomes in which Dot can win:
  ```cpp
  m=6-max(y, w)+1;
  ```
  Thus, it becomes:
  ```cpp
  m=7-max(y, w);
  ```
- Since the dice has 6 faces, the total number of possible outcomes is 6.
- Calculate the GCD of `m` and `6`:
  ```cpp
  g=gcd(m, 6);
  ```
- Divide both `m` and `6` by their GCD to get the irreducible fraction.
- Print the simplified probability in the required `A/B` format.

## Complexity

* Time: O(log 6) = O(1)
* Space: O(1)

## Key Learning

The probability of Dot winning depends on the maximum result of Yakko and Wakko. Since Yakko and Wakko allow Dot to win in case of a tie, Dot wins if her dice result is greater than or equal to the maximum of their results. The number of winning outcomes is `7-max(y, w)`
To express the probability as an irreducible fraction, we divide the numerator and denominator by their GCD.
Using `gcd()` helps simplify fractions, such as:
* `3/6` → `1/2`
* `2/6` → `1/3`
* `4/6` → `2/3`
