#include<iostream>
#include<string>
#include<fstream>

//! NeŽeli ispisati "Pobjedili ste" inače po meni radi sve dok su 4 uz rub

using namespace std;

int main(){

//! Odreðivanje tablice

    int d=2,s=4,r=4;


    int Laira=3, Morr=4, DandD=5;

    while(Morr<DandD){
        int tablica[d][s][r];

       ifstream level("lv12.txt");

        for(int z=0;z<d;z++){
        for(int i=0;i<s;i++){
        for(int j=0;j<r;j++){
           level>>tablica[z][i][j];
        }
        }
        }
int c=0;
while(c<d){

    while(Laira<Morr)

        {

//! datoteka



//! Radi lakšeg provjeravanja sam stavio 4 4



//!Upis u polje



//!Ispis iz polja

            for(int i=0; i<s; i++)

            {

                for(int j=0; j<r; j++)

                {


                    cout<<tablica[c][i][j]<<"\t";
                }

                cout<<endl;

            }


            cout<<"3 se kontrolira sa tipkama W,A,S,D. Može se kretati samo po 0"<<endl;

            string k;



//!Beskonaèna petnja.  Uvijet za cij "4".


            short int lolek=0, bolek=1;

            int a,b;

            a = 1;

            b = 1;

            while(lolek<bolek)

            {

                cin>>k;

//!za pomak u desno

                if(k=="d")

                {

                    if(tablica[c][a][b+1]==4)

                    {
                        c++;
                          tablica[c][a][0]=3;


                            b=0;
                    }


                    else if(tablica[c][a][b+1]==1)

                    {


                        cout<<"Nemoze preko 1"<<endl;


                    }

                    else

                    {

                        tablica[c][a][b+1]=3;

                        tablica[c][a][b]=0;

                        b++;

                    }

                }

//!za pomak u lijevo

                if(k=="a")

                {

                    if(tablica[c][a][r]==4){

                       c++;
                       tablica[c][a][b-2]=3;



                        b=r;

                    }

                    else if(tablica[c][a][b-1]==1)

                    {

                        cout<<"Nemoze preko 1"<<endl;
                    }

                    else

                    {

                        tablica[c][a][b-1]=3;

                        tablica[c][a][b]=0;

                        b--;

                    }

                }

//!za pomak dolje



                if(k=="s")

                {

                    if(tablica[c][a+1][b]==4)

                    {
                        c++;
                           tablica[c][0][b]=3;



                        a=0;

                    }

                    else if(tablica[c][a+1][b]==1)

                    {
                        cout<<"Nemoze preko 1"<<endl;
                    }

                    else

                    {

                        tablica[c][a+1][b]=3;

                        tablica[c][a][b]=0;

                        a++;

                    }

                }

       //!za pomak gore

                if(k=="w")

                {

                    if(tablica[c][a-1][b]==4){
                        c++;

                        tablica[c][s][b]=3;



                        a=s;

                    }

                    else if(tablica[c][a-1][b]==1)

                    {

                        cout<<"Nemoze preko 1"<<endl;
                    }

                    else

                    {

                        tablica[c][a-1][b]=3;

                        tablica[c][a][b]=0;

                        a--;

                    }

                }





//!Ispis iz polja



                for(int i=0; i<s; i++)

                {

                    for(int j=0; j<r; j++)

                    {

                        cout<<tablica[c][i][j]<<"\t";

                    }

                    cout<<endl;

                }

            }



            Laira=5;





        }

        Morr=6;



    }

    }
    cout<<"Pobledili ste";



}
