#include <math.h>
#include <stdio.h>
void main() 
{
    int i,n,a11,a12,a13,a21,a22,a23,a31,a32,a33,s1,x,s2;
    float e,f,g,y,z,l;
   
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    
    printf("Program for Eigen Values and Eigen Vectors\n\n");
    printf("Enter a11 = ");
    scanf("%d",&a11);
     printf("\nEnter a12 = ");
    scanf("%d",&a12);
    printf("\nEnter a13 = ");
    scanf("%d",&a13);
     printf("\nEnter a21 = ");
    scanf("%d",&a21);
     printf("\nEnter a22 = ");
    scanf("%d",&a22);
    printf("\nEnter a23 = ");
    scanf("%d",&a23);
    printf("\nEnter a31 = ");
    scanf("%d",&a31);
    printf("\nEnter a32 = ");
    scanf("%d",&a32);
    printf("\nEnter a33 = ");
    scanf("%d",&a33);
    printf("User Enter Matrix is = \t\t%d  %d  %d\n\t\t\t\t%d  %d  %d\n\t\t\t\t%d  %d  %d",a11,a12,a13,a21,a22,a23,a31,a32,a33);
    
    s1=a11+a22+a33;
    printf("\nS1 = %d",s1);
    s2=((a22*a33)-(a32*a23))+((a33*a11)-(a31*a13))+((a11*a22)-(a21*a12));
    printf("\nS2 = %d",s2);
    x=(a11)*((a22*a33)-(a23*a32))-(a12)*((a33*a21)-(a31*a23))+(a13)*((a32*a21)-(a31*a22));
    printf("\n\n|A| = %d",x);
    
    printf("\n\nCharacter Equation\t\t  =\tλ^2-S1λ+|A|=0");
    printf("\n\nAfter putting values in given eqn =\t(λ^2)-(%dλ)+(%d)=0",s1,x);
    
    discriminant = s1 * s1 - 4 * 1 * x;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (s1 + sqrt(discriminant)) / (2 * 1);
        root2 = (s1 - sqrt(discriminant)) / (2 * 1);
        printf("\n\nroot1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -s1 / (2 * 1);
        printf("\n\nroot1 = root2 = %.2lf", root1);
    }

    // if roots are not real
    else {
        realPart = -s1 / (2 * 1);
        imagPart = sqrt(-discriminant) / (2 * 1);
        printf("\n\nroot1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    printf("\n\nEigen values are %.2lf and %.2lf",root1,root2);
    printf("\n\nConsider matrix equation : \n\t|A-λI|*X");
    printf("\n\n\n\t\t%d-λ\t%d\tx = 0\n\t\t%d\t%d-λ\ty = 0",a11,a12,a21,a22);
    printf("\n\nFor λ1=%.2lf",root1);
    y=a11-root1;
    z=a22-root1;
    printf("\n\n\t\t%.2f\t%d\tx = 0\n\t\t%d\t%.2f\ty = 0",y,a12,a21,z);
    printf("\n\n%dx+%.2fy=0",a21,z);
 
    l=-(a21/z);
    printf("\n\nThe eigen vector for λ1=%.2lf is x=1 and y=%.2f",root1,l);
    

    printf("\n\n-------------------------------------------------------------------------------------");
    
     printf("\n\nFor λ2=%.2lf",root2);
    e=a11-root2;
    f=a22-root2;
    printf("\n\n\t\t%.2f\t%d\tx = 0\n\t\t%d\t%.2f\ty = 0",e,a12,a21,f);
    printf("\n\n%dx+%.2fy=0",a21,f);
 
    g=-(a21/f);
    printf("\n\nThe eigen vector for λ2=%.2lf is x=1 and y=%.2f",root2,g);


     
} 






