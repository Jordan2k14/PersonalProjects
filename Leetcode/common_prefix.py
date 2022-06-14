
class Solution:
   def commonprefix(self, words):
      words.sort()
      prefix = []
      flag = 0
      for i in range(len(words[0])):
         prefix.append(words[0][i])
         for j in words:
            if j[i] != prefix[-1]:
               prefix.pop()
               flag = 1
               break
         if flag == 1:
            break
         return ''.join(prefix)
result = Solution()
words = []
words = [item for item in input("Enter the list").split]
print(result.commonprefix(words))