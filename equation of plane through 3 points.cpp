//made by sachin kumar 
// check my othet mathematical programs  in my github profile.
// you will get all dtat of program in a text file in folder  ehere this program is saved
#include<stdio.h>
int main()
{FILE *f;
	int x1,x2,x3;
	int y1,y2,y3;
	int z1,z2,z3;
	int  a,b,c,d;
	int    x,y,z;
	
	
	f = fopen("equation of plane through 3 points in space.txt", "a");
	if(f == NULL)
	{
		printf("Can't open the file");
	
	  	return 0;
	}
    printf("Get EQUATION of plane by giving three points in  3 dimensional Space:-");
    fprintf(f,"Get EQUATION of plane by giving three points in 3 dimensional Space:-");
    printf("\nenter values of :\nx1,y1,z1 respectevely\n");
    fprintf(f,"\nenter values of :\nx2,y2,z2 respectevely\n");
	scanf("\n %d %d %d",&x1,&y1,&z1);
	fprintf(f,"\n%d\n%d\n%d\n\n",x1,y1,z1);
	
	printf("\nenter values of :\nx2,y2,z2 respectevely\n");
	fprintf(f,"\nenter values of :\nx2,y2,z2 respectevely\n");
	scanf("\n %d %d %d",&x2,&y2,&z2);
	fprintf(f,"\n%d\n%d\n%d\n\n",x2,y2,z2);
	
	printf("\nenter values of :\nx3,y3,z3 respectevely\n");
	fprintf(f,"\nenter values of :\nx3,y3,z3 respectevely\n");
	scanf("\n %d %d %d",&x3,&y3,&z3);
	fprintf(f,"\n%d\n%d\n%d\n\n",x3,y3,z3);
	
	a=(((y2-y1)*(z3-z1))-((y3-y1)*(z2-z1)));
	b=-((x2-x1)*(z3-z1)-(z2-z1)*(x3-x1));
	c=((x2-x1)*(y3-y1)-(y2-y1)*(x3-x1));
	d=-x1*((y2-y1)*(z3-z1)-(y3-y1)*(z2-z1))+y1*((x2-x1)*(z3-z1)-(z2-z1)*(x3-x1))-z1*((x2-x1)*(y3-y1)-(y2-y1)*(x3-x1));
	printf("\n\nRespective Cofficients as per general equation: \n");
	fprintf(f,"\n\nRespective Cofficients as per general equation : \n");
	printf("(a)x+(b)y+(c)z+d=0\n");
	fprintf(f,"(a)x+(b)y+(c)z+d=0\n");	
	printf("\nvalue of a=%d",a);
	fprintf(f,"\nvalue of a=%d",a);
	
	printf("\nvalue of b=%d",b);
	fprintf(f,"\nvalue of b=%d",b);
	
	printf("\nvalue of c=%d",c);
	fprintf(f,"\nvalue of c=%d",c);
	
	printf("\nvalue of d=%d",d);
	fprintf(f,"\nvalue of d=%d",d);
	
	printf("\n\n\nEquation of the plane formed is:\n\n");	
	fprintf(f,"\n\n\nEquation of the plane formed is:\n\n");
	
	printf("(");
	fprintf(f,"(");
	
	printf("%d",a);
	fprintf(f,"%d",a);
	
    printf(")x");
    fprintf(f,")x");
    
	printf("+(");
	fprintf(f,"+(");
	
	printf("%d",b);
	fprintf(f,"%d",b);
	
	printf(")y");
	fprintf(f,")y");
	
	printf("+(");
	fprintf(f,"+(");
	
	printf("%d",c);
	fprintf(f,"%d",c);
	
	printf(")z");
	fprintf(f,")z");
	
	printf("+(");
	fprintf(f,"+(");
	
	printf("%d",d);
	fprintf(f,"%d",d);
	
	printf(")=");
	fprintf(f,")=");
	
	printf("0");
	fprintf(f,"0\n\n");
	return 0;
	

}
