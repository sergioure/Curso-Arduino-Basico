//***** ELEKTRONICA PROJECT ************
// ********* CURSO BASICO DE ARDUINO *********

/* Practica 2 El problema es encender el display 
del 0 al 4 de forma continua con retardo de 1 
segundo, utilizar los pines   12…6. . */

int SEG_A = 12;  //Pin12 nombrado como SEG_A del display
int SEG_B = 11;  //Pin10 nombrado como SEG_B del display
int SEG_C = 10;  //Pin11 nombrado como SEG_C del display
int SEG_D = 9;   //Pin9 nombrado como SEG_D del display
int SEG_E = 8;   //Pin8 nombrado como SEG_E del display
int SEG_F = 7;   //Pin7 nombrado como SEG_F del display
int SEG_G = 6;   //Pin6 nombrado como SEG_G del display

// la función de configuración se ejecuta una vez al pulsar reinicio 
void setup() {
  
  pinMode(12, OUTPUT);  // Inicia el Pin12 como salida
  pinMode(11, OUTPUT);  // Inicia el Pin11 como salida
  pinMode(10, OUTPUT);  // Inicia el Pin10 como salida
  pinMode(9, OUTPUT);   // Inicia el Pin9 como salida
  pinMode(8, OUTPUT);   // Inicia el Pin8 como salida
  pinMode(7, OUTPUT);   // Inicia el Pin7 como salida
  pinMode(6, OUTPUT);   // Inicia el Pin6 como salida
}

// la función de bucle se ejecuta una y otra vez para siempre
void loop() {
  // Numero 0
  digitalWrite(SEG_A, HIGH);   // Encender 
  digitalWrite(SEG_B, HIGH);   // Encender 
  digitalWrite(SEG_C, HIGH);   // Encender 
  digitalWrite(SEG_D, HIGH);   // Encender 
  digitalWrite(SEG_E, HIGH);   // Encender 
  digitalWrite(SEG_F, HIGH);   // Encender 
  digitalWrite(SEG_G, LOW);   //  Apagar  
  delay(1000);                // Retardo 1 segundo

   // Numero 1
  digitalWrite(SEG_A, LOW);   //  Apagar 
  digitalWrite(SEG_B, HIGH);   // Encender 
  digitalWrite(SEG_C, HIGH);   // Encender 
  digitalWrite(SEG_D, LOW);   //  Apagar 
  digitalWrite(SEG_E, LOW);   //  Apagar 
  digitalWrite(SEG_F, LOW);   //  Apagar
  digitalWrite(SEG_G, LOW);   //  Apagar 
  delay(1000);                // Retardo 1 segundo

    // Numero 2
  digitalWrite(SEG_A, HIGH);   // Encender 
  digitalWrite(SEG_B, HIGH);   // Encender 
  digitalWrite(SEG_C, LOW);   //  Apagar 
  digitalWrite(SEG_D, HIGH);   // Encender 
  digitalWrite(SEG_E, HIGH);   // Encender 
  digitalWrite(SEG_F, LOW);   //  Apagar 
  digitalWrite(SEG_G, HIGH);   // Encender  
  delay(1000);                // Retardo 1 segundo

    // Numero 3
  digitalWrite(SEG_A, HIGH);   // Encender 
  digitalWrite(SEG_B, HIGH);   // Encender 
  digitalWrite(SEG_C, HIGH);   // Encender 
  digitalWrite(SEG_D, HIGH);   // Encender 
  digitalWrite(SEG_E, LOW);   //  Apagar 
  digitalWrite(SEG_F, LOW);   //  Apagar 
  digitalWrite(SEG_G, HIGH);   // Encender  
  delay(1000);                // Retardo 1 segundo

      // Numero 4
  digitalWrite(SEG_A, LOW);   // Encender 
  digitalWrite(SEG_B, HIGH);   // Encender 
  digitalWrite(SEG_C, HIGH);   // Encender 
  digitalWrite(SEG_D, LOW);   //  Apagar 
  digitalWrite(SEG_E, LOW);   // Apagar 
  digitalWrite(SEG_F, HIGH);   // Encender 
  digitalWrite(SEG_G, HIGH);   // Encender  
  delay(1000);                // Retardo 1 segundo
  
   }
