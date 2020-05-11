
void flappy() {
  if (ini) {
    a = 14;
    b = 3;
    ini = 0;
    jatuh = 1;
    aa = 1;
    lompat = 0;
    c = 31;
    d = 31;
  }
  cetak();
  clrscr();

  pipe(5, c, 0);
  pipe(10, c, 1);

  dot[a][b].biru = 1;
  dot[a][b + 1].biru = 1;
  dot[a + 1][b].biru = 1;
  dot[a + 1][b + 1].biru = 1;


  jeda(c, 0, 24, 100);
  jeda(d, 0, 26, 100);
  if (!lompat && !jatuh) {
    pencet(lompat, 1, 1);
    if (aa) {
      aa = 0;
      t = a;
      // Serial.println(t);
    }
  }

  if (lompat)jeda(a, 0, 16, 100);
  if (a <= t - 3) {
    lompat = 0;
    jatuh = 1;
  }
  if (jatuh || !lompat)jeda(a, 1, 16, 100);
  if (a >= t - 2 && jatuh) {
    jatuh = 0;


  }
  if (a >= t - 2)aa = 1;

  Serial.print(c);
  Serial.print("   ");
  Serial.println(d);


  if (c <= -5)c = 31;
  if (d <= -5)d = 31;
  if (a >= 14) {
    a = 14;
  }
  if (a <= 0) {
    a = 0;
    lompat = 0;
    jatuh = 1;

  }
  if (b <= 0) {
    b = 0;

  }
  if (b >= 31) {
    b = 31;

  }
}

