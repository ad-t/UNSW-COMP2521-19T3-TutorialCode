We know:

n = length
A = array of length n
x doesn't change
the action required is a sum

// pseudocode
sum = 0
for (index = n, index >= 0 , index--) {
  value = A[index] * (x^index)
  sum += value
}

return sum
