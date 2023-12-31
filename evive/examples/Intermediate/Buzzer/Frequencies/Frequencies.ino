/*
  evive buzzer test code
  
  The evive's tone() command will play notes of a given frequency.
  
  Created by Pankaj Verma.
  This code is in public domain. 
  
  Explore more : https://thestempedia.com/tutorials/piezo-buzzer/
*/
const int buzzerPin = 46;
int baseFrequency = 262;
int maxFrequency = 1030;
void setup() {
  // put your setup code here, to run once:
  pinMode (buzzerPin, OUTPUT);
  for (baseFrequency = 62 ; baseFrequency < maxFrequency; baseFrequency += 100)
  {
    tone(buzzerPin, baseFrequency, 1000); //this function plays sound of given frequency on buzzer.
    delay(1000);
  }
}

void loop() {

  // put your main code here, to run repeatedly:

}
