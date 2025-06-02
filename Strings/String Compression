#Leetcode ques 443

int compress(vector<char>& chars) {
    int index = 0; 
    int i = 0;     

    while (i < chars.size()) {
        char currentChar = chars[i];
        int count = 0;

        while (i < chars.size() && chars[i] == currentChar) {
            i++;
            count++;
        }

        chars[index++] = currentChar;

        if (count > 1) {
            string countStr = to_string(count);
            for (char digit : countStr) {
                chars[index++] = digit;
            }
        }
    }

    return index; 
}
