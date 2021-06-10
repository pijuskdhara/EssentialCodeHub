//find frequency of a character in string
void main(){
	char str[50];
	char ch;
	
	printf("Enter string: ");
	scanf("%s",&str);
	
	printf("Enter character: ");
	int cch = getchar( );
	
	findFrequency(str,ch);
	
}

void findFrequency(char str[],char ch){
	int n = strlen(str);//length of string
	int i;
	int count = 0;
	for(i=0;i<n;i++){
		if(str[i]==ch){
			count = count+1;
		}
	}
	
	printf("Frequency of character %c in string %s is %d",ch,str,count);
	
}
