/*
Curso de Arduino

Descripcion:
Sensores digitales

Conexiones

Pulsador  ->  2
Led       -> 12

by JAVacasM
 */


/* ==== Includes - Librerias==== */

/* ====  END Includes ==== */

/* ==== Defines - Constantes ==== */
#define PIN_BOTON 2
#define PIN_LED   12
/* ==== END Defines ==== */

/* ==== Variables Globales ==== */

/* ==== END Global Variables ==== */


/* ==== Funciones a usar - Prototipos ==== */

/* ==== END Prototipos ==== */

/* ==== Setup - Configuracion ==== */
void setup() {
  pinMode(PIN_BOTON, INPUT);
  pinMode(PIN_LED,OUTPUT);
}
/* ==== END Setup ==== */

/* ==== Loop - Codigo que se repite==== */
void loop() {
  int iEstadoBoton=digitalRead(PIN_BOTON);

  digitalWrite(PIN_LED,iEstadoBoton);

  delay(10);
}
/* ==== End Loop ==== */

/* ==== Funciones ==== */

/* ==== END Functions ==== */
