int ledD7 = D7;

void messageHandler(const char *event, const char *data)
{
    String result = String(data);
       
  if (result == "wave") {
      
        digitalWrite(ledD7,HIGH);
        delay(500);
        digitalWrite(ledD7,LOW);
        delay(500);
        digitalWrite(ledD7,HIGH);
        delay(500);
        digitalWrite(ledD7,LOW);
        delay(500);
        digitalWrite(ledD7,HIGH);
        delay(500);
        digitalWrite(ledD7,LOW);
        
    }else if(result == "pat"){
        
        digitalWrite(ledD7,HIGH);
        delay(100);
        digitalWrite(ledD7,LOW);
        delay(100);
        digitalWrite(ledD7,HIGH);
        delay(100);
        digitalWrite(ledD7,LOW);
        delay(100);
        digitalWrite(ledD7,HIGH);
        delay(100);
        digitalWrite(ledD7,LOW);
        delay(100);    
        
        digitalWrite(ledD7,HIGH);
        delay(1000);
        digitalWrite(ledD7,LOW);
        delay(1000);
        digitalWrite(ledD7,HIGH);
        delay(1000);
        digitalWrite(ledD7,LOW);
        delay(1000);
        digitalWrite(ledD7,HIGH);
        delay(1000);
        digitalWrite(ledD7,LOW);
        delay(1000);
        
        digitalWrite(ledD7,HIGH);
        delay(100);
        digitalWrite(ledD7,LOW);
        delay(100);
        digitalWrite(ledD7,HIGH);
        delay(100);
        digitalWrite(ledD7,LOW);
        delay(100);
        digitalWrite(ledD7,HIGH);
        delay(100);
        digitalWrite(ledD7,LOW);
    }
}
void setup(){

    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", messageHandler, ALL_DEVICES);
    Serial.begin(9600);
    pinMode(ledD7, OUTPUT);
    
}
void loop(){}