/*! file triangle.h
\*author Bougouma Sarah
*\
*/
#pragma once
/*! class triangle
*\class triangle
*\permet de faire des calculs
*/
class triangle
{
public :
/*! classe triangle permet de calculer la surface et le perimetre d'un triangle
*\La methode perimetre prend trois valeurs l1,l2 et l3 qui represente les longeurs du triangle
*\La methode surface prend deux valeurs b pour la base et h pour la hauteur
*/
int surface(int b, int h);
int perimetre(int l1, int l2, int l3);
};
