# 832A. Sasha and Sticks

**Difficulty:** 800  
**Topics:**  Games, Math  
**Link:** https://codeforces.com/problemset/problem/832/A

## Approach

- In each turn, a player takes exactly `k` sticks.
- Sasha plays first, then Tanya, and they continue alternately.
- The total number of complete turns possible is: `turns = n / k`
    - If `turns` is **odd**, the last valid turn belongs to Sasha, so the answer is `YES`.
    - If `turns` is **even**, the last valid turn belongs to Tanya, so the answer is `NO`.

Any remaining sticks (`n % k`) do not matter because a player must take exactly `k` sticks in a turn.

### Example

For `n = 10` and `k = 4`:
- Sasha takes 4 → 6 sticks remain
- Tanya takes 4 → 2 sticks remain
- Sasha cannot take 4 sticks
So Sasha loses.
`turns = 10 / 4 = 2`, which is even.
Therefore, the answer is `NO`.

## Complexity

- **Time:** O(1)
- **Space:** O(1)

## Key Learning

- Integer division `n / k` gives the number of complete turns.
- Odd number of turns means Sasha makes the last valid move.
- Even number of turns means Tanya makes the last valid move.
- The remainder `n % k` does not affect the winner.