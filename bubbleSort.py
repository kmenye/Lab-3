def bubbleSort(my_array): 
    n = len(my_array) 
  
    # array traversal
    for i in range(n-1): 

        for j in range(0, n-i-1): 
  
            # traverse the array from 0 to n-i-1 and swap if an element is greater than element next to it

            if my_array[j] > my_array[j+1] : 
                my_array[j], my_array[j+1] = my_array[j+1], my_array[j] 
  
# Demo
my_array = [32, 17, 13, 8, 11, 6, 42] 
  
bubbleSort(my_array) 
  
print ("Sorted array is:") 
for i in range(len(my_array)): 
    print ("%d" %my_array[i]),  