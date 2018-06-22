#include "personas.h"

personas::personas(){

}
personas::personas(string _nombre,string _genero,string _color_cabello,string _color_ojos,string _color_piel,bool _fertl){
    nombre=_nombre;
    genero=_genero;
    color_cabello=_color_cabello;
    color_ojos=_color_ojos;
    color_piel=_color_piel;
    fertil=_fertl;
    
}
personas::~personas(){

}
//get
string personas::getnombre(){
    return nombre;
}
string personas::getgenero(){
    return genero;
}
string personas::getcolor_cabello(){
    return color_cabello;
}
string personas::getcolor_ojos(){
    return color_ojos;
}
string personas::getcolor_piel(){
    return color_piel;

}
bool personas::getfertil(){
    return fertil;
}
//set
void personas::setnombre(string _nombre){
    nombre=_nombre;
}
void personas::setgenero(string _genero){
    genero=_genero;
}
void personas::setcolor_cabello(string _color_cabello){
    color_cabello=_color_cabello;

}
void personas::setcolor_ojos(string _color_ojos){
    color_ojos=_color_ojos;
}
void personas::setcolor_piel(string _color_piel){
    color_piel=_color_piel;

}
void personas::setfertil(bool _fertl){
    fertil=_fertl;
}

void personas::toString(){
    cout<<"Nombre:"<<nombre<<" ,Gènero:"<<genero<<" ,Color de cabello:"<<color_cabello;
    cout<<", Color de piel:"<<color_piel<<" ,Color de ojos:"<<color_ojos<<" ,Fertil?:"<<fertil<<endl;

}

//operadores
/*
double figuras::operator+(figuras& rValue){
    return this->getArea()+ rValue.getArea();
}
*/

double personas::operator+(personas& rValue){
    int num_ran2=1+rand()%(29-1);
    int num_ran3=1+rand()%(3-1);

     if(num_ran2>=1 && num_ran2<=6){//validar dias fertiles
            if(num_ran3==1){  //hombre  
                cout<<"Tiene probabilidad de quedar embaraza"<<endl;
                cout<<"Tiene 50% de probabilidades que sea el bebè sea Varon"<<endl;
                return 100;
                
            }
            if(num_ran3==2){//mujer
                cout<<"Tiene probabilidad de quedar embaraza"<<endl;
                cout<<"Tiene 50% de probabilidades que sea el bebè sea Mujer"<<endl;
                return 100;

            }


        }else{
            cout<<"No puede quedar Embaraza,no esta en sus dias Fertiles"<<endl;
            return 0;

        }



   
}
double personas::operator*(personas& rValue){
    int num_ran1=1+rand()%(101-1);
    int num_ran2=1+rand()%(29-1);
    int num_ran3=1+rand()%(3-1);

    if(num_ran1==1){//validar si el espermatoziide escapa
        if(num_ran2>=1 && num_ran2<=6){//validar dias fertiles
            if(num_ran3==1){  //hombre  
                cout<<"Tiene probabilidad de quedar embaraza"<<endl;
                cout<<"Tiene 50% de probabilidades que sea el bebè sea Varon"<<endl;
                return 100;
            }
            if(num_ran3==2){//mujer
                cout<<"Tiene probabilidad de quedar embaraza"<<endl;
                cout<<"Tiene 50% de probabilidades que sea el bebè sea Mujer"<<endl;
                return 100;
            }


        }else{
            cout<<"No puede quedar Embaraza,no esta en sus dias Fertiles"<<endl;
            return 0;
        }
    }else{
        cout<<"No puede quedar Embaraza, el espermatozoide no escapo del preservativo(DUREX)"<<endl;
        return 0;
    }
    
}