

int q = 0;
int acak[] = {2, 10, 7, 5, 16, 13, 27, 30};
void shootertest() {
  test = 100;
  q++;
  if (q > 100000)q = 0;
  clrscr();
  //
  if (life[0] > 0) {
    joyy(a, 100);
    joyx(b, 100);
    pencet(tembak, 1, 1000);
    jeda(c, 1, 12, interval);

    if (tembak) {
      if (f == 14)e = b;
      jeda(f, 0, 14, 100);

    }
    if (f == 0) {
      f = 15;
      tembak = 0;

    }
    if (a > 15)a = 15;
    if (a < 0)a = 0;
    if (b > 29)b = 29;
    if (b < 2)b = 2;
    if (c >= 15) {
      c = 0;
      tembak = 0;
      f = 0;
      // tone(48,523,300);
      tone(48, 262, 600);
      b = 16;
      d = acak[q % 8];
      interval = 700;
      //transmit(17);
      life[0]--;
    }
    if (tembak && f < 13) {
      dot[f][e].merah = 1;
      dot[f][e].biru = 1;
      dot[f][e].hijau = 1;
    } else {
      dot[f][e].merah = 0;

      dot[f][e].biru = 0;
      dot[f][e].hijau = 0;
    }
    shooter(14, b);

    star(c, d, 0, 1, 0);

    if ((f <= c) && (e == d || e == d - 1 || e == d + 1) ) {
      c = 0;
      f = 15;
      tembak = 0;
      d = acak[q % 8];
      tone(48, 523, 100);
      interval *= 0.9;
      score[0] += 100;
      /// transmit(16);
    }
    if (interval <= 50)interval = 50;
    // Serial.println(f);
    if (score[0] != score[1] || life[0] != life[1]) {
      lcd.clear();
      lcd.print(F("Score :"));
      lcd.print(score[0]);
      lcd.setCursor (0, 1);
      lcd.print(F("Life  :"));
      lcd.print(life[0]);
      life[1] = life[0];
      score[1] = score[0];
    }
  } else {
    gameover();
    pencet(restart, 1, 500);
    if (restart > 0) {
      life[0] = 3;
      score[0] = 0;
      restart = 0;
    }
  }
  test = 100;
  cetak();

}

