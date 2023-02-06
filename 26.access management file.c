#include<stdio.h>
int main(){
 FILE *fp;
 char ch;
 fp=fopen("test.txt","r");
 
 if(fp==NULL){
	printf("File error");
	exit(0);
 }
 ch = fgetc(fp);
 while(ch != EOF){
	printf("%c",ch);  
	ch=fgetc(fp);
 }
 fclose(fp);
 return 0;
}
