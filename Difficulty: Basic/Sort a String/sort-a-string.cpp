string sort(string s) {
    int freq[26] = {0};
    
    for (char ch : s) {
        freq[ch - 'a']++;
    }
    
    string result = "";
    for (int i = 0; i < 26; i++) {
        while (freq[i] > 0) {
            result += (char)(i + 'a');
            freq[i]--;
        }
    }
    return result;
}