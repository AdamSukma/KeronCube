//**************************************************************//
// Following codes simply shifts out data for 16x32 LED matrix.
//****************************************************************

//#include<stdlib.h>
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include "init.h"
//#include "transmit.h"
#include "huruf.h"
#include "control.h"
#include "shape.h"
#include "shooter.h"
#include "setup.h"
#include "gambar.h"
#include "pacman.h"
#include "brick.h"
#include "lagu.h"
#include "rttl.h"



int t;
int aa = 1;
void loop() {
  //gambar();
  //sing(2);

  // play_rtttl(song_1,aa);
  // Serial.println(score[0]);
  //Serial.print("   ");

  /*for(int i=0;i<6;i++){
      Serial.print(digitalRead(pin[i]));
      Serial.print("    ");
    }
    Serial.println("    ");*/
  //Serial.println(terima());
  if (scene == 0 && test == 0) {
    clrscr();
    //test++;
    homescreen();

    cetak();
    play_rtttl(song_8, aa);
    //transmit(1);
    pencet(scene, 1, 500);

  } else if (scene % 2 == 1) {
    Serial.println(c);
    if (c == 0)sing(1);
    test = 100;
    joyy(a, 100);
    joyx(b, 100);

    if (a > 1)a = 1;
    if (a < 0)a = 0;
    if (b > 3)b = 3;
    if (b < 0)b = 0;
    kotak(0, 0, 0, 1, 1);
    kotak(8, 8, 0, 1, 1);
    kotak(8, 24, 0, 1, 1);
    kotak(0, 24, 0, 1, 0);
    kotak(8, 16, 0, 1, 0);
    kotak(8, 0, 0, 1, 0);
    kotak(0, 8, 0, 1, 0);
    kotak(0, 16, 0, 1, 1);
    if (c == 0) {
      misil(3, 21);

      pensil(0, 8);
      ikon_pacman(0, 16);
      shooter(5, 3);
    }
    kotak(a * 8, b * 8, 0, 0, 1);
    menu = 0;
    if (a == 0 && b == 0 && c == 0) {
      menu = 1;
      if (cek != menu) {
        lcd.clear();
        lcd.print("Shooter Game");
      }
      // transmit(3);
    }
    if (a == 0 && b == 1 && c == 0) {
      menu = 2;
      if (cek != menu) {
        lcd.clear();
        lcd.print("Draw Something");
        //transmit(4);
      }
    }
    if (a == 0 && b == 2 && c == 0) {
      menu = 3;
      if (cek != menu) {
        lcd.clear();

        lcd.print("Jumping Pacman");
      }
      //transmit(4);
    }
    if (a == 0 && b == 3  && c == 0) {
      menu = 4;
      if (cek != menu) {
        lcd.clear();

        lcd.print("Brick Breaker");
      }
      //transmit(4);
    }
    if (a == 1 && b == 0 && c == 0) {
      menu = 5;
      if (cek != menu) {
        lcd.clear();

        lcd.print("Play Your Music");
      }
      //transmit(4);
    }
    //--------------------------------------------------------------------------------
    if (c == 1)pencet(puter, 1, 1000);
    // pencet(c,2,0,1000);
    // pencet(c,3,1,1000);

    // Serial.println(c);
    if (a == 0 && b == 0 && c == 1) {
      menu = 111;
      if (cek != menu) {
        lcd.clear();
        lcd.print("StarWars");

      }
      if (puter == 1)play_rtttl(song_11, puter);
      // transmit(3);
    }
    if (a == 0 && b == 1 && c == 1) {
      menu = 211;
      if (cek != menu) {
        lcd.clear();
        lcd.print("Indiana Jones");
        //transmit(4);

      }
      if (puter == 1)play_rtttl(song_2, puter);
    }
    if (a == 0 && b == 2 && c == 1) {
      menu = 311;
      if (cek != menu) {
        lcd.clear();

        lcd.print("TakeOnMe");
      }
      if (puter == 1)play_rtttl(song_3, puter);
      //transmit(4);
    }
    if (a == 0 && b == 3 && c == 1) {
      menu = 411;
      if (cek != menu) {
        lcd.clear();

        lcd.print("Entertainer");
      }
      if (puter == 1)play_rtttl(song_4, puter);
      //transmit(4);
    }
    //--------------------------------------------------------------------------------------------------------------------------------------------
    if (a == 1 && b == 0 && c == 1) {
      menu = 511;
      if (cek != menu) {
        lcd.clear();
        lcd.print("Muppets");

      }
      if (puter == 1)play_rtttl(song_5, puter);
      // transmit(3);
    }
    if (a == 1 && b == 1 && c == 1) {
      menu = 611;
      if (cek != menu) {
        lcd.clear();
        lcd.print("Mission Imposible");
        //transmit(4);

      }
      if (puter == 1)play_rtttl(song_21, puter);
    }
    if (a == 1 && b == 2 && c == 1) {
      menu = 711;
      if (cek != menu) {
        lcd.clear();

        lcd.print("Looney");
      }
      if (puter == 1)play_rtttl(song_7, puter);
      //transmit(4);
    }
    if (a == 1 && b == 3 && c == 1) {
      menu = 811;
      if (cek != menu) {
        lcd.clear();

        lcd.print("20thCenturyFox");
      }
      if (puter == 1)play_rtttl(song_8, puter);
      //transmit(4);
    }
    //-----------------------------------------------------------------------------------------------------------------------------------------



    puter = 0;
    //--------------------------------------------------------------------------------------------
    cek = menu;
    pencet(scene, 1, 500);
    if (menu == 0)scene = 1;
    cetak();
    clrscr();
    if (menu == 1 && scene != 1) {
      b = 16;
      ini = 1;
      life[0] = 3;
      score[0] = 0;
      a = 4; b = 16; c = 0; d = 16; e = 4; f = 15;
      interval = 700;
      berhenti(100);
      coba = 0;
    }
    if (menu == 2 && scene != 1) {
      ini = 1; berhenti(1000); coba = 0;
    }
    if (menu == 3 && scene != 1) {
      ini = 1; berhenti(1000); coba = 0;
    }
    if (menu == 4 && scene != 1) {
      ini = 1; berhenti(1000); coba = 0;
    }
    if (menu == 5 && scene != 1) {
      scene = 1; coba = 0;
      c = 1;
    }
    if (c == 1) {
      pencet(c, 0, 0, 500);
    }

  } else if (menu == 1) {
    shootertest();
    sing(2);
    pencet(scene, 0, 500);
    if (scene % 2 == 1) {
      c = 0; coba = 0;
    }
    //Ftransmit(32);
  } else if (menu == 2) {
    gambar();
    sing(1);
    if (scene % 2 == 1) {
      c = 0; coba = 0;
    }
    pencet(scene, 0, 500);
  } else if (menu == 3) {
    pencet(scene, 0, 500);
    pacman();
    if (scene % 2 == 1) {
      c = 0; coba = 0;
    }
    sing(1);
  } else if (menu == 4) {
    pencet(scene, 0, 500);
    brick();
    if (scene % 2 == 1) {
      c = 0; coba = 0;
    }
    sing(2);
  }

}

