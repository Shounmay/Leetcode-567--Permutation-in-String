<h1 align='center'><u><b> Permutation in String</b> </u></h1>

<h2> <u>Problem Link:</u> https://leetcode.com/problems/permutation-in-string/ </h2>

<h1 ><u> Idea Used: </u></h1>

## In this we have to store frequency count of characters of "s1" string in a 1D array by keys of (0-25) as characters. Same we have to do to store for "s2" substring. Now while moving to next window we just delete the first character frequency count of previous window by 1 and increase the frequency count of last character of current window by 1. Here hashing library can take extra space, so we can implement our hashing arrays like this to reduce space complexity.

<h1 ><u> Time and Space Analysis </u></h1>

## Time-Complexity: O(N)

## Space-Compexity: O(1)
