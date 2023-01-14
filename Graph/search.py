# def LinearSearch(n , arr, x):
#     for i in range(0,n):
#         if (arr[i]==x):
#             print("element found at ",i+1)

# a=[]
# n=int(input("Enter the size of array "))
# for i in range(0,n):
#     l = int(input("Enter the element",i))
#     a.append(l)
# x = int (input("Enter the element to Search"))

# # arr= [11,22,33,44,55,66,77,88,99,100]
# # n = len(arr)
# # n = int(input("enter tnhe size of array"))
# print("Elements in array is ",n)
# print("Elements are",a)
# LinearSearch(n,a,x)

import math

def LinearSearch(n, arr, x):
    for i in range(0, n):
        if arr[i] == x:
            print("Elemet found at", i+1)

# ************************************************#

def BinarySearch(arr, x, low, high):
    low = 0
    high = n-1
    if high >= low:
        mid = int(low + (high-low)/2)
        if arr[mid] == x:
            print(f"element found at {mid + 1}")
        elif arr[mid] > x:
            BinarySearch(arr, x, low, mid-1)
        elif arr[mid] < x:
            BinarySearch(arr, x, mid+1, high)

# ***************************************************#

def TernarySearch(arr, x, low,  high):
    low = 0
    high = n-1
    if high >= low :
        mid1 = int(low + (high-low)/3)
        mid2 = int(high - (high-low)/3)
        if (arr[mid1] == x) :
            print(f"Element found at {mid1+1}")
        elif (arr[mid2] == x) :
            print(f"Element found at {mid2+1}")
        elif (arr[mid1] > x) : 
            TernarySearch(arr, x, low, mid1-1)
        elif (arr[mid2] < x) :
            TernarySearch(arr, x, mid2+1, high)
        elif (arr[mid1] < x and x < arr[mid2]) :
            TernarySearch(arr, x, mid1+1, mid2-1)

# **************************************************#

# Need correction
def JumpSearch(n, arr, x):
    step = math.sqrt(n)
    prev = 0
    while arr[int(min(step, n)-1)] < x:
        prev = step
        step += math.sqrt(n)
        if prev >= n:
            return -1

    while arr[int(prev)] <x:
        prev+=1
        if prev == min(step,n): 
            return -1 
    
    if arr[int(prev)] == x :
        return prev 

    return -1  

# **************************************************#

def InterpolationSearch (arr,key,low ,high):
    # low = 0 
    # high = n-1 
    if (low <=high and key <= arr[high]and key >= arr[low]):
        formula = low + ((high -low )//(arr[high]-arr[low])*(key -arr[low]))
        if arr[formula] == key :
            return key  
        if arr[formula] > key :
            InterpolationSearch(arr,key,low,formula-1)
        if arr[formula] < key :
            InterpolationSearch(arr,key,formula+1,high)
    return -1   

# ****************************************************#
def IndexSequentialSearch(n ,arr,):
    pass

#***************************************************#
def binarySearch( arr, l, r, x):
    if r >= l:
        mid = l + ( r-l ) // 2
          
        # If the element is present at 
        # the middle itself
        if arr[mid] == x:
            return mid
          
        # If the element is smaller than mid, 
        # then it can only be present in the 
        # left subarray
        if arr[mid] > x:
            return binarySearch(arr, l, 
                                mid - 1, x)
          
        # Else he element can only be
        # present in the right
        return binarySearch(arr, mid + 1, r, x)
          
    # We reach here if the element is not present
    return -1

def exponentialSearch(arr, n, x):
    # IF x is present at first 
    # location itself
    if arr[0] == x:
        return 0
          
    # Find range for binary search 
    # j by repeated doubling
    i = 1
    while i < n and arr[i] <= x:
        i = i * 2
      
        # Call binary search for the found range
    return binarySearch( arr, i // 2,  min(i, n-1), x)

# ****************************************************#



# n = int(input("Enter the size of array : "))
arr = [1,2,3,4,5,6,7]
n =int(len(arr))
# for i in range(0, n):
    # a = input("enter the element : ")
    # arr.append(a)
x = int(input("Enter the element to Search : "))
print(arr)
low = 0 
high = n-1 

# LinearSearch( n , arr, x)
# BinarySearch(arr, x, low, high)
# TernarySearch(arr,x,low,high)
# index = JumpSearch(n, arr, x)
# b = InterpolationSearch(arr,x,low,high)
b = exponentialSearch(arr,n,x)
print(f"Element found at {b} index")




