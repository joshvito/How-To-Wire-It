//ItKindaWorks - Creative Commons 2016
//github.com/ItKindaWorks
//
//Simple Arduino RGB LED mood light


//Change these to match the pins on your Arduino - make sure theyre PWM capable
int greenPin = 3;
int bluePin = 6;
int redPin = 5;

void setup(){
	pinMode(greenPin, OUTPUT);
	pinMode(bluePin, OUTPUT);
	pinMode(redPin, OUTPUT);
}

void loop(){
		fadeFromTo(bluePin, greenPin);
		fadeFromTo(greenPin, redPin);
		fadeFromTo(redPin, bluePin);
}

void fadeFromTo(int from, int to){
	for(int i = 0; i < 255; i++){
		analogWrite(to, i);
		delay(1);
		analogWrite(from, 255 - i);
		delay(2);
	}
}
