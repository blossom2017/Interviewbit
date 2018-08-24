/**
 * @input A : String termination by '\0'
 * 
 * @Output Integer
 */
int isPalindrome(char* A) {
    char * strnew=(char *)malloc(strlen(A)*sizeof(char));
    int j=0;
    int i=0;
    for ( i=0;i<strlen(A);i++)
    {
        if((toupper(A[i])<=90&&toupper(A[i])>=65)||(toupper(A[i])<=57&&toupper(A[i])>=48)){strnew[j]=A[i];j++;}
    }
    strnew[j]='\0';
   // printf("%s",strnew);
    int l=strlen(strnew);
    for( i=0;i<l;i++)
    {
        if(toupper(strnew[i])!=toupper(strnew[l-i-1]))return 0;
    }
    return 1;
}
