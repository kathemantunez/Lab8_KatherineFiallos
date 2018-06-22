#ifndef PERSONAS_H
#define PERSONAS_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class personas{
    private:
        string nombre;
        string genero;
        string color_cabello;
        string color_ojos;
        string color_piel;
        bool fertil;
    public:
        personas();
        personas(string,string,string,string,string,bool);
        ~personas();
        //get
        string getnombre();
        string getgenero();
        string getcolor_cabello();
        string getcolor_ojos();
        string getcolor_piel();
        bool getfertil();
        //set
        void setnombre(string);
        void setgenero(string);
        void setcolor_cabello(string);
        void setcolor_ojos(string);
        void setcolor_piel(string);
        void setfertil(bool);
        void toString();

        //sobrecargas
        personas* operator *(personas&);
        personas* operator +(personas&);




};
#endif