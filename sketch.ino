String valorPWM = "";
String valorPWM2 = "";
String portaLed1 = "";
String portaLed2 = "";
char caractere;

void setup()
{
  pinMode(23, OUTPUT);
  pinMode(22, OUTPUT);

  Serial.begin(115200);
	
}

void loop()
{
  if(Serial.available() == 9)
  {
    configuraLed1();
    configuraLed2();

    analogWrite(portaLed1.toInt(), valorPWM.toInt());
    analogWrite(portaLed2.toInt(), valorPWM2.toInt());

    resetaVariaveis();

  }

}

void configuraLed1(){

  caractere = Serial.read();
  portaLed1 += caractere;
  caractere = Serial.read();
  portaLed1 += caractere;

  caractere = Serial.read();
  valorPWM += caractere;
  caractere = Serial.read();
  valorPWM += caractere;
  caractere = Serial.read();
  valorPWM += caractere;

}


void configuraLed2(){
  caractere = Serial.read();
  portaLed2 += caractere;
  caractere = Serial.read();
  portaLed2 += caractere;

  caractere = Serial.read();
  valorPWM2 += caractere;
  caractere = Serial.read();
  valorPWM2 += caractere;
}

void resetaVariaveis(){

  valorPWM = "";
  valorPWM2 = "";

  portaLed1 = "";
  portaLed2 = "";

}

