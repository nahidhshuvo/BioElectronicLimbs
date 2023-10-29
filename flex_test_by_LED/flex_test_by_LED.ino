const int ledPin = 3;  
const int flexPin = A0;

//Variables:
int value; //save analog value

void setup(){
  pinMode(ledPin, OUTPUT);  
  Serial.begin(9600);      
}

void loop(){
  value = analogRead(flexPin);         //Read and save analog value from potentiometer
                                       //Print value
  value = map(value, 1017,1023, 0, 255);//Map value 0-1023 to 0-255 (PWM)
  analogWrite(ledPin, value);          //Send PWM value to led
   
  Serial.print("sensor: "); 
  Serial.print(flexPin); 
  Serial.print(" value: "); 
  Serial.println(value);
  delay(100);                          //Small delay
}
