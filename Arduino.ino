//Creado por Omar Ganem Sandoval, ajustes hechos por Diego Ganem Sandoval
#include <Servo.h>

//Se asignan los servos
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;


char tecla;

void setup ()
{
  
//Se asignaron las entradas del arduino con relacion a los servos motores
  servo1.attach(2);
  servo2.attach(4); 
  servo3.attach(7);
  servo4.attach(8);
  servo5.attach(12);

  Serial.begin(9600);
}

void loop ()
{
  if (Serial.available())
  {
    tecla = Serial.read();
    
  }
  //Aqui se pone cada valor de los servos para que el brazo realiza diferentes funciones 
  //Sirve para cerrar todos los dedos de la mano 
  if (tecla=='q'||tecla=='Q')
  {
  servo1.write(180);
  servo2.write(180);
  servo3.write(180);
  servo4.write(180);
  servo5.write(180);
  Serial.print("Cerrar");
  }
  
  //
  if (tecla=='w'||tecla=='W')
  {
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  Serial.print("Semiflexionar"); 
  }
  //
  if (tecla=='e'||tecla=='E')
  {
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0); 
  servo5.write(0);
  Serial.print("Extender");
  }
  //Comandos Pulgar
  if (tecla=='t'||tecla=='T')
  {
  servo1.write(180);
  Serial.print("PULGAR_Cerrando");
  }
  if (tecla=='y'||tecla=='Y')
  {
  servo1.write(90);
  Serial.print("PULGAR_1/2Cerrado");
  }
  if (tecla=='u'||tecla=='U')
  {
  servo1.write(0);
  Serial.print("PULGAR_Extendido");
  }
  //Comandos Indice
  if (tecla=='A'||tecla=='a')
  {
  servo2.write(180);
  Serial.print("INDICE_Cerrando");
  }
  if (tecla=='S'||tecla=='s')
  {
  servo2.write(90);
  Serial.print("INDICE_Semiflexionada");
  }
  if (tecla=='d'||tecla=='D')
  {
  servo2.write(0);
  Serial.print("INDICE_Extendido");
  }
  //Comandos Medio
  if (tecla=='g'||tecla=='G')
  {
  servo3.write(180);
  Serial.print("Medio_Cerrado");
  }
  if (tecla=='h'||tecla=='H')
  {
  servo3.write(90);
  Serial.print("Medio_Semiflexionado");
  }
  if (tecla=='j'||tecla=='J')
  {
  servo3.write(0);
  Serial.print("Medio_Extendido");
  }

  //Comandos Anular
  if (tecla=='z'||tecla=='Z')
  {
  servo4.write(180);
  Serial.print("Anular_Cerrado");
  }
  if (tecla=='x'||tecla=='X')
  {
  servo4.write(90);
  Serial.print("Anular_semiflexionado");
  }
  if (tecla=='c'||tecla=='C')
  {
  servo4.write(0);
  Serial.print("Anular_Extendido");
  }
  //Comandos Menique
  if (tecla=='b'||tecla=='B')
  {
  servo5.write(180);
  Serial.print("Minique_Cerrado");
  }
  if (tecla=='n'||tecla=='N')
  {
  servo5.write(90);
  Serial.print("Minique_Semiflexionado");
  }
  if (tecla=='m'||tecla=='M')
  {
  servo5.write(0);
  Serial.print("Minique_Extendido");
  }
  else if (tecla=='P'||tecla=='p')
  {
  servo1.write(180);
   servo2.write(180);
  servo3.write(180);
  servo4.write(180);
  servo5.write(180);
  Serial.print("5 DEDOS");
  }
}
