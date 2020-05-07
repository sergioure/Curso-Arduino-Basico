//***** ELEKTRONICA PROJECT ************
// ********* CURSO BASICO DE ARDUINO *********

/*  Practica1 Conectar Leds a los pines 12 hasta el 8 y hacer que se enciendan de forma secuencial cada segundo.  Luego que se apaguen todos y vuelva a inicial el programa. */

// la función de configuración se ejecuta una vez al pulsar reinicio 
void setup() {
  
  pinMode(12, OUTPUT);// Inicia el Pin12 como salida
  pinMode(11, OUTPUT);// Inicia el Pin11 como salida
  pinMode(10, OUTPUT);// Inicia el Pin10 como salida
  pinMode(9, OUTPUT);// Inicia el Pin9 como salida
  pinMode(8, OUTPUT);// Inicia el Pin8 como salida
}

// la función de bucle se ejecuta una y otra vez para siempre
void loop() {
  digitalWrite(12, HIGH);   // Encender  LED  (HIGH nivel de voltaje alto 5V)
  delay(1000);              // Retardo 1 segundo
  digitalWrite(11, HIGH);   // Encender  LED  (HIGH nivel de voltaje alto 5V)
  delay(1000);              // Retardo 1 segundo
  digitalWrite(10, HIGH);   // Encender  LED  (HIGH nivel de voltaje alto 5V)
  delay(1000);              // Retardo 1 segundo
  digitalWrite(9, HIGH);   // Encender  LED  (HIGH nivel de voltaje alto 5V)
  delay(1000);              // Retardo 1 segundo
  digitalWrite(8, HIGH);   // Encender  LED  (HIGH nivel de voltaje alto 5V)
  delay(1000);              // Retardo 1 segundo

   digitalWrite(8, LOW);   // Apagar LED
   digitalWrite(9, LOW);   // Apagar LED
   digitalWrite(10, LOW);   // Apagar LED
   digitalWrite(11, LOW);   // Apagar LED
   digitalWrite(12, LOW);   // Apagar LED
   delay(1000);              // Retardo 1 segundo
  
}
