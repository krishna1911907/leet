class Solution {
    public int lengthOfLastWord(String s) {
        int n =s.length(),len= 0;
        boolean l= false;
        
        for (int i=n-1;i>=0;i--) {
            if (s.charAt(i)!=' ') {
                len++;
                l=true;
            } else if(l)
                break;
        }

        return len;
    }
}