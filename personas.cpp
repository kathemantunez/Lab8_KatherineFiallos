#include "personas.h"
#include <time.h>

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

personas* personas::operator+(personas& rValue){//rvalue es el sujeto 2 y el this es el sujeto de la clase
    string _nombre,_genero,_cabello,_ojos,_piel;
    bool _fertil;
    personas* temp_persona=NULL;
    int num_ran2=1+rand()%(29-1);
    int num_ran3=1+rand()%(3-1);
    int num_ran4=1+rand()%(3-1);//ran de fertlidad;

     if(num_ran2>=1 && num_ran2<=6){//validar dias fertiles
            if(num_ran3==1){  //hombre  
                cout<<"Tiene probabilidad de quedar embaraza"<<endl;
                cout<<"Tiene 50% de probabilidades que sea el bebè sea Varon"<<endl;
                //nombre
                if(rValue.getgenero()=="Masculino"){
                    _nombre=rValue.getnombre();
                }
                if(this->getgenero()=="Masculino"){
                    _nombre=this->getnombre();
                }
                //genero
                _genero="Masculino";
                //fertil
                if(num_ran4==1){
                    _fertil=true;
                }else{
                    _fertil=false;
                }


                //piel
                if(this->getcolor_piel()=="blanco" && rValue.getcolor_piel()=="blanco"){
                    _piel="blanco";
                }
                if(this->getcolor_piel()=="moreno" && rValue.getcolor_piel()=="morenno"){
                    _piel="moreno";
                }
                if(this->getcolor_piel()=="moreno" && rValue.getcolor_piel()=="blanco"){
                    _piel="moreno";
                }
                if(this->getcolor_piel()=="blanco" && rValue.getcolor_piel()=="moreno") {
                    _piel="moreno";
                }

                //cabello
                if(this->getcolor_cabello()=="cafe" && rValue.getcolor_cabello()=="cafe"){
                    _cabello="cafe";
                }
                
                if(this->getcolor_cabello()=="rubio" && rValue.getcolor_cabello()=="rubio"){
                    _cabello="rubio";
                }
                if(this->getcolor_cabello()=="cafe" && rValue.getcolor_cabello()=="rubio"){
                    _cabello="cafe";
                }
                if(this->getcolor_cabello()=="rubio" && rValue.getcolor_cabello()=="cafe"){
                    _cabello="cafe";
                }


                //ojos
                if(this->getcolor_ojos()=="cafe" && rValue.getcolor_ojos()=="cafe"){
                    _ojos="cafe";
                }
                
                if(this->getcolor_ojos()=="azul" && rValue.getcolor_ojos()=="azul"){
                    _ojos="azul";
                }
                if(this->getcolor_ojos()=="cafe" && rValue.getcolor_ojos()=="azul"){
                    _ojos="cafe";
                }
                if(this->getcolor_ojos()=="azul" && rValue.getcolor_ojos()=="cafe"){
                    _ojos="azul";
                }


                
                

                temp_persona=new personas(_nombre,_genero,_cabello,_ojos,_piel,_fertil);
                return temp_persona;
                
            }
            //------------------------------------------------------------
            if(num_ran3==2){//mujer
                cout<<"Tiene probabilidad de quedar embaraza"<<endl;
                cout<<"Tiene 50% de probabilidades que sea el bebè sea Mujer"<<endl;

                //nombre
                if(rValue.getgenero()=="Femenino"){
                    _nombre=rValue.getnombre();
                }
                if(this->getgenero()=="Femenino"){
                    _nombre=this->getnombre();
                }
                

                _genero="Femenino";


                if(num_ran4==1){
                    _fertil=true;
                }else{
                    _fertil=false;
                }

                //piel
                if(this->getcolor_piel()=="blanco" && rValue.getcolor_piel()=="blanco"){
                    _piel="blanco";
                }
                if(this->getcolor_piel()=="moreno" && rValue.getcolor_piel()=="morenno"){
                    _piel="moreno";
                }
                if(this->getcolor_piel()=="moreno" && rValue.getcolor_piel()=="blanco"){
                    _piel="moreno";
                }
                if(this->getcolor_piel()=="blanco" && rValue.getcolor_piel()=="moreno") {
                    _piel="moreno";
                }
                 //cabello
                if(this->getcolor_cabello()=="cafe" && rValue.getcolor_cabello()=="cafe"){
                    _cabello="cafe";
                }
                
                if(this->getcolor_cabello()=="rubio" && rValue.getcolor_cabello()=="rubio"){
                    _cabello="rubio";
                }
                if(this->getcolor_cabello()=="cafe" && rValue.getcolor_cabello()=="rubio"){
                    _cabello="cafe";
                }
                if(this->getcolor_cabello()=="rubio" && rValue.getcolor_cabello()=="cafe"){
                    _cabello="cafe";
                }

                 //ojos
                if(this->getcolor_ojos()=="cafe" && rValue.getcolor_ojos()=="cafe"){
                    _ojos="cafe";
                }
                
                if(this->getcolor_ojos()=="azul" && rValue.getcolor_ojos()=="azul"){
                    _ojos="azul";
                }
                if(this->getcolor_ojos()=="cafe" && rValue.getcolor_ojos()=="azul"){
                    _ojos="cafe";
                }
                if(this->getcolor_ojos()=="azul" && rValue.getcolor_ojos()=="cafe"){
                    _ojos="azul";
                }

                temp_persona=new personas(_nombre,_genero,_cabello,_ojos,_piel,_fertil);

                return temp_persona;

            }


        }else{
            cout<<"No puede quedar Embaraza,no esta en sus dias Fertiles"<<endl;
            return temp_persona;

        }



   
}
personas* personas::operator*(personas& rValue){
     string _nombre,_genero,_cabello,_ojos,_piel;
    bool _fertil;
    personas* temp_persona=NULL;
    int num_ran1=1+rand()%(101-1);
    int num_ran2=1+rand()%(29-1);
    int num_ran3=1+rand()%(3-1);
    int num_ran4=1+rand()%(3-1);//ran de fertlidad;

    if(num_ran1==1){//validar si el espermatoziide escapa
        if(num_ran2>=1 && num_ran2<=6){//validar dias fertiles
            if(num_ran3==1){  //hombre  
                cout<<"Tiene probabilidad de quedar embaraza"<<endl;
                cout<<"Tiene 50% de probabilidades que sea el bebè sea Varon"<<endl;
                 

                 //nombre
                if(rValue.getgenero()=="Masculino"){
                    _nombre=rValue.getnombre();
                }
                if(this->getgenero()=="Masculino"){
                    _nombre=this->getnombre();
                }

                _genero="Masculino";


                if(num_ran4==1){
                    _fertil=true;
                }else{
                    _fertil=false;
                }

                //piel
                if(this->getcolor_piel()=="blanco" && rValue.getcolor_piel()=="blanco"){
                    _piel="blanco";
                }
                if(this->getcolor_piel()=="moreno" && rValue.getcolor_piel()=="morenno"){
                    _piel="moreno";
                }
                if(this->getcolor_piel()=="moreno" && rValue.getcolor_piel()=="blanco"){
                    _piel="moreno";
                }
                if(this->getcolor_piel()=="blanco" && rValue.getcolor_piel()=="moreno") {
                    _piel="moreno";
                }
                 //cabello
                if(this->getcolor_cabello()=="cafe" && rValue.getcolor_cabello()=="cafe"){
                    _cabello="cafe";
                }
                
                if(this->getcolor_cabello()=="rubio" && rValue.getcolor_cabello()=="rubio"){
                    _cabello="rubio";
                }
                if(this->getcolor_cabello()=="cafe" && rValue.getcolor_cabello()=="rubio"){
                    _cabello="cafe";
                }
                if(this->getcolor_cabello()=="rubio" && rValue.getcolor_cabello()=="cafe"){
                    _cabello="cafe";
                }
                 //ojos
                if(this->getcolor_ojos()=="cafe" && rValue.getcolor_ojos()=="cafe"){
                    _ojos="cafe";
                }
                
                if(this->getcolor_ojos()=="azul" && rValue.getcolor_ojos()=="azul"){
                    _ojos="azul";
                }
                if(this->getcolor_ojos()=="cafe" && rValue.getcolor_ojos()=="azul"){
                    _ojos="cafe";
                }
                if(this->getcolor_ojos()=="azul" && rValue.getcolor_ojos()=="cafe"){
                    _ojos="azul";
                }

                temp_persona=new personas(_nombre,_genero,_cabello,_ojos,_piel,_fertil);


                return temp_persona;
            }
            //------------------------------------------------------------
            if(num_ran3==2){//mujer
                cout<<"Tiene probabilidad de quedar embaraza"<<endl;
                cout<<"Tiene 50% de probabilidades que sea el bebè sea Mujer"<<endl;

                //nombre
                if(rValue.getgenero()=="Femenino"){
                    _nombre=rValue.getnombre();
                }
                if(this->getgenero()=="Femenino"){
                    _nombre=this->getnombre();
                }

                 _genero="Femenino";

                if(num_ran4==1){
                    _fertil=true;
                }else{
                    _fertil=false;
                }
                //piel
                if(this->getcolor_piel()=="blanco" && rValue.getcolor_piel()=="blanco"){
                    _piel="blanco";
                }
                if(this->getcolor_piel()=="moreno" && rValue.getcolor_piel()=="morenno"){
                    _piel="moreno";
                }
                if(this->getcolor_piel()=="moreno" && rValue.getcolor_piel()=="blanco"){
                    _piel="moreno";
                }
                if(this->getcolor_piel()=="blanco" && rValue.getcolor_piel()=="moreno") {
                    _piel="moreno";
                }
                 //cabello
                if(this->getcolor_cabello()=="cafe" && rValue.getcolor_cabello()=="cafe"){
                    _cabello="cafe";
                }
                
                if(this->getcolor_cabello()=="rubio" && rValue.getcolor_cabello()=="rubio"){
                    _cabello="rubio";
                }
                if(this->getcolor_cabello()=="cafe" && rValue.getcolor_cabello()=="rubio"){
                    _cabello="cafe";
                }
                if(this->getcolor_cabello()=="rubio" && rValue.getcolor_cabello()=="cafe"){
                    _cabello="cafe";
                }
                 //ojos
                if(this->getcolor_ojos()=="cafe" && rValue.getcolor_ojos()=="cafe"){
                    _ojos="cafe";
                }
                
                if(this->getcolor_ojos()=="azul" && rValue.getcolor_ojos()=="azul"){
                    _ojos="azul";
                }
                if(this->getcolor_ojos()=="cafe" && rValue.getcolor_ojos()=="azul"){
                    _ojos="cafe";
                }
                if(this->getcolor_ojos()=="azul" && rValue.getcolor_ojos()=="cafe"){
                    _ojos="azul";
                }




                temp_persona=new personas(_nombre,_genero,_cabello,_ojos,_piel,_fertil);



                 return temp_persona;
            }


        }else{
            cout<<"No puede quedar Embaraza,no esta en sus dias Fertiles"<<endl;
             return temp_persona;
        }
    }else{
        cout<<"No puede quedar Embaraza, el espermatozoide no escapo del preservativo(DUREX)"<<endl;
        return temp_persona;
    }
    
}