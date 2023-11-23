// Control Four led using HC-05 Bluetooth module

void setup() // put your setup code here, to run once:
{
   Serial.begin(9600);  
   pinMode(9,OUTPUT);  //connect Red led at pin no. 09
   pinMode(10,OUTPUT); //connect Green led at pin no. 10
   pinMode(11,OUTPUT); //connect Blue led at pin no. 11
   pinMode(12,OUTPUT); //connect Yellow led at pin no. 12
}

void loop() {
  
      if(Serial.available()>0)
      {
        char data= Serial.read();// read the data received from the bluetooth module
        switch(data)
       {
        case '1':              // TURN ON RED LED ONLY
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
        break;
         
        case '2':             //TURN ON GREEN LED ONLY
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
        break;
        case '3':            //   TURN ON BLUE LED ONLY
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
        digitalWrite(12,LOW);
        break;
        case '4':             //TURN ON YELLOW LED ONLY
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,HIGH );
        break;
        case '5':           // TURN OFF ALL LED
         digitalWrite(9,LOW);
         digitalWrite(10,LOW);
         digitalWrite(11,LOW);
         digitalWrite(12,LOW);
        break;
       }  
      }
      delay(50);
}
