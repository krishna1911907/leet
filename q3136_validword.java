class Solution {
    public boolean isValid(String word) {
        int n=word.length();
        if(n<3){
        return false;
        }
        boolean hasVowel = false;
        boolean hasConsonant = false;
        for(char c: word.toCharArray()){
            if(Character.isLetter(c)){
                if("aeiouAEIOU".indexOf(c)>=0){
                    hasVowel=true;
                }else{
                    hasConsonant=true;
                }
            }else if(!Character.isDigit(c)){
                return false;
            }
            
        }
        return hasVowel && hasConsonant;
    }
}