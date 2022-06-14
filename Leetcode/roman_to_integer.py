
class Solution:
    def romanToInt(self, S: str) -> int:
        roman_numbers = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        x= 0
        for i in range(len(S)-1,-1,-1):
            num = roman_numbers[S[i]]
            if 3*num < x: 
                x = x-num
            else: 
                x = x+num
        return x