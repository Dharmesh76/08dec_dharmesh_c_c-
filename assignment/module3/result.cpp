//wap to user enter 5 subject marks you have to make a total and find percentage
#include<stdio.h>
int main()
{
     float guj,eng,c,py,maths,total,percentage;
     printf("enter marks of guj : ");
     scanf("%f", &guj);
     printf("enter marks of eng : ");
     scanf("%f", &eng);
     printf("enter marks of c: ");
     scanf("%f", &c);
     printf("enter marks of py : ");
     scanf("%f", &py);
     printf("enter marks of maths : ");
     scanf("%f", &maths);
     if (guj>35&&eng>35&&c>35&&py>35&&maths>35){
     	printf("student is pass\n");
     	total=guj+eng+c+py+maths;
     	printf("Total of the student is :%f\n",total);
     	percentage=total/5;
     	printf("percentage of the student is : %f\n", percentage);
     	if (percentage>75){printf("Distinction\n");
		 }else if(percentage>60&&percentage<=75){printf("First Class\n");
		 }else if(percentage>50&&percentage<=60){printf("Second class\n");
		 }else if (percentage>35&&percentage<=50){printf("Pass class\n");
		 }
     	
	 }
	 else {printf("student is fail\n");
	 }
}
