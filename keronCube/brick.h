void brick() {
  if (ini) {
    a = 8;
    b = 15;
    ini = 0;
    c = 13;
    d = 14;
    interval = 100;

    lepas = 0;
    for (int i = 0; i < 100; i++) {
      st[i] = 2;
      ss[i] = 1;
    }
  }
  cetak();
  clrscr();


  dot[a][b].merah = 1;
  dot[a][b].biru = 1;
  //dot[a][b].hijau = 1;


  plat(c, d);
  joyx(c, 75);
  if (c >= 25)c = 25;
  if (c <= 0)c = 0;
  if (lepas) {
    jedaa(a, b, vy, vx, 20, interval);

  } else {
    a = 13;
    b = c + 3;
    pencet(lepas, 1, 10);
  }
  //Serial.print(a);
  //Serial.print("     ");
  //Serial.println(b);
  if (a >= 15) {
    lepas = 0;
  }
  if (a <= 0) {
    a = 0;
    vy = 1;
  }
  if (b <= 0) {
    b = 0;
    vx = 1;
  }
  if (b >= 31) {
    b = 31;
    vx = 0;
  }
  if (a >= d ) {

    if (b == c || b == c + 6) {
      //interval = 100;
      interval = 65;
      vy = 0;

    }
    if (b == c + 1 || b == c + 5) {
      //interval = 100;
      interval = 85;
      vy = 0;

    } else if (b == c + 2 || b == c + 4) {
      //interval = 100;
      interval = 90;
      vy = 0;
    } else if (b == c + 3) {
      interval = 100;
      vy = 0;
    }
    if (b >= c && b <= c + 1) {
      vx = 0;
      //b++;
    } else if (b >= c + 5 && b <= c + 6) {
      vx = 1;
      //b--;
    }

  }
  for (int i = 0; i < 7; i++) {
    stone(2, 2 + i * 4, ss[i]);
  }
  for (int i = 0; i < 4; i++) {
    stone(5, 8 + i * 4, st[i]);
  }

}

