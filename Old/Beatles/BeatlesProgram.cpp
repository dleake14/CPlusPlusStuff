/* David Leake
   Programming 1
   Due: Decemember 6th, 2011
   Beatles Songs
   This program will read in data from a file and organize   
   */
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;


struct Albums
  {
    string title;
    string date;
    string songs[30];
    string songl[30];
    int count;
    Albums(){count = 0;}
  };

struct Albums beatles[5]; 

void songSort(string ar[], string arList[], int cc)
{
int swaps =1,z;
while (swaps)
      {
      swaps =0;
      for (z=0; z < cc-1; z++)
      {
          if (arList[z] > arList[z+1])
             {
              cout << "cc is " << cc << endl;
            system("pause");
             
             swap (arList[z], arList[z+1]);
             swap (ar[z], ar[z+1]);
             swaps=1;
             }
             }
             }
     
     
}



int main()

  {  int t=0;
    int acount=0;
    string line;
    int len;
    ifstream myfile ("beatleslist.txt");
    cout << "Program Started\n\n\n" << endl;
    if (myfile.is_open())
      { 
         // get the album name and date
         getline(myfile,beatles[acount].title);
         getline(myfile,beatles[acount].date ); 
         // get the songs
        
         while (getline(myfile,line))
           {
             if (line[1]!='=')
               {
                 len = line.length();           
                 int t = beatles[acount].count;
                 beatles[acount].songs[t] = line; 
                 beatles[acount].songl[t]= beatles[acount].songs[t].substr(4,len);
                 beatles[acount].count++;
                 t++;
               cout << t << "this is t" << endl;
               //system("pause");
               }
             else
               {
                 acount++;
                 getline(myfile,beatles[acount].title);
                 getline(myfile,beatles[acount].date ); 
               }
           } 
      
cout << t << "this is t after" << endl;
               //system("pause");
      while(line[t] != '=' && !myfile.eof());
      songSort( beatles[acount].songs, beatles[acount].songl, t);
   cout << "album count it " << acount <<endl;
    myfile.close();
}

//album sort
cout <<"should sort albums \n\n\n\n\n\n" <<endl;
int swaps =1,z;
while (swaps)
      {
      swaps =0;
      for (z=0; z < 4; z++)
      {
          if (beatles[z].title > beatles[z+1].title)
             {
             swap (beatles[z],beatles[z+1]);
             swaps=1;
             }
             }
             }
cout <<"should sort songs \n\n\n\n\n" <<endl;
system("pause");


  for (int i = 0; i < 5; i++)
      {
         cout << beatles[i].title << endl;
         cout << beatles[i].date  << endl;
         for (int j=0; j < beatles[i].count; j++)
           cout << beatles[i].songs[j] << endl; 

     
      }


cout << "                                end" << endl;
system("pause");











}


