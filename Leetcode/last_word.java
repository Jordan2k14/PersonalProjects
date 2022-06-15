class Solution {
    public int lengthOfLastWord(String s) {
      
        if (s.length()<=0) return 0;
        
        
        String[] words = s.split("\\s+");
        
       
        if (words.length<=1) return s.trim().length();
        
       
        String lastWord = words[words.length-1];
        
        
        return lastWord.length();
        
    }
}