void gambar() {

  //clrscr();

  int n = a, m = b;
  //if(analogRead(A4)<400)a++;
  //else if(analogRead(A4)>700)a--;
  joyy(a, 100);
  joyx(b, 100);

  if (a > 15)a = 15;
  if (a < 0)a = 0;
  if (b > 31)b = 31;
  if (b < 0)b = 0;
  dot[a][b].biru = 1;
  //if(n!=a || m!=b)dot[a][b].biru=1;
  pencet(dot[a][b].hijau, 3, 500);
  dot[a][b].hijau = dot[a][b].hijau % 2;
  pencet(dot[a][b].merah, 1, 500);
  dot[a][b].merah = dot[a][b].merah % 2;
  pencet(biru[a][b], 2, 500);
  biru[a][b] = biru[a][b] % 2;
  //dot[a][b].biru=dot[a][b].biru%2;
  cetak();
  //Serial.println(biru[a][b]);
  if (biru[a][b] == 0)dot[a][b].biru = 0;

}
