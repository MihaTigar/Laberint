#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){

//! Odreðivanje tablice

    int d=2,s=4,r=4;

  ofstream brojac("Rev.txt");

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

                            ifstream korak("Rev.txt");
                            int Toris;
                            korak>>Toris;
                            Toris++;
                            brojac<<Toris;

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

                           ifstream korak("Rev.txt");
                            int Toris;
                            korak>>Toris;
                            Toris++;
                            brojac<<Toris;


                    }

                }

//!za pomak u lijevo

                if(k=="a")

                {

                    if(tablica[c][a][r]==4){

                       c++;
                       tablica[c][a][b-2]=3;



                        b=r;

                           ifstream korak("Rev.txt");
                            int Toris;
                            korak>>Toris;
                            Toris++;
                            brojac<<Toris;


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

                           ifstream korak("Rev.txt");
                            int Toris;
                            korak>>Toris;
                            Toris++;
                            brojac<<Toris;


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

                           ifstream korak("Rev.txt");
                            int Toris;
                            korak>>Toris;
                            Toris++;
                            brojac<<Toris;


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

                           ifstream korak("Rev.txt");
                            int Toris;
                            korak>>Toris;
                            Toris++;
                            brojac<<Toris;


                    }

                }

       //!za pomak gore

                if(k=="w")

                {

                    if(tablica[c][a-1][b]==4){
                        c++;

                        tablica[c][s][b]=3;



                        a=s;

                           ifstream korak("Rev.txt");
                            int Toris;
                            korak>>Toris;
                            Toris++;
                            brojac<<Toris;


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

                           ifstream korak("Rev.txt");
                            int Toris;
                            korak>>Toris;
                            Toris++;
                            brojac<<Toris;


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





    }
 Morr=6;
    }
    ifstream Toris("Rev.txt");

    brojac.close();
    cout<<"Pomaknuli ste se"<<Toris<<"puta";
    cout<<"Pobledili ste";



}
