bool rotateString(char* s, char* g) {
    int ls= strlen(s);
    int lg=strlen(g);
    if(ls!=lg)
    return false;
    else
    {
        char temp[2*ls+1];
        strcpy(temp,s);
        strcat(temp,s);
        return strstr(temp,g)?true:false;
    }
    
}