float inputSignal;
float outputSignal;
int delayTime = 10;
int inA = 0;
int inB = 1;
int inC = 2;
int outA = 9;
int outB = 10;
int outC = 11;

void soundToLight(inputPin, outputPin){
  inputSignal = analogRead(inputPin);
  outputSignal = inputSignal/4;
  digitalWrite(outputPin, outputSignal);
  delay(delayTime);
}

void setup() {
  pinMode(outA, OUTPUT);
  pinMode(outB, OUTPUT);
  pinMode(outC, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}
