class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder sb = new StringBuilder();
        int n = Math.max(word1.length(), word2.length());
        int i=0;
        for(i = 0; i < n; i++)
        {
            if(i < word1.length()) sb.append(word1.charAt(i));
            if(i < word2.length()) sb.append(word2.charAt(i));
        } 

        return sb.toString();
    }
}