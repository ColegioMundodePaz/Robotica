int pot;

void setup(){
    Serial.begin(9600); // iniciamos la comunicacion serial 
}

void loop(){
    pot = analogRead(A0);   
    Serial.println(pot);
    delay(10);
}