#define  c3    7634
#define  d3    6803
#define  e3    6061
#define  f3    5714
#define  g3    5102
#define  a3    4545
#define  b3    4049
#define  c4    3816    // 261 Hz
#define  d4    3401    // 294 Hz
#define  e4    3030    // 329 Hz
#define  f4    2865    // 349 Hz
#define  g4    2551    // 392 Hz
#define  a4    2272    // 440 Hz
#define  a4s   2146
#define  b4    2028    // 493 Hz
#define  c5    1912    // 523 Hz
#define  d5    1706
#define  d5s   1608
#define  e5    1517    // 659 Hz
#define  f5    1433    // 698 Hz
#define  g5    1276
#define  a5    1136
#define  a5s   1073
#define  b5    1012
#define  c6    955

#define  R     0      // Definimos una nota "especial" ‘R’, que prepresenta un silencio/pausa

int melodia[] = {  f4,  f4, f4,  a4s,   f5,  d5s,  d5,  c5, a5s, f5, d5s,  d5,  c5, a5s, f5, d5s, d5, d5s,   c5};
int beats2[]  = {  21,  21, 21,  128,  128,   21,  21,  21, 128, 64,  21,  21,  21, 128, 64,  21, 21,  21, 128 };

const int MAX_COUNT = sizeof(melodia) / sizeof(int);

long tempo = 5000;
int  pausa = 500;

int rest_count = 20;


#define PIN_BUZZER  5
#define PIN_LED 13

void setup() {
  pinMode(PIN_BUZZER, OUTPUT);
  pinMode(PIN_LED, OUTPUT);

  
  for (int i = 0; i < MAX_COUNT; i++) {
    playTone(beats2[i],melodia[i]);
    delayMicroseconds(pausa);
  }
  
}

void loop() {
}

void playTone(int beat,int toneM) {
  
  long duration = beat * tempo;
  
  long elapsed_time = 0;
  
  if (toneM > 0) {
    digitalWrite(PIN_LED,HIGH);
  
    while (elapsed_time < duration) {
      digitalWrite(PIN_BUZZER,HIGH);
      delayMicroseconds(toneM / 2);
      digitalWrite(PIN_BUZZER, LOW);
      delayMicroseconds(toneM / 2);
      elapsed_time += (toneM);
    }
  
    digitalWrite(PIN_LED,LOW);
  
  } else {
    for (int j = 0; j < rest_count; j++) {
       delayMicroseconds(duration);
    }
  }

}
