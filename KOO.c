#include<stdio.h>
int main()
{
	FILE*file=fopen("data.txt","w");
	if (file==NULL)
{
	printf("error opening file!\n");
	return 1;
}	
    char name[20];
    int age;
    while(fscanf(file,"%s%d",name,&age)!=EOF)
{
    printf("name:%s,age:%d\n",name,age);
} 
    return 0;
}
