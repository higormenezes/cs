# Asymptotic Notation

## Big-O notation

### $O(1)$

Get the value in an array at a specific position.

```c
arr[0]
```

### $O(log{_2}n)$

Binary search. Every interaction cut the array in half

```c
int start, middle, end;
start = 0;
end = arr.length - 1;

while (start <= end) {
    middle = (start + end) / 2;
    if (value == arr[middle]) {
        return middle;
    } else if (value < arr[middle]) {
        end = middle - 1;
    } else {
        start = mid + 1;
    }
}

return -1
```

### $O(n)$

Linear search

```c
for (int i = 0; i < n; i++) {
    if (arr[i] === value) {
        return i
    }
}
return -1
```

### $O(nlog{_2}n)$

Merge sort.

Implementation in progress :)

### $O(n^2)$

Iterate a matrix of order `n`.

```c
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        matrix[i][j]
    }
}
```

### $O(2^n)$

Usually recursions.

```c
int Fibonacci(int idx) {
    if (idx <= 1) {
        return idx;
    }
    return Fibonacci(idx - 2) + Fibonacci(idx - 1);
}
```

### $O(n!)$

I think some graph problem might have this complexity.
