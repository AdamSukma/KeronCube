void setup() {
  //set pins to output so you can control the shift register


  Serial.begin(9600);
  lcd.begin (16, 2); //  <<------- My LCD was 16x2


  // Switch on the backlight
  lcd.setBacklightPin(BACKLIGHT_PIN, POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.home (); // go home
  lcd.print("KERON CUBE");
  //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  pinMode(LP, OUTPUT);
  pinMode(ClkP, OUTPUT);
  pinMode(R1P, OUTPUT);
  pinMode(B1P, OUTPUT);
  pinMode(G1P, OUTPUT);
  pinMode(R2P, OUTPUT);
  pinMode(B2P, OUTPUT);
  pinMode(G2P, OUTPUT);
  pinMode(AP, OUTPUT);
  pinMode(BP, OUTPUT);
  pinMode(CP, OUTPUT);
  pinMode(OEP, OUTPUT);
  Serial.begin(9600);
  digitalWrite(AP, LOW);
  digitalWrite(BP, LOW);
  digitalWrite(CP, LOW);
  digitalWrite(LP, LOW);
  digitalWrite(OEP, LOW);


  //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  for (int i = 0; i < 6; i++) {
    pinMode(pin[i], OUTPUT);
  }
  pinMode(48, OUTPUT);
  pinMode(49, INPUT);
  pinMode(52, INPUT);
  pinMode(51, INPUT);
  pinMode(50, INPUT);

  digitalWrite(49, HIGH);
  digitalWrite(52, HIGH);
  digitalWrite(51, HIGH);
  digitalWrite(50, HIGH);


}
