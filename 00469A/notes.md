# 469A. I Wanna Be the Guy

**Rating:** 800<br>
**Topics:** Greedy, Implementation<br>
**Link:** https://codeforces.com/problemset/problem/469/A

## Approach
- Given 
    - Total number of levels ```n```.
    - Levels Little X can pass into a vector ```x```.
    - Levels Little Y can pass into a vector ```y```.
- Create an empty vector concat and combine the elements of x and y using ```push_back()```.
- Iterate through all levels from 1 to n.
- For each level, search for it in the concat vector using a nested loop.
- If the level is found, set ```flag = true``` and move to the next level.
- If the level is not found, print "```Oh, my keyboard!```" and terminate the program.
- If all levels are found, print "```I become the guy.```".
...

## Complexity

- Time: ```O(n × (p + q))```
- Space: ```O(p + q)```
Here, ```n``` is the total number of levels, ```p``` is the number of levels Little X can pass, and ```q``` is the number of levels Little Y can pass.
...

## Key Learning
- Combining two vectors using ```push_back()```.
- Using nested loops to search for elements in a vector.
- Using a boolean flag to check whether an element exists.
- Using ```break``` to exit a loop once the required element is found.
- Using ```return 0``` to terminate a program when a condition is met.
- Checking whether the union of two sets covers all required elements.
