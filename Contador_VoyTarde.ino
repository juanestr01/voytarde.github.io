#include <LiquidCrystal.h>
int V0 = 3;
int RS = 4;
int E = 5;
int D4 = 6;
int D5 = 7;
int D6 = 8;
int D7 = 9;
int Escaleras = 0;
int Ascensor = 0;
char juanes[16];
char David[16];

LiquidCrystal lcd (RS, E, D4, D5, D6, D7);

void setup() {
  // put your setup code here, to run once:
  analogWrite(V0,50);
  lcd.begin(16,2);
  pinMode(2,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorEscal = digitalRead(2);
  int sensorAsc = digitalRead(13);
  if (sensorEscal == HIGH) {
    Escaleras = Escaleras +1;
    lcd.setCursor(0, 1);
    sprintf(juanes,"Escaleras %d",Escaleras );
    lcd.print(juanes);
    delay(1000);
    }
  if (sensorAsc == HIGH) {
    Ascensor = Ascensor +1;
    lcd.setCursor(0, 0);
    sprintf(David,"Ascensor %d",Ascensor );
    lcd.print(David);
    delay(1000);
    }
}
