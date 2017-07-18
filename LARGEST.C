#include <stdio.h>
 
int main()
{ 
    int P,Q,R;
    int largest;
 
    printf("Enter three numbers (separated by space):");
    scanf("%d%d%d",&P,&Q,&R);
 
    if(P>Q && P>R)        
        largest=a;
    else if(Q>P && Q>R)       
        largest=b;
    else
        largest=R;
 
    printf("Largest number is = %d",largest);
 
    return 0;
}
