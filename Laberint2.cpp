#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//!Problem u programu je stizanje na 4 sve ostalo što sam napravo radi.
//!To ostalo  je micanje, prepoznavanje 3 i ne prelaženje preko 1.


int main(){

//! Odreðivanje tablice

int s, r;
int Laira=3, Morr=4, DandD=5;

while(Morr<DandD){

while(Laira<Morr){

//! datoteka

string level1;
ifstream level1;

level1.open("ucenik.txt");





//! Radi lakšeg provjeravanja sam stavio 4 4

s=4;
r=4;

int tablica[s][r];

//!Upis u polje
for(int i=0;i<s;i++){
    for(int j=0;j<r;j++){
        tablica[i][j]=1;
    }
}
tablica[1][1]=3;
tablica[1][2]=0;
tablica[2][1]=0;
tablica[2][2]=0;
tablica[2][3]=4;

//!Ispis iz polja
for(int i=0;i<s;i++){
    for(int j=0;j<r;j++){
            cout<<tablica[i][j]<<"\t";
    }
    cout<<endl;
}

cout<<"3 se kontrolira sa tipkama W,A,S,D. Može se kretati samo po 0"<<endl;
string k;

//!Beskonaèna petnja.  Uvijet za cij "4".

short int lolek=0, bolek=1;
while(lolek<bolek){
cin>>k;

//!za pomak u desno
if(k=="d"){
        //!TRAŽILICA
        int a,b;
    for(int i=0;i<s;i++){
    for(int j=0;j<r;j++){
            if(tablica[i][j]==3){
                a=i;
                b=j;
            }
            //! Stizanje na cilj
           // if(tablica[i][j+1]==4){
               // lolek=2;
          //  }
    }
    }
if(tablica[a][b+1]==1){
        cout<<"Nemoze preko 1"<<endl;
}
//!POMAK
if(tablica[a][b+1]==0){
    tablica[a][b+1]=3;
    tablica[a][b]=0;
}
}

//!za pomak u lijevo
if(k=="a"){
        //!TRAŽILICA
        int a,b;
    for(int i=0;i<s;i++){
    for(int j=0;j<r;j++){
            if(tablica[i][j]==3){
                a=i;
                b=j;
            }
         //   if(tablica[i][j-1]==4){
          //    lolek=2;
          //  }
    }
    }
if(tablica[a][b-1]==1){
        cout<<"Nemoze preko 1"<<endl;
}
//!POMAK
if(tablica[a][b-1]==0){
    tablica[a][b-1]=3;
    tablica[a][b]=0;
}
}

//!za pomak dolje
if(k=="s"){
        //!TRAŽILICA
        int a,b;
    for(int i=0;i<s;i++){
    for(int j=0;j<r;j++){
            if(tablica[i][j]==3){
                a=i;
                b=j;
            }
          //  if(tablica[i+1][j]==4){
          //     lolek=2;
          //  }
    }
    }
if(tablica[a+1][b]==1){
        cout<<"Nemoze preko 1"<<endl;
}
//!POMAK
if(tablica[a+1][b]==0){
    tablica[a+1][b]=3;
    tablica[a][b]=0;
}
}

//!za pomak gore
if(k=="w"){
        //!TRAŽILICA
        int a,b;
    for(int i=0;i<s;i++){
    for(int j=0;j<r;j++){
            if(tablica[i][j]==3){
                a=i;
                b=j;
            }
         //   if(tablica[i][j]==4){
         //      lolek=2;
         //   }
    }
    }
if(tablica[a-1][b]==1){
        cout<<"Nemoze preko 1"<<endl;
}
//!POMAK
if(tablica[a-1][b]==0){
    tablica[a-1][b]=3;
    tablica[a][b]=0;
}
}

//!Ispis iz polja
for(int i=0;i<s;i++){
    for(int j=0;j<r;j++){
            cout<<tablica[i][j]<<"\t";
    }
    cout<<endl;
}
}
Laira=5;
levl1.close();
}
Morr=6;
}
cout<<"Pobledili ste";
}
