/*
Curso de Arduino

Generando Sonido manualmente

Conexiones 
Zumbador a pin 5

by JAVacasM

revisado by chute (2017/11/16)
 */

/* ==== Includes - Librerias==== */
/* ====  END Includes ==== */

/* ==== Defines - Constantes ==== */
#define PIN_ZUMBADOR 5
#define N_REPETICIONES 500
/* ==== END Defines ==== */

/* ==== Variables Globales ==== */
/* ==== END Global Variables ==== */

/* ==== Funciones a usar - Prototipos ==== */
/* ==== END Prototipos ==== */

/* ==== Setup - Configuracion ==== */
void setup() {
  pinMode(PIN_ZUMBADOR, OUTPUT);
}
/* ==== END Setup ==== */

/* ==== Loop - Codigo que se repite==== */
void loop() {
  int espera=1;
  for(int i = 0 ;i < N_REPETICIONES/espera; i++){
    digitalWrite(PIN_ZUMBADOR, LOW);
    delay(espera);
    digitalWrite(PIN_ZUMBADOR, HIGH);
    delay(espera);
  }
}

/* ==== End Loop ==== */

/* ==== Funciones ==== */
/* ==== END Functions ==== */
