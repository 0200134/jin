#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int charlen(){
	char str[120];
	int i;
	int count=0;
	int nonascii=0;
	int number=0;
	int specialchar=0;
	printf("Enter any string:\n");
	gets(str);
	for (i=0; str[i]!='\0'; i++){
		if (str[i]!=' '){
		count++;
			if (!(str[i]<='Z' && str[i]>='A'|| str[i]<='z'&& str[i]>='a'|| (str[i]<='9'&&str[i]>='0')))
			nonascii++;
			else if (str[i]<='9'&& str[i]>='0'){
				number++;}
			else {
				specialchar++;
			}
			
	}	
	
	}
	
printf("countascii = %d\n",count );
	printf("count nonascii = %d\n", nonascii);
	printf("count number = %d\n", number);


}
int main()
{
	charlen();
	
}
