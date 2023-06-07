/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
/*Fatimah Ammar Almoumen
1117555811

Sumayah Almarghoub
2200003286
 Fatimah Aljaroudi 
2210003513
Shahad Aldossari
2210003677*/

const float g =9.8 ;
const float R=8.31; 


float KE(float m , float v)
{
    cout<<"Enter THE mass and spead";
    cin >>m ;
    cin>>v;
    float KE;
    KE= 0.5*m*pow(v,2);
    
    return KE ;
}

float ideal_gas ( float N ,float T)
{
    float V;
    cout<<"Enter The Number of mole and temprature and volume ";
    cin>>N;
    cin>>V;
cin>>T;
    float ideal_gas;
    ideal_gas=(N*R*T)/V ;
    return ideal_gas ;
}
 
float Pascal(float F,float A)
{ 
    cout<<"Enter The force and Area ";
    cin>>F;
    cin>>A;
    float Pascal ;
    Pascal=F/A ;
    return Pascal ;
}

float Archimedes (float P)
{
    float V;
    cout<<"Enter The volume and  density ";
    cin>>P;
    cin>>V;
    float Archimedes;
    Archimedes = P*V*g ;
    return Archimedes ; 
    
}
    

int main()
{
    float V;
    cout<<"Welcome to our program, we will apply with you one of the famous physical laws by entering the required data according to the law you want. All you have to do is choose the law and include the data as required."<<endl;

 int choice;
do
{
cout<<" 1 - KE.\n";
cout<<" 2 - ideal_gas.\n";
cout<< " 3 - Pascal.\n";
cout<< " 4 - Archimedes.\n";
cout<< " Enter your choice and press return: "<<endl;
cin>>choice;
switch (choice)
{
case 1:
float m,v;
float ret;
ret=KE(m,v);
cout<<"kE is "<<ret<<endl;
break;
case 2:
float N,T,x;
x=ideal_gas(N,T) ;
cout<<"ideal_gas is"<<x<<endl;
break;
case 3:
float F,A,y;
y=Pascal(F,A) ;
cout<<"Pascal is"<<y<<endl;
break;
case 4:
float P,V,z;
z =Archimedes(P) ;
cout<<"Archimedes is"<<z<<endl;
break;
case 5:
cout << "End of Program.\n";
break;
default:
cout << "Not a Valid Choice. \n"<< "Choose again.\n";
break;
}
}
while (choice !=5);


return 0;
}
