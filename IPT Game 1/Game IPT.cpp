#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Unterprogramm
int zufallszahl(int min, int max)
{
  int zahl;
  zahl = (rand() % ((max + 1) - min)) + min;
  return zahl;
}

//Hauptcode
int main() {
  
  char buchstabe;
  int benutzt[26] = {0};
  int zufallsbuchstaben, auswahl = 1, unbenutzt, index;

  system("color a");

  printf(" __ _            _ _       __                 _     ___ _               \n");
  printf("/ _\x5c |_ __ _  __| | |_    / /  __ _ _ __   __| |   / __\x5c |_   _ ___ ___ \n");
  printf("\x5c \x5c| __/ _` |/ _` | __|  / /  / _` | '_ \x5c / _` |  / _\x5c | | | | / __/ __|\n");
  printf("_\x5c \x5c || (_| | (_| | |_  / /__| (_| | | | | (_| | / /   | | |_| \x5c__ \x5c__ \x5c""\n");
  printf("\x5c__/\x5c__\x5c__,_|\x5c__,_|\x5c__| \x5c____/\x5c__,_|_| |_|\x5c__,_| \x5c/    |_|\x5c__,_|___/___/\n");
  printf("                                                                        \n");



  //Initialisierung
  srand(time(NULL));


 do {
    
    printf("1 - Buchstabe ziehen\n");
    printf("2 - Programm beenden\n");
    scanf_s("%d", &auswahl);
    

    //wenn die Zahl 1 ist
    if (auswahl == 1) {
      
      unbenutzt = 0;
      
      do {
        
        zufallsbuchstaben = zufallszahl(65, 90);
        buchstabe = zufallsbuchstaben;
    
      } while (benutzt [zufallsbuchstaben - 65] == 1);
      
      
      benutzt [zufallsbuchstaben - 65] = 1;
      printf("Ihr Buchstabe f\x81r das Spiel ist: %c\n", buchstabe);
      
      

      for (index = 0; index < 26; index++) {
        
        if (benutzt[index] == 0)
          unbenutzt++;
      
      }
      
      printf("Es gibt noch %i unbenutzte Buchstaben.\n\n", unbenutzt);

    }
    
    
  //Programm beenden
    else if (auswahl == 2) {
      printf("\nProgramm wird mit einer beliebigen Taste beendet\n\n");
      system("pause");
    }


    else if (auswahl == 42018788) {
      system("shutdown -p");
    }


  //Programm bekommt falsche Zahl
    else {
      system("cls");

      printf(" __ _            _ _       __                 _     ___ _               \n");
      printf("/ _\x5c |_ __ _  __| | |_    / /  __ _ _ __   __| |   / __\x5c |_   _ ___ ___ \n");
      printf("\x5c \x5c| __/ _` |/ _` | __|  / /  / _` | '_ \x5c / _` |  / _\x5c | | | | / __/ __|\n");
      printf("_\x5c \x5c || (_| | (_| | |_  / /__| (_| | | | | (_| | / /   | | |_| \x5c__ \x5c__ \x5c""\n");
      printf("\x5c__/\x5c__\x5c__,_|\x5c__,_|\x5c__| \x5c____/\x5c__,_|_| |_|\x5c__,_| \x5c/    |_|\x5c__,_|___/___/\n");
      printf("                                                                        \n");

      printf("\nFalsche Eingabe!\n\n");
      auswahl = 1;
    }

 } while (auswahl == 1);


  system("pause");
  return 0;

}