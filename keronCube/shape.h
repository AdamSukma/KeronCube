void shooter(int x, int y) {
  dot[x][y].hijau = 1;
  dot[x][y].merah = 0;
  dot[x][y].biru = 0;;
  dot[x][y - 1].merah = 1;
  dot[x][y - 1].biru = 0;
  dot[x][y - 1].hijau = 0;
  dot[x][y + 1].merah = 1;
  dot[x][y + 1].biru = 0;
  dot[x][y + 1].hijau = 0;
  dot[x - 1][y].merah = 1;
  dot[x - 1][y].biru = 0;
  dot[x - 1][y].hijau = 0;
  for (int i = -2; i <= 2; i++) {
    dot[x + 1][y + i].merah = 1;
    dot[x + 1][y + i].hijau = 0;
    dot[x + 1][y + i].biru = 0;;
  }

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void star(int x, int y, int r, int g, int b) {
  dot[x + 1][y].merah = r;
  dot[x - 1][y].merah = r;
  dot[x][y + 1].merah = r;
  dot[x][y - 1].merah = r;
  dot[x + 1][y].biru = b;
  dot[x - 1][y].biru = b;
  dot[x][y + 1].biru = b;
  dot[x][y - 1].biru = b;
  dot[x + 1][y].hijau = g;
  dot[x - 1][y].hijau = g;
  dot[x][y + 1].hijau = g;
  dot[x][y - 1].hijau = g;

}


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gameover() {
  hg(0, 1, 1, 0, 0);
  ha(0, 7, 1, 0, 0);
  hm(0, 13, 1, 0, 0);
  he(0, 19, 1, 0, 0);
  ho(8, 7, 1, 0, 0);
  hv(8, 13, 1, 0, 0);
  he(8, 19, 1, 0, 0);
  hr(8, 25, 1, 0, 0);

}

void homescreen() {
  hk(0, 1, 0, 0, 1);
  he(0, 7, 0, 0, 1);
  hr(0, 13, 0, 0, 1);
  ho(0, 19, 0, 0, 1);
  hn(0, 25, 0, 0, 1);
  hc(8, 9, 0, 1, 0);
  hu(8, 15, 0, 1, 0);
  hb(8, 21, 0, 1, 0);
  he(8, 27, 0, 1, 0);
  for (int i = 1; i < 6; i++) {
    dot[8][i].merah = 1;
  }
  for (int i = 1; i <= 6; i++) {
    dot[14][i].merah = 1;
  }
  for (int i = 8; i <= 14; i++) {
    dot[i][1].merah = 1;
  }
  for (int i = 8; i <= 14; i++) {
    dot[i][7].merah = 1;
  }
  for (int i = 1; i <= 6; i++) {
    dot[8][i].merah = 1;
  }
}

//--------------------------------------------------------------

void kotak(int x, int y, int r, int g, int b) {
  for (int i = 0; i <= 7; i++) {
    dot[x][y + i].merah = r;
    dot[x][y + i].hijau = g;
    dot[x][y + i].biru = b;
  }
  for (int i = 0; i <= 7; i++) {
    dot[x + 7][y + i].merah = r;
    dot[x + 7][y + i].hijau = g;
    dot[x + 7][y + i].biru = b;
  }
  for (int i = 0; i <= 7; i++) {
    dot[x + i][y].merah = r;
    dot[x + i][y].hijau = g;
    dot[x + i][y].biru = b;
  }
  for (int i = 0; i <= 7; i++) {
    dot[x + i][y + 7].merah = r;
    dot[x + i][y + 7].hijau = g;
    dot[x + i][y + 7].biru = b;
  }

}
void pensil(int x, int y) {
  for (int i = 0; i <= 7; i++) {
    dot[x][y + i].hijau = 1;
    dot[x + 7][y + i].hijau = 1;
    dot[x + i][y].hijau = 1;
    dot[x + i][y + 7].hijau = 1;
  }
  dot[x + 1][y + 5].biru = 1;
  dot[x + 2][y + 4].biru = 1;
  dot[x + 2][y + 6].biru = 1;
  dot[x + 3][y + 3].biru = 1;
  dot[x + 3][y + 5].biru = 1;
  dot[x + 4][y + 2].biru = 1;
  dot[x + 4][y + 4].biru = 1;
  dot[x + 5][y + 2].biru = 1;
  dot[x + 5][y + 3].biru = 1;
  dot[x + 5][y + 2].hijau = 1;
  dot[x + 5][y + 3].hijau = 1;
  dot[x + 4][y + 2].hijau = 1;
}

//-------------------------------------------------------------------------------------------------------------------------------------------

void pac(int x, int y) {
  for (int i = 2; i <= 4; i++) {
    dot[x][y + i].biru = 1;
    dot[x + 6][y + i].biru = 1;

  }
  for (int i = 2; i <= 4; i++) {
    dot[x + i][y].biru = 1;
  }
  dot[x + 1][y + 1].biru = 1;
  dot[x + 5][y + 1].biru = 1;
  dot[x + 1][y + 5].biru = 1;
  dot[x + 5][y + 5].biru = 1;
  dot[x + 2][y + 4].biru = 1;
  dot[x + 4][y + 4].biru = 1;
  dot[x + 3][y + 3].biru = 1;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void misil(int x, int y) {

  for (int i = 0; i <= 2; i++) {
    if (y - i >= 0 && y - i <= 31) dot[x][y - i].merah = 1;
    if (y - i >= 0 && y - i <= 31) dot[x + 2][y - i].merah = 1;

  }
  if (y >= 0 && y <= 31)dot[x + 1][y].merah = 1;
  if (y - 3 >= 0 && y - 3 <= 31)dot[x + 1][y - 3].merah = 1;
}
void ikon_pacman(int x, int y) {
  kotak(x, y, 0, 1, 1);
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void plat(int x, int y) {
  for (int i = x; i <= x + 6; i++) {
    dot[y][i].biru = 1;
  }
}

void stone(int x, int y, int &nyawa) {

  if (nyawa == 0) {
    for (int i = 0; i <= 2; i++) {
      dot[x + 1][y + i].hijau = 0;
      dot[x][y + i].hijau = 0;
      //dot[x + 1][y + i].biru = 0;
      //dot[x][y + i].biru = 0;
    }
  }
  if (nyawa == 1) {
    for (int i = 0; i <=  2; i++) {
      dot[x + 1][y + i].hijau = 1;
      dot[x][y + i].hijau = 1;
      dot[x + 1][y + i].biru = 0;
      dot[x][y + i].biru = 0;
    }
  }
  if (nyawa == 2) {
    for (int i = 0; i <= 2; i++) {
      dot[x + 1][y + i].biru = 1;
      dot[x][y + i].biru = 1;
      dot[x + 1][y + i].hijau = 1;
      dot[x][y + i].hijau = 1;

    }
  }
  if (nyawa > 0) {
    if (a == x) {
      if (b == y + 1) {
        vy = 0;
        jeda(nyawa, 0, 22, 200);
      }
      else if ( b == y || b == y + 2) {
        if (vy == 1) {
          jeda(nyawa, 0, 22, 200);
          vy = 0;
        }
        else {
          if (b == y + 2) vx = 1;
          else vx = 0;
          jeda(nyawa, 0, 22, 200);
        }
      }
    } else if (a == x + 1) {
      if (b == y + 1) {
        vy = 1;
        jeda(nyawa, 0, 22, 200);
      }
      else if (b == y || b == y + 2) {
        if (vy == 0) {
          jeda(nyawa, 0, 22, 200);
          vy = 1;
        }
        else {
          if (b == y + 2) vx = 1;
          else vx = 0;
          jeda(nyawa, 0, 22, 200);
        }
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void pipe(int x, int y, int p) {
  if (p) {
    for (int i = 0; i <= 5; i++) {
      if (y + i >= 0 && y + i <= 31)dot[x][y + i].hijau = 1;
    }
    for (int i = 0; i <= 2; i++) {
      if (y >= 0 && y <= 31)dot[x + i][y].hijau = 1;
      if (y + 5 >= 0 && y + 5 <= 31)dot[x + i][y + 5].hijau = 1;
    }
    for (int i = 2; i <= 15 - x; i++) {
      if (y + 1 >= 0 && y + 1 <= 31)dot[x + i][y + 1].hijau = 1;
      if (y + 4 >= 0 && y + 4 <= 31)dot[x + i][y + 4].hijau = 1;
    }
  } else {
    for (int i = 0; i <= 5; i++) {
      if (y + i >= 0 && y + i <= 31)dot[x][y + i].hijau = 1;
    }
    for (int i = 0; i <= 2; i++) {
      if (y >= 0 && y <= 31)dot[x - i][y].hijau = 1;
      if (y + 5 >= 0 && y + 5 <= 31)dot[x - i][y + 5].hijau = 1;
    }
    for (int i = 2; i <= x; i++) {
      if (y + 1 >= 0 && y + 1 <= 31)dot[x - i][y + 1].hijau = 1;
      if (y + 4 >= 0 && y + 4 <= 31)dot[x - i][y + 4].hijau = 1;
    }
  }

}

