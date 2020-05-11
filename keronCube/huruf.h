void ha(int x, int y, int r, int g, int b) {
  for (int i = 1; i <= 3; i++) {
    dot[x][y + i].merah = r;
    dot[x][y + i].hijau = g;
    dot[x][y + i].biru = b;
  }
  for (int i = 1; i <= 4; i++) {
    dot[x + 4][y + i].merah = r;
    dot[x + 4][y + i].hijau = g;
    dot[x + 4][y + i].biru = b;
  }
  for (int i = 1; i <= 6; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  }
  for (int i = 1; i <= 6; i++) {
    dot[x + i][y + 4].merah = r;
    dot[x + i][y + 4].hijau = g;
    dot[x + i][y + 4].biru = b;
  }
  //cetak();
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void hb(int x, int y, int r, int g, int b) {

  for (int i = 0; i <= 6; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  }
  for (int i = 1; i <= 3; i++) {
    dot[x][y + i].merah = r;
    dot[x][y + i].hijau = g;
    dot[x][y + i].biru = b;
  }
  for (int i = 0; i <= 3; i++) {
    dot[x + 3][y + i].merah = r;
    dot[x + 3][y + i].hijau = g;
    dot[x + 3][y + i].biru = b;
  }
  for (int i = 0; i <= 3; i++) {
    dot[x + 6][y + i].merah = r;
    dot[x + 6][y + i].hijau = g;
    dot[x + 6][y + i].biru = b;
  }
  for (int i = 1; i <= 2; i++) {
    dot[x + i][y + 4].merah = r;
    dot[x + i][y + 4].hijau = g;
    dot[x + i][y + 4].biru = b;
  }
  for (int i = 4; i <= 5; i++) {
    dot[x + i][y + 4].merah = r;
    dot[x + i][y + 4].hijau = g;
    dot[x + i][y + 4].biru = b;
  }

}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void hc(int x, int y, int r, int g, int b) {

  for (int i = 1; i <= 5; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  }
  for (int i = 1; i <= 3; i++) {
    dot[x][y + i].merah = r;
    dot[x][y + i].hijau = g;
    dot[x][y + i].biru = b;
  }
  for (int i = 1; i <= 3; i++) {
    dot[x + 6][y + i].merah = r;
    dot[x + 6][y + i].hijau = g;
    dot[x + 6][y + i].biru = b;
  }
  dot[x + 1][y + 4].merah = r;
  dot[x + 1][y + 4].hijau = g;
  dot[x + 1][y + 4].biru = b;
  dot[x + 5][y + 4].merah = r;
  dot[x + 5][y + 4].hijau = g;
  dot[x + 5][y + 4].biru = b;

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void he(int x, int y, int r, int g, int b) {
  for (int i = 0; i <= 4; i++) {
    dot[x][y + i].merah = r;
    dot[x][y + i].hijau = g;
    dot[x][y + i].biru = b;
  }
  for (int i = 0; i <= 4; i++) {
    dot[x + 6][y + i].merah = r;
    dot[x + 6][y + i].hijau = g;
    dot[x + 6][y + i].biru = b;
  }
  for (int i = 0; i <= 3; i++) {
    dot[x + 3][y + i].merah = r;
    dot[x + 3][y + i].hijau = g;
    dot[x + 3][y + i].biru = b;
  }
  for (int i = 0; i <= 6; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  }

}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


void ho(int x, int y, int r, int g, int b) {
  for (int i = 1; i <= 5; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  }
  for (int i = 1; i <= 5; i++) {
    dot[x + i][y + 4].merah = r;
    dot[x + i][y + 4].hijau = g;
    dot[x + i][y + 4].biru = b;
  }
  for (int i = 1; i <= 3; i++) {
    dot[x][y + i].merah = r;
    dot[x][y + i].hijau = g;
    dot[x][y + i].biru = b;
  }
  for (int i = 1; i <= 3; i++) {
    dot[x + 6][y + i].merah = r;
    dot[x + 6][y + i].hijau = g;
    dot[x + 6][y + i].biru = b;
  }

}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void hg(int x, int y, int r, int g, int b) {
  for (int i = 1; i <= 3; i++) {
    dot[x][y + i].merah = r;
    dot[x][y + i].hijau = g;
    dot[x][y + i].biru = b;
  }
  for (int i = 1; i <= 4; i++) {
    dot[x + 6][y + i].merah = r;
    dot[x + 6][y + i].hijau = g;
    dot[x + 6][y + i].biru = b;
  }
  for (int i = 2; i <= 4; i++) {
    dot[x + 3][y + i].merah = r;
    dot[x + 3][y + i].hijau = g;
    dot[x + 3][y + i].biru = b;
  }
  for (int i = 1; i <= 5; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  }
  for (int i = 3; i <= 6; i++) {
    dot[x + i][y + 4].merah = r;
    dot[x + i][y + 4].hijau = g;
    dot[x + i][y + 4].biru = b;
  }
  dot[x + 1][y + 4].merah = r;
  dot[x + 1][y + 4].hijau = g;
  dot[x + 1][y + 4].biru = b;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void hk(int x, int y, int r, int g, int b) {
  for (int i = 0; i <= 6; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  }
  for (int i = 2; i <= 6; i++) {
    dot[x + i][y + i - 2].merah = r;
    dot[x + i][y + i - 2].hijau = g;
    dot[x + i][y + i - 2].biru = b;
  }
  for (int i = 0; i <= 4; i++) {
    dot[x - i + 4][y + i].merah = r;
    dot[x - i + 4][y + i].hijau = g;
    dot[x - i + 4][y + i].biru = b;
  }
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void hm(int x, int y, int r, int g, int b) {
  for (int i = 0; i <= 6; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  }
  for (int i = 0; i <= 6; i++) {
    dot[x + i][y + 4].merah = r;
    dot[x + i][y + 4].hijau = g;
    dot[x + i][y + 4].biru = b;
  }
  for (int i = 2; i <= 3; i++) {
    dot[x + i][y + 2].merah = r;
    dot[x + i][y + 2].hijau = g;
    dot[x + i][y + 2].biru = b;
  }
  dot[x + 1][y + 1].merah = r;
  dot[x + 1][y + 1].hijau = g;
  dot[x + 1][y + 1].biru = b;
  dot[x + 1][y + 3].merah = r;
  dot[x + 1][y + 3].hijau = g;
  dot[x + 1][y + 3].biru = b;

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------


void hn(int x, int y, int r, int g, int b) {
  for (int i = 0; i <= 6; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  }
  for (int i = 0; i <= 6; i++) {
    dot[x + i][y + 4].merah = r;
    dot[x + i][y + 4].hijau = g;
    dot[x + i][y + 4].biru = b;
  }
  for (int i = 0; i <= 6; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  } for (int i = 2; i <= 5; i++) {
    dot[x + i][y + i - 1].merah = r;
    dot[x + i][y + i - 1].hijau = g;
    dot[x + i][y + i - 1].biru = b;
  }


}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------

void hr(int x, int y, int r, int g, int b) {
  for (int i = 0; i <= 6; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  }
  for (int i = 0; i <= 3; i++) {
    dot[x][y + i].merah = r;
    dot[x][y + i].hijau = g;
    dot[x][y + i].biru = b;
  }
  for (int i = 0; i <= 3; i++) {
    dot[x + 3][y + i].merah = r;
    dot[x + 3][y + i].hijau = g;
    dot[x + 3][y + i].biru = b;
  }
  for (int i = 1; i <= 2; i++) {
    dot[x + i][y + 4].merah = r;
    dot[x + i][y + 4].hijau = g;
    dot[x + i][y + 4].biru = b;
  }
  for (int i = 2; i <= 4; i++) {
    dot[x + i + 2][y + i].merah = r;
    dot[x + i + 2][y + i].hijau = g;
    dot[x + i + 2][y + i].biru = b;
  }
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void hu(int x, int y, int r, int g, int b) {
  for (int i = 0; i <= 5; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  }
  for (int i = 0; i <= 5; i++) {
    dot[x + i][y + 4].merah = r;
    dot[x + i][y + 4].hijau = g;
    dot[x + i][y + 4].biru = b;
  }
  for (int i = 1; i <= 3; i++) {
    dot[x + 6][y + i].merah = r;
    dot[x + 6][y + i].hijau = g;
    dot[x + 6][y + i].biru = b;
  }
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void hv(int x, int y, int r, int g, int b) {

  for (int i = 0; i <= 4; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  }
  for (int i = 0; i <= 4; i++) {
    dot[x + i][y + 4].merah = r;
    dot[x + i][y + 4].hijau = g;
    dot[x + i][y + 4].biru = b;
  }
  dot[x + 5][y + 1].merah = r;
  dot[x + 5][y + 1].hijau = g;
  dot[x + 5][y + 1].biru = b;
  dot[x + 5][y + 3].merah = r;
  dot[x + 5][y + 3].hijau = g;
  dot[x + 5][y + 3].biru = b;
  dot[x + 6][y + 2].merah = r;
  dot[x + 6][y + 2].hijau = g;
  dot[x + 6][y + 2].biru = b;

}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

