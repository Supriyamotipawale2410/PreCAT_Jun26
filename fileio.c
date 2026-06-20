#include <stdio.h> 
int main() { 
FILE *fp; 
fp = fopen("data.txt", "a"); 
fprintf(fp, "Hello File Handling!"); 
fclose(fp); 
char str[50]; 
fp = fopen("data.txt", "r"); 
fscanf(fp, "%[^\n]", str); 
printf("File Content: %s", str); 
fclose(fp); 
return 0;
}