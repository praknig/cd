#include<stdio.h>
#include<io.h>
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		FILE *fp =NULL;
		char buff[255];
		fp = fopen(argv[1],"r");
		if (fp != NULL)
		{
			fscanf(fp, "%s", buff);
			fclose(fp);
			printf("%s", buff);
		}
		else
		{
			printf("the file %s does not exist", argv[1]);
		}
		
		
		return 1;
	}
	else
	{
		printf("too few parameters");
		return -1;
	}

}