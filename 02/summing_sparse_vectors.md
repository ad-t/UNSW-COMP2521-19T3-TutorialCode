V is sparse
L represents V in index-value pairings

// pseudocode
leftVector
rightVector
resultVector = []

n = length(leftVector)
for (index = 0, index < n, index++) {
  if (hasValue(leftVector, index) && hasValue(rightVector, index)) {
    resultVector.push(index, leftVector.valueAt(index) + rightVector.valueAt(index))
  } else if (hasValue(leftVector, index)) {
    resultVector.push(index, leftVector.valueAt(index))
  } else if (hasValue(rightVector, index)) {
    resultVector.push(index, rightVector.valueAt(index))
  } else {
    continue;
  }
}
