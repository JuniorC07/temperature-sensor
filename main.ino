int sensor = A1;
int value = 0;

float volt, millivolt, valueCel;

void setup()
{
  pinMode(sensor,INPUT);
  Serial.begin(9600); 
}


void loop()
{
  value = analogRead(A0);
  volt = (value * 5.0)/1024;
  millivolt = volt * 1000;
  
  valueCel =  (millivolt-500)/10 ;
  
  Serial.print("Celsius: ");
  Serial.println(valueCel);  
  
  delay(2000);
  
}
