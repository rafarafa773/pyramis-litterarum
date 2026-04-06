#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main() {
    char x[]="insert text";
    int n=strlen(x);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++)
            printf(" "); // Here is what separates the column from the terminal to the text.
        for(int j=i; j>=0; j--)
            putchar(x[j]);
        printf(" %.*s\n",i+1,x); // What will be between the texts.
        usleep(100000);
    }
    return 0;
}
