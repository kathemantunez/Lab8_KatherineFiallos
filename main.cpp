#include <iostream>
#include "personas.h"
#include <vector>

using namespace std;
void agregar_personas();
void listar_personas();
void eliminar_personas();
void simulador_durex();

vector<personas*> v_personas;
int per1,per2;

int main(){
    bool seguir=true;
    char tecla;
    do{
        cout<<"Preservativos Durex\n!Bienvenido!"<<endl;
        cout<<"1. Agregar personas"<<endl;
        cout<<"2. Listar personas"<<endl;
        cout<<"3. Eliminar personas"<<endl;
        cout<<"4. Simulador"<<endl;
        cin>>tecla;
        switch(tecla){
            case '1':
                agregar_personas();
                break;
            case '2':
                 listar_personas();
                break;
            case '3':
                eliminar_personas();
                break;
            case '4':
                simulador_durex();
                break;
            default:
                cout<<"OPCION INCORRECTA";

        }

    }while(seguir==true);

    return 0;
}

void simulador_durex(){

        if(v_personas.size()!=0){
            int cont=0;
            int cont2=0;
            int opcion;
            int c=1,c2=1;
            string sexo;
            personas* P1;
            personas* P2;

            //Escoja dos personas para la simulacion
            while(c<=1){
            cout<<"¿A QUIEN DESEA ESCOGER PARA LA SIMULACIÒN?"<<endl;
                
            cout<<"primera persona:"<<endl;
                
            for(int i=0;i<v_personas.size();i++){
                    cout<<cont<<". ";
                    v_personas[i]->toString();
                    //cout<<v_personas[i]->getnombre()<<endl;
                    cont++;
                }
                cont=0;
                cin>>opcion;
                if(opcion<0 || opcion>=v_personas.size()){
                cout<<"incorrecto,opcion fuera de rango"<<endl;
                cin>>opcion;
                }else{
                    if(v_personas[opcion]->getfertil()){
                            string nombre,genero,cabello,ojos,piel;
                            bool fert;
                            nombre=v_personas[opcion]->getnombre();
                            genero=v_personas[opcion]->getgenero();
                            cabello=v_personas[opcion]->getcolor_cabello();
                            ojos=v_personas[opcion]->getcolor_ojos();
                            piel=v_personas[opcion]->getcolor_piel();
                            fert=v_personas[opcion]->getfertil();

                            P1=new personas(nombre,genero,cabello,ojos,piel,fert);
                           // per1=opcion;
                            sexo=v_personas[opcion]->getgenero();
                            cout<<"agregado"<<endl;
                        // opcion=NULL;
                            c++;
                        }else{
                            cout<<"Incorrecto,esta persona no es fertil";
                        }
                }
            }

            while(c2<=1){
                cout<<"¿A QUIEN DESEA ESCOGER PARA LA SIMULACIÒN?"<<endl;
                    cout<<"segunda persona"<<endl;
               
                for(int i=0;i<v_personas.size();i++){
                    cout<<cont2<<". ";
                    v_personas[i]->toString();
                    //cout<<v_personas[i]->getnombre()<<endl;
                    cont2++;
                }
                cont2=0;
                cin>>opcion;
                if(opcion<0 || opcion>=v_personas.size()){
                cout<<"incorrecto,opcion fuera de rango"<<endl;
                cin>>opcion;
                }else{
                        if(v_personas[opcion]->getfertil()){
                            if(v_personas[opcion]->getgenero()!=sexo){
                                string nombre,genero,cabello,ojos,piel;
                                bool fert;
                                nombre=v_personas[opcion]->getnombre();
                                genero=v_personas[opcion]->getgenero();
                                cabello=v_personas[opcion]->getcolor_cabello();
                                ojos=v_personas[opcion]->getcolor_ojos();
                                piel=v_personas[opcion]->getcolor_piel();
                                fert=v_personas[opcion]->getfertil();

                            P2=new personas(nombre,genero,cabello,ojos,piel,fert);
                               // per2=opcion;
                                //opcion=NULL;
                                c2++;
                                cout<<"agregador"<<endl;

                            }else{
                                cout<<"Incorrecto,las personas son del mismo sexo"<<endl;
                            }
                        }else{
                            cout<<"Incorrecto, esta persona no es fertil"<<endl;
                        }
                        
                    }
                    
                }
                
            
        //operadores sobrecargado
        char tipo_sexo;
        cout<<"¿Còmo desea tener su relacion?"<<endl;
        cout<<"1. Sexo sin protecciòn\n2. Sexo con preservativo Durex"<<endl;
        cin>>tipo_sexo;
        
        switch(tipo_sexo){
            case'1':
                cout<<"Probabilidad de : "<< *P1 + *P2 <<"%"<<endl;
                    
                break;

            case '2':
                cout<<"Probabilidad de : "<< *P1 * *P2 <<"%"<<endl;

                break;
        }


        }else{
            cout<<"INCORRECTO, NO HA AGREGADOR PERSONAS AUN\n"<<endl;
        }


}
void agregar_personas(){
        string nombre,genero,c_cabello,c_piel,c_ojos;
        bool fertil;
        char op;
        char op2;
        cout<<"----INGRESE SUS DATOS:----"<<endl;
        cout<<"Ingrese nombre:"<<endl;
        cin>>nombre;
        cout<<"Ingrese genero\n1.Masculino\n2.Femenino:"<<endl;
        cin>>op2;
        if(op2=='1'){
            genero="Masculino";
        }else{
            genero="Femenino";
        }
        cout<<"Ingrese color de cabello"<<endl;
        cin>>c_cabello;
        cout<<"Ingrese color de piel"<<endl;
        cin>>c_piel;
        cout<<"Ingrese color de ojos"<<endl;
        cin>>c_ojos;
        cout<<"¿Es fertil?\n1.SI\n2.NO"<<endl;
        cin>>op;
        if(op=='1'){
            fertil=true;
        }else{
            fertil=false;
        }
        personas* per=new personas(nombre,genero,c_cabello,c_ojos,c_piel,fertil);
        
        v_personas.push_back(per);
        cout<<"!AGREGADO EXITOSAMENTE!"<<endl;

    

}
void listar_personas(){
    if(v_personas.size()!=0){
        int cont=1;
        cout<<v_personas.size()<<endl;
        for(int i=0;i<v_personas.size();i++){
            
                v_personas[i]->toString();
                //cout<<v_personas[i]->getnombre()<<endl;
                cont++;

        }
    }else{
            cout<<"INCORRECTO, NO HA AGREGADOR PERSONAS AUN\n"<<endl;
    
    }
    

}
void eliminar_personas(){
    if(v_personas.size()!=0){

    
        int cont=0;
        int opcion;
        cout<<"¿A QUIEN DESEA ELIMINAR"<<endl;
        for(int i=0;i<v_personas.size();i++){
            cout<<cont<<". ";
            v_personas[i]->toString();
            //cout<<v_personas[i]->getnombre()<<endl;
            cont++;
        }
        cin>>opcion;
        if(opcion<0 || opcion>=v_personas.size()){
        cout<<"incorrecto,opcion fuera de rango"<<endl;
        cin>>opcion;
        }else{
        v_personas.erase(begin(v_personas)+opcion);
        }
    }else{
            cout<<"INCORRECTO, NO HA AGREGADOR PERSONAS AUN\n"<<endl;
        }

}