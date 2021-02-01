int PIR_Sensor = 0;
int photoResistor = 0;

void setup()
{

	pinMode(A0, INPUT);
	pinMode(13, INPUT);
	pinMode(9, OUTPUT);
	pinMode(3, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	photoResistor = analogRead(A0);
	PIR_Sensor = digitalRead(13);
	Serial.println(photoResistor);
	delay(1000);
	Serial.println(PIR_Sensor);
	delay(1000);
if(photoResistor < 200)
	{
	digitalWrite(9,HIGH);
	delay(50);
	}
	else
	{
		digitalWrite(9,LOW);
		delay(50);
	}

	if(PIR_Sensor == HIGH)
	{
		digitalWrite(3,HIGH);
		delay(100);
	}
	else
	{	
		digitalWrite(3,LOW);
		delay(100);
	}
}