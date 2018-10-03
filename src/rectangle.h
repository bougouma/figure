/*! file rectangle.h
*\author Bougouma Sarah
*/
#pragma once
/* class rectangle
*\permet de calculer la surface et le perimetre d'uun rectabgle
*/
class rectangle
{
public :
/*!
*\cette classe permet de calculer la surface et le perimetre d'un rectangle
*\Les methodes definit ici sont surface et perimetre
*\chaque methode prend deux parametres longeur: int largeur: int
\*Elle retourne la surface ou le perimetre du rectangle
*/
int surface(int longueur, int largeur);
int perimetre(int longueur, int largeur);
};
