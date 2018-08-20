#include<stdio.h>
int main(){
	
	FILE *fp;
	char ch;
	int space = 0, newline = 0;
	fp = fopen("test_2.txt","w");
	fprintf(fp,"Test for fprintf\n");
	fputs("This is a test for fputs",fp);
	fclose(fp);
	
	fp = fopen("test_2.txt","r");
	ch = fgetc(fp);
	while(ch!=EOF){
		
		if(ch == ' ')
			space++;
		if(ch == '\n')
			newline++;	
		ch++;	
	}
	fclose(fp);
	printf("Spaces = %d and newlines = %d",space,newline);
	return 0;
}
