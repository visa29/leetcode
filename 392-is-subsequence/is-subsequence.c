bool isSubsequence(char* s, char* t) {
    int i=0,j=0;
    for(i=0;t[i]!='\0';i++)
    {
        if(s[j]==t[i])++j;
    }
    if(s[j]=='\0')return true;
    return false;
}