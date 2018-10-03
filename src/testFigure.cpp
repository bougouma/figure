#include<iostream>
#include"rectangle.h"
#include"figure.h"
#include"triangle.h"
#include"disque.h"
using namespace std;

int main()
{
rectangle r;


std::cout<<"calcule du perimetre"<<std::endl;
std::cout<<"calcule du perimetere d'un rectangle"<<endl;


std::cout<<r.perimetre(5,8)<<std::endl;

std::cout<<"calcule du perimetre d'un triangle"<<std::endl;

triangle t;
std::cout<<t.perimetre(5,9,8)<<std::endl;

std::cout<<"calcule du perimetre d'un disque"<<std::endl;

disque d;
std::cout<<d.perimetre(4)<<std::endl;

std::cout<<"calcule de la surface"<<std::endl;

std::cout<<"calcule de la surface d'un triangle :"<<std::endl;

std::cout<<t.surface(4,9)<<std::endl;

std::cout<<"calcule de la surface d'un rectangle:"<<std::endl;

std::cout<<r.surface(5,8)<<std::endl;

std::cout<<"calcule de la surface d'un disque"<<std::endl;


std::cout<<d.surface(3)<<std::endl;
};
