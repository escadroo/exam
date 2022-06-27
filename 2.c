#include <stdio.h>

int main(){
    char filename[100]={'\0'};
    char c;
    scanf("%s", filename);
    FILE *file = fopen(filename, "r");
     if (file != NULL){
		do {
			while (((c = fgetc(file)) != '\n') && (c!=EOF)) 
				   putchar(c); 
			putchar('\n');
			while (((c = fgetc(file)) != '\n') && (c!=EOF));
		} while (c != EOF);
		fclose(file);
	} else return -1;
	getchar();
	return 0;
}
