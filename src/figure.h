/*! file figure.h
*\author Bougouma Sarah
*/
#pragma once
/*!
*\ class mere figure
*\permet d'effectuer des calcules
*/
class figure
{
/*!
*\class c'est la classe mere des classe triangle, rectangle et disque
*\elle prend comme methode surface et perimetre qui ne contient aucun caractére)
*/
virtual int surface();
virtual int perimetre();
};
