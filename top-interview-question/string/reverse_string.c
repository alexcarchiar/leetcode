void swap(char* s, int a, int b);

void reverseString(char* s, int sSize){
    int left = 0;
    int right = sSize-1;
    while(left<right){
        swap(s, left, right);
        left++;
        right--;
    }
    
}

void swap(char* s, int a, int b){
    char tmp = s[a];
    s[a] = s[b];
    s[b] = tmp;
}
