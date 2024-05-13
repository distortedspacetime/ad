
#include <LiquidCrystal.h>
#include <arduino.h>
LiquidCrystal lcd(0x3F, 16, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin();
  for( int i=2; i<7; i++){
    pinMode(i, INPUT);
  }

}

void loop() {
  int readValue[6] = {digitalRead(2),digitalRead(3),digitalRead(4),digitalRead(5),digitalRead(6)};
  if(readValue[1] == HIGH) {

  }
  lcd.setCursor(5, 0);    // 커서를 5, 0에 가져다 놓아라. (열, 행)
  lcd.print("Hi ^^");     // 5, 0에 Hi ^^를 출력해라.
  delay(1000);            // 1초 대기
  lcd.setCursor(3, 1);    // 커서를 3, 1로 가져다 놓아라. (열, 행)
  lcd.print("Codingrun"); // Codingrun을 입력해라.
  delay(1000);            // 1초 대기 
  lcd.clear();            // 글자를 모두 지워라.
  delay(1000);
}