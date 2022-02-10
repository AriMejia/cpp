/* Propocito: Crear un Programa que calcule notas de un alumno
   Ariel Aminadad Mejia Diaz
   # 20182030543
   Lenguaje de programacion 1
   */

  #include <iostream>
  #include <cmath>

  using namespace std;
  int main ()
  {
      float nota = 0;

      cout << "Ingrese la nota del alumno: ";
      cin >> nota;

      if(nota > 100 && nota <0)
      {
          return 0;
      }  
      if(nota >=0 && nota <= 4)
      {
          cout << "\nObtuviste un F--";
      }

      if(nota >=5 && nota <= 9)
      {
          cout << "\nObtuviste un F-";
      }

      if(nota >=11 && nota <= 14)
      {
          cout << "\nObtuviste un F";
      }

      if(nota >=15 && nota <= 19)
      {
          cout << "\nObtuviste un F+";
      }

      if(nota >=20 && nota <= 24)
      {
          cout << "\nObtuviste un F+";
      }

      if(nota >=25 && nota <= 29)
      {
          cout << "\nObtuviste un E-";
      }

      if(nota >=30 && nota <= 34)
      {
          cout << "\nObtuviste un E";
      }

      if(nota >=35 && nota <= 39)
      {
          cout << "\nObtuviste un E+";
      }
      
      if(nota >=40 && nota <= 44)
      {
          cout << "\nObtuviste un D-";
      }
    
      if(nota >=45 && nota <= 49)
      {
          cout << "\nObtuviste un D";
      }

      if(nota >=50 && nota <= 54)
      {
          cout << "\nObtuviste un D+";
      }

      if(nota >=5 && nota <= 59)
      {
          cout << "\nObtuviste un C-";
      }

      if(nota >=60 && nota <= 64)
      {
          cout << "\nObtuviste un C";
      }

      if(nota >=65 && nota <= 74)
      {
          cout << "\nObtuviste un B-";
      }

      if(nota >=75 && nota <= 79)
      {
          cout << "\nObtuviste un B";
      }

      if(nota >=80 && nota <= 84)
      {
          cout << "\nObtuviste un B+";
      }

      if(nota >=85 && nota <= 89)
      {
          cout << "\nObtuviste un A-";
      }

      if(nota >=90 && nota <= 94)
      {
          cout << "\nObtuviste un A";
      }

      if(nota >=95 && nota <= 99)
      {
          cout << "\nObtuviste un A+";
      }

      if(nota == 100)
      {
          cout << "\nObtuviste un A++";
      }



      


      return 0;
  }