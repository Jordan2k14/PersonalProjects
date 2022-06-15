def twoSum(num_arr, pair_sum):

  for i in range(len(num_arr) - 1):

    for j in range(i + 1, len(num_arr)):

      if num_arr[i] + num_arr[j] == target:
        print("Pair with sum", target,"is: (", num_arr[i],",",num_arr[j],")")
    else:
        print("Sorry nothing adds to the target number")
        break

    
num_arr = [4, 5, 1, 8] # This is hardcoded you can change if you want
print("Enter the target number : ")
target = int(input())

twoSum(num_arr, target) 