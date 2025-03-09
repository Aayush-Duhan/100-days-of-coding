string encryption(string s) {
    string cleaned;
    for (char ch : s) {
        if (ch != ' ')
            cleaned.push_back(ch);
    }
    int L = cleaned.size();
    int r = floor(sqrt(L));
    int c = ceil(sqrt(L));
    if (r * c < L)
        r++;
    string result;
    for (int col = 0; col < c; col++) {
        for (int row = 0; row < r; row++) {
            int index = row * c + col;
            if (index < L)
                result.push_back(cleaned[index]);
        }
        if (col < c - 1)
            result.push_back(' ');
    }
    return result;
}