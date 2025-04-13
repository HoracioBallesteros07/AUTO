// PINES DEL SENSOR ULTRA SONICO

long duracion;
int distancia;

int trigPin = 12;
int echoPin = 11;

int in1 = 8;
int in2 = 9;
int in3 = 6;
int in4 = 7;

void setup (){
//SENSOR ULTRASONICO 
pinMode (trigPin,OUTPUT);
pinMode (echoPin,INPUT);

//MOTORES
pinMode (in1,OUTPUT);
pinMode (in2,OUTPUT);
pinMode (in3,OUTPUT);
pinMode (in4,OUTPUT);

Serial.begin (9600);

}

void loop (){
//MEDIR DISTANCIA

digitalWrite (trigPin,LOW);
delayMicroseconds (2);
digitalWrite (trigPin,HIGH);
delayMicroseconds (10);
digitalWrite (trigPin,LOW);

duracion = pulseIn (echoPin,HIGH);
distancia = duracion * 0.034 / 2;

Serial.print ("Distancia: ");
Serial.println (distancia);
Serial.println ("cm");
delay(400);

if (distancia>15){
  //AVANZAR
  digitalWrite (in1,LOW);
  digitalWrite (in2,HIGH);

  digitalWrite (in3,HIGH);
  digitalWrite (in4,LOW);
}
else {
  //GIRAR DERECHA
  digitalWrite (in1,LOW);
  digitalWrite (in2,HIGH);


  digitalWrite (in3,LOW);
  digitalWrite (in4,HIGH);
  delay(500); //GIRA UN RATO

  //LUEGO AVANZA
  digitalWrite (in1,LOW);
  digitalWrite (in2,HIGH);

  digitalWrite (in3,LOW);
  digitalWrite (in4,HIGH);
}
delay (200);
}



/*

// FINES DEL SENSOR ULTRA SONICO

long duracion;
int distancia;

int trigPin = 12;
int echoPin = 11;

int in1 = 8;
int in2 = 9;
int in3 = 6;
int in4 = 7;

void setup (){
//SENSOR ULTRASONICO 
pinMode (trigPin,OUTPUT);
pinMode (echoPin,INPUT);

//MOTORES
pinMode (in1,OUTPUT);
pinMode (in2,OUTPUT);
pinMode (in3,OUTPUT);
pinMode (in4,OUTPUT);

Serial.begin (9600);

}

void loop (){
//MEDIR DISTANCIA

digitalWrite (trigPin,LOW);
delayMicroseconds (2);
digitalWrite (trigPin,HIGH);
delayMicroseconds (10);
digitalWrite (trigPin,LOW);

duracion = pulseIn (echoPin,HIGH);
distancia = duracion * 0.034 / 2;

Serial.print ("Distancia: ");
Serial.println (distancia);
Serial.println ("cm");
delay(400);

if (distancia>20){
  //AVANZAR
  digitalWrite (in1,LOW);
  digitalWrite (in2,HIGH);

  digitalWrite (in3,HIGH);
  digitalWrite (in4,LOW);
}
else {
  //GIRAR DERECHA
  digitalWrite (in1,LOW);
  digitalWrite (in2,HIGH);


  digitalWrite (in3,LOW);
  digitalWrite (in4,HIGH);
  delay(500); //GIRA UN RATO

  //LUEGO AVANZA
  digitalWrite (in1,LOW);
  digitalWrite (in2,HIGH);

  digitalWrite (in3,LOW);
  digitalWrite (in4,HIGH);
}
delay (200);
}


*/
