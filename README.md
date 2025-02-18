# Binary Search Algorithm  

## Overview  
This program compiles a recursive binary search in C. 
It also prints each step of the search process and determines whether a given value (UGV)* exists in a sorted array.  
###### UGV - User Given Value

## Input
You have to manually change the input from the code as there is no Input mechanism impletmented

## How It Works
1. **Finds the midpoint** of the array.  
2. **Compares the midpoint** with `UGV`:  
   - If equal, returns `1`.  
   - If smaller, searches the right half.  
   - If larger, searches the left half.  
3. **Repeats the process recursively** until `UGV` is found or the array is empty.  

## Main Functions  

### `PrintArray`  
Prints the array elements to visualize the search process.  

### `IsPresent`  
Performs the binary search:  
- Calculates the midpoint.  
- Determines if the search should continue left or right.  
- Recursively calls itself with the samller/cut array.  


## Compilation & Execution  
```sh
gcc binary_search.c -o binary_search  
./binary_search  
```

## Example Output  
```sh
1   3   5   6   9   10  
Original Size: 6, New Size: 3, Mid Value: 5  
Value on the right.  
New Array: 6   9   10  
...
Match found.  
1  
```

-------------
## License
This project is open-source and available under the [MIT License](LICENSE).
