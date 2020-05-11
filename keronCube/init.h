#define I2C_ADDR    0x3F // <<------- Add your address here.  Find it from I2C Scanner
#define BACKLIGHT_PIN     3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7

LiquidCrystal_I2C  lcd(I2C_ADDR, En_pin, Rw_pin, Rs_pin, D4_pin, D5_pin, D6_pin, D7_pin);


//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

uint64_t row1[16];
uint64_t temp;
int LP = A3;            // Latch Pin
int ClkP = 11;           // Clock Pin
int R1P = 7;          // R1 Pin
int B1P = 5;          // B1 Pin
int G1P = 6;           // G1 Pin
int R2P = 4;           // R2 Pin
int B2P = 2;           // B2 Pin
int G2P = 3;           // G2 Pin
int AP = A0;            // A Pin
int BP = A1;            // B Pin
int CP = A2;            // C Pin
int OEP = 9;          // OE Pin
int row = 0;
uint8_t i;
int menu = 0;
int biru[16][32];
int tombol[4] = {49, 50, 51, 52};
int pin[] = {47, 45, 43, 41, 39, 37};
bool k[4] = {1, 1, 1, 1};
int scene = 0;
long long w[50];
int a = 0, b = 0, c = 0, d = 16, e = 4, f = 15;
float interval = 700;
int lompat = 0, jatuh = 0;
int cek = 0;
bool ini = 1, kena = 0;
int tembak;
int test = 0;
int puter = 0;
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int score[2] = {0, 1}, life[2] = {3, 2}, restart = 0;
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int vx = 0, vy = 0;
int st[100];
int ss[100];
int lepas = 0;
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
struct titik {
  int merah;
  int hijau;
  int biru;




};
titik dot[16][32];
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int freeRam() {
  extern int __heap_start, *__brkval;
  int v;
  return (int) &v - (__brkval == 0 ? (int)&__heap_start : (int)__brkval);
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void cetak() {

  for (row = 0; row < 4; row++) {
    for (int i = 0; i < 4; i++) {

      for (int j = 0; j < 8; j++) {
        digitalWrite(R1P, dot[row + 4][j + (i * 8)].merah);
        digitalWrite(G1P, dot[row + 4][j + (i * 8)].hijau);
        digitalWrite(B1P, dot[row + 4][j + (i * 8)].biru);

        digitalWrite(R2P, dot[row + 12][j + (i * 8)].merah);
        digitalWrite(G2P, dot[row + 12][j + (i * 8)].hijau);
        digitalWrite(B2P, dot[row + 12][j + (i * 8)].biru);

        digitalWrite(ClkP, HIGH);
        digitalWrite(ClkP, LOW);
      }

      for (int j = 0; j < 8; j++) {
        digitalWrite(R1P, dot[row][j + (i * 8)].merah);
        digitalWrite(G1P, dot[row][j + (i * 8)].hijau);
        digitalWrite(B1P, dot[row][j + (i * 8)].biru);

        digitalWrite(R2P, dot[row + 8][j + (i * 8)].merah);
        digitalWrite(G2P, dot[row + 8][j + (i * 8)].hijau);
        digitalWrite(B2P, dot[row + 8][j + (i * 8)].biru);

        digitalWrite(ClkP, HIGH);
        digitalWrite(ClkP, LOW);
      }



    }
    digitalWrite(OEP, HIGH);
    digitalWrite(LP, HIGH);
    digitalWrite(AP, !!(row & B00000001));
    digitalWrite(BP, !!(row & B00000010));
    digitalWrite(CP, !!(row & B00000100));
    digitalWrite(OEP, LOW);
    digitalWrite(LP, LOW);
  }

}
