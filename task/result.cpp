#include<stdio.h>
int main()
{
	float maths,science,ss,total,percentage;
	printf("enter marks of maths (0-100) : ");
	scanf("%f",&maths);
	printf("enter marks of science (0-100) : ");
	scanf("%f",&science);
	printf("enter marks of ss (0-100) : ");
	scanf("%f", &ss);
	if(maths,science,ss>33){printf("student is pass\n");
	printf("<---------------TOTAL-------------->\n");
	total=maths+science+ss;
	printf("total is =%f\n", total);
	printf("<---------------PERCENTAGE---------->\n");
	percentage=total/3;
	printf("percentage =%f\n",percentage);
	printf("<---------------CLASS--------------->\n");
	if(percentage>=33&&percentage<60){printf("pass class \n");
	}else if(percentage<=80&&percentage>60){printf("second class\n");
	}else if(percentage<=100&&percentage>80){printf("first class \n");
	}
	}
	else{printf("fail");
	}



	return 0;
}
