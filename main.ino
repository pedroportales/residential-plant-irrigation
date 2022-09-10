const int bomb = 3;
const int pinoSensor = A0;

void setup(){
  pinMode(bomb, OUTPUT);
  Serial.begin(9600); //INICIALIZA A SERIAL
  Serial.println("Lendo a umidade do solo..."); //IMPRIME O TEXTO NO MONITOR SERIAL
  delay(2000); //INTERVALO DE 2 SEGUNDOS
}

void loop(){
  int sensorValue = analogRead(pinoSensor);
  Serial.print("Falta de umidade do solo: "); 
  Serial.println(sensorValue); 
  delay(500); //INTERVALO DE MEIO SEGUNDO
  
  if(sensorValue >= 800){
  digitalWrite(bomb, HIGH);
  } else {
    digitalWrite(bomb, LOW);
  }
    
}
