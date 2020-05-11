void pacman() {
  cetak();
  clrscr();
  if (score[0] != score[1] ) {
    lcd.clear();
    lcd.print(F("Score :"));
    lcd.print(score[0]);

    score[1] = score[0];
  }
  //Serial.println(interval);
  if (ini) {
    ini = 0;
    a = 6;
    b = 1;
    c = 9;
    d = 28;
    score[0] = 0;
    life[0] = 1;
    interval = 70;
    lompat = 0;
    jatuh = 0;
    // life[1]=0;
  }
  if (life[0]) {


    for (int i = 0; i < 32; i++) {
      dot[13][i].hijau = 1;
    }
    pac(a, b);
    misil(c, d);

    jeda(d, 0, 18, interval);
    if (d < -3) {
      d = 35;
      score[0] += 100;
      tone(48, 444, 300);
      if (score[0] % 700)c = 9;
      else c = 2;
      interval *= 0.96;
    }
    if (!lompat && !jatuh)pencet(lompat, 1, 1);

    if (lompat)jeda(a, 0, 16, 120);
    if (a <= 0) {
      lompat = 0;
      jatuh = 1;
    }
    if (jatuh)jeda(a, 1, 16, 120);
    if (a >= 6 && jatuh)jatuh = 0;


    for (int i = 0; i <= 6; i++) {
      for (int j = 0; j <= 13; j++) {
        if (dot[j][i].biru == 1 && dot[j][i].merah == 1)kena = 1;
      }
    }
    if (kena) {
      tone(48, 262, 800);
      d = 35;
      life[0]--;
    }
    kena = 0;
  } else {
    gameover();
    pencet(restart, 1, 500);
    if (restart > 0) {
      life[0] = 1;
      score[0] = 0;
      restart = 0;
      ini = 1;
      berhenti(100);
    }
  }
}

