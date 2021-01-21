#include<stdio.h>

//#include<stdlib.h>

//#include<string.h>

//#include<math.h>


/*

int line(int val)

{


	for(int i=1;i<=val;i++)
	
	{
	
		printf("*");
		
	}
	
}

int main()

{

    line(4);
    
	printf("\n*\n");
	
	line(4);
	
	printf("\n");
	
	for(int i=1;i<4;i++)
	
	{
	
		printf(" ");
		
		}
		
		printf("*\n");
		
		line(4);
		
}

*/

int spaces(int val)

{

	for(int i=1;i<=val;i++)
	
	{
	
		printf(" ");
		
		
	}
	
}


int stars(int val)


{

	for(int i=1;i<=val;i++)
	
	{
	
		printf("*");
		
	}
	
}


int line1()

{

	for(int i=1;i<=4;i++)
	
	{
	
		printf("*");
		
	}
	
	spaces(2);
	
	printf("*");
	
	spaces(2);
	
	printf("*");
	
	spaces(2);
	
	stars(2);
	
	spaces(3);
	
	stars(3);
	
	spaces(2);
	
	stars(3);
	
	printf("\n");
	
	
}

void line2()

{

	printf("*");
	
	spaces(5);
	
	stars(1);
	
	
	spaces(2);
	
	stars(1);
	
	spaces(2);
	
	stars(1);
	
	spaces(1);
	
	stars(1);
	
	spaces(3);
	
	stars(1);
	
	spaces(3);
	
	stars(1);
	
	spaces(2);
	
	stars(1);
	
	printf("\n");
	
	
	
}


void line3()


{

	stars(4);
	
	spaces(2);
	
	
	stars(1);
	
	spaces(2);
	
	
	
	stars(1);
	
	spaces(2);
	
	
	stars(1);
	
	spaces(2);
	
	
	stars(1);
	
	
	spaces(2);
	
	
	stars(1);
	
	spaces(3);
	
	
	stars(3);
	
	printf("\n");
	
	
	
}


void line4()

{

	
	
	spaces(3);
	
	stars(1);
	
	
	spaces(2);
	
	stars(1);
	
	spaces(2);
	
	stars(1);
	
	spaces(2);
	
	stars(1);
	
	spaces(1);
	
	stars(1);
	
	spaces(3);
	
	stars(1);
	
	spaces(3);
	
	stars(1);
	
	printf("\n");
	
	
	
}


void line5()

{

	stars(4);
	
	spaces(2);
	
	
	stars(4);
	
	spaces(2);
	
	stars(2);
	
	spaces(3);
	
	stars(3);
	
	spaces(2);
	
	stars(1);
	
	spaces(2);
	
	
}

int main()

{

	line1();
	
	line2();
	
	line3();
	
	line4();
	
	line5();
	
	
}
