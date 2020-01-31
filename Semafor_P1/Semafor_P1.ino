/**********************************************************************************
**                                                                               **
**                               Semàfor P1                                      **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int Temps = 1000;
int VermellA = 7;
int GrocA = 8;
int VerdA = 9;
int VermellB = 10;
int GrocB = 11;
int VerdB = 12;

//********** Setup ****************************************************************
void setup() 
{
    pinMode (VermellA, OUTPUT);
    pinMode (GrocA, OUTPUT);
    pinMode (VerdA, OUTPUT);
    pinMode (VermellB, OUTPUT);
    pinMode (GrocB, OUTPUT);
    pinMode (VerdB, OUTPUT);
}

//********** Loop *****************************************************************
void loop() 
{
   digitalWrite (VermellA, HIGH); 
   digitalWrite (GrocA, LOW);
   digitalWrite (VerdA, LOW);
   digitalWrite (VermellB, HIGH);
   digitalWrite (GrocB, LOW);
   digitalWrite (VerdB, LOW);
   delay (Temps);
   digitalWrite (VermellA, HIGH); 
   digitalWrite (GrocA, LOW);
   digitalWrite (VerdA, LOW);
   digitalWrite (VermellB, LOW);
   digitalWrite (GrocB, LOW);
   digitalWrite (VerdB, HIGH);
   delay (4*Temps);
   digitalWrite (VermellA, HIGH); 
   digitalWrite (GrocA, LOW);
   digitalWrite (VerdA, LOW);
   digitalWrite (VermellB, LOW);
   digitalWrite (GrocB, HIGH);
   digitalWrite (VerdB, LOW);
   delay (Temps);
   digitalWrite (VermellA, HIGH); 
   digitalWrite (GrocA, LOW);
   digitalWrite (VerdA, LOW);
   digitalWrite (VermellB, HIGH);
   digitalWrite (GrocB, LOW);
   digitalWrite (VerdB, LOW);
   delay (Temps);
   digitalWrite (VermellA, LOW); 
   digitalWrite (GrocA, LOW);
   digitalWrite (VerdA, HIGH);
   digitalWrite (VermellB, HIGH);
   digitalWrite (GrocB, LOW);
   digitalWrite (VerdB, LOW);
   delay (4*Temps);
   digitalWrite (VermellA, LOW); 
   digitalWrite (GrocA, HIGH);
   digitalWrite (VerdA, LOW);
   digitalWrite (VermellB, HIGH);
   digitalWrite (GrocB, LOW);
   digitalWrite (VerdB, LOW);
   delay (Temps);
 
}

//********** Funcions *************************************************************
