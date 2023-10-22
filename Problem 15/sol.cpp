string caesarCipher(string s, int k) {
    for (char& c : s) {
        if (isalpha(c)) {
            char base = (islower(c)) ? 'a' : 'A';
            c = base + (c - base + k) % 26;
        }
    }
    return s;
}