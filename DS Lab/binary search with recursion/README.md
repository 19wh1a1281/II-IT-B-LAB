##AIM OF THE EXPERIMENT:
To perform binary search with recursion.
#DESCRIPTION
Binary search algorithm applies to a sorted array for searching an element.
in case the target element is less than the middle element of the array then the second half of the array is discarded and search continues by dividing the first half.
##STEP BY STEP PROCEDURE:
The given sorted array = {4,7,9,11,15,16,21,31,67,98}
ouput 1 (key element = 16):
step 1: first index = 0,last index = 9,mid index=4:a[4]=15 and a[4]<16
step 2: first index = 5,last index = 9,mid index=7:a[7]=31 and a[7]>16
step 3: first index = 5,last index = 6,mid index=5:a[5]=16
output 2 (key element = 7):
step 1: first index = 0,last index = 9,mid index=4:a[4]=15 and a[4] >7
step 2: first index = 0,last index = 3,mid index=1:a[1]=7
output 3 (key element = 67):
step 1:first index = 0,last index = 9,mid index =4:a[4]=15 and a[4] <67
step 2:first index = 5,last index = 9,mid index=7:a[7]=31 and a[7]<67
step 3:first index = 8,last index = 9,mid index=8:a[8]=67
###OUTPUT OBTAINED
![output](binary search with recursive function.cpp)
