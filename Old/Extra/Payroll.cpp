/* David Leake
   Programming 1
   Due: November 16th, 2011
   Payroll Program
   This program will revieve input form a data file and preform calculations and then output the data 
   that like of a payroll calculator.  
   */
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

double inscalc(string inscode){
       double ins;
       int q=0;
       if (q<1 && (inscode == "N" || inscode == "n")){
                ins = 0.00;
                 q++;
       } 
       
       if (q<1 && (inscode == "S" || inscode == "s")){
                ins = 9.50;
                q++;
       }
     
       if (q<1 && (inscode == "F" || inscode == "f")){
                ins = 27.75;
                q++;
       }    
       return ins;
       }
double ratecalc (double rate, double hours){
       double payment=0, ot=0, addedOT=0;
       if(hours > 40)
         {
         double ot = hours - 40;
         double addedOT = (ot * rate) * 2;      
         double payment = addedOT + (rate * (hours - ot));
    
         return payment;
         }
       else 
       {
       double payment = rate * hours;     
       return payment;
       }
       }       
double socialcalc(double z){     
       double soc =00;
       double socper = 0.07;
       soc = z * socper;         
       return soc;
       }
double stateTaxCalc(double grosspay){              
       double state = (grosspay * 0.03);
       return state;                    
       }
double pyeCalc(double grosspay){             
       double pye = (grosspay * 52);
       return pye;                    
       }
double fedTaxCalc(double grosspay, double pye){       
       double fedTax;
       int q=0;
       if (q<1 && (pye < 8000)){
               fedTax = 0;
               q++;
       } 
       if (q<1 && (8000 >= pye || pye < 20000)){
               fedTax = grosspay * 0.15;
               q++;
        }
       if (q<1 && (pye > 20000)){
               fedTax = grosspay * 0.28;
               q++;
       }
       return fedTax;                   
       }
double netPayCalc(double grosspay, double ins, double social, double stateTax, double fedTax){  
       double sub = ins + social +stateTax + fedTax;
       double net = grosspay - sub;
       return net;    
       }
int main () {
    string name;
    double rate, hours;
    string inscode;
    string line;
    ifstream myfile ("payrollinfo.txt");
    if (myfile.is_open())
          { cout << "Program Started\n\n\n" << endl;

            int i=0;
    while (getline(myfile,line))
      {
          name = line.substr(0,21);          
          rate = atof(line.substr(22,5).c_str());   
          hours = atof(line.substr(30,2).c_str());   
          inscode = line.substr(33,1);
         
          double ins = inscalc(inscode);
          double grosspay = ratecalc(rate, hours);
          double social = socialcalc(grosspay);
          double stateTax = stateTaxCalc(grosspay);
          double pye = pyeCalc(grosspay);
          double fedTax = fedTaxCalc(grosspay, pye);
          double netPay = netPayCalc(grosspay, ins, social, stateTax, fedTax);
//output     
      if(i<1) {
        cout << fixed << "Name" 
        << setw(22) << "Rate"
        << setw(9) << "Hours "
        << setw(5) << "INS" 
        << setw(12) << "Insurance"  
        << setw(9)<< "Social" 
        << setw(13)<< "State Tax" 
        << setw(14)<< "Federal Tax" 
        << setw(9)<< "Net" 
        << endl;
              i++;
              }

//output
        cout << left << setw(20) << name 
        << right << setw(5) << setprecision(2) <<  rate 
        << setw(6) <<setprecision(0) << hours 
        << setw(7) << inscode   
        << setw(11) <<setprecision(2) << ins
        << setw(11) << social
        << setw(11) << stateTax
        << setw(13) << fedTax
        << setw(13) << netPay
        << endl; 
      
            
      
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 
  cout << "\n\n\nProgram Finished" << endl;
  cin.get();

return 0;

          
        
}

    

