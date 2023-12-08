#!/usr?bin?python3

def palindrome(n):
 return str(n) == str(n)[::-1]

max_p = -float("inf")
for i in range(100, 1000):
 for j in range(100,1000):
  if palindrome(i*j):
   max_p = max(max_p, i*j)

open("102-result", "w")
print(str(max_p))
