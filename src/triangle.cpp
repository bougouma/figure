#include"triangle.h"
#include<iostream>

int triangle::surface(int b, int h)
{
return((b*h)/2);
}

int triangle::perimetre(int l1, int l2, int l3)
{
return(l1+l2+l3);
}
