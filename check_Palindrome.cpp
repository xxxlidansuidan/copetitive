bool isPalindrome(int product) {
    return ((product / 100000) % 10 == product % 10
         && (product / 10000) % 10 == (product / 10) % 10
         && (product / 1000) % 10 == (product / 100) % 10);
}
