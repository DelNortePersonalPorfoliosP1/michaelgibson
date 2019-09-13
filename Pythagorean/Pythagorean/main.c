//
//  main.c
//  Pythagorean
//
//  Created by Gibson, Michael on 9/13/19.
//  Copyright © 2019 Gibson, Michael. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc,const char * argv[]){
    double a,b,c;
    
        printf("enter side value a: \n");
        scanf("%lf", &a);
        printf("enter side value b: \n");
        scanf("%lf", &b);
        
        c=(a*a)+(b*b);
        c=sqrt(c);
        printf("C= \n");
        printf("%lf",c);
        return 0;
}
