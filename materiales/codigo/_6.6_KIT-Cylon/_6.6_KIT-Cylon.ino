/*
Curso de Arduino

Encendemos y apagamos un LED conectado al pin 13

Conexiones

LED:
  Terminal positivo (el más largo): pin digital 13
    (Si se usa otro pin hay que incluir una resistencia de al menos 220 Ohmios)
  Terminal negativo (más corto): GND

by JAVacasM
 */


/* ==== Includes - Librerias==== */
/* ====  END Includes ==== */

/* ==== Defines - Constantes ==== */
#define PRIMER_LED           8
#define ULTIMO_LED           12
#define TIEMPO_ESPERA     1000 // 1000 milisegundos = 1 segundo
/* ==== END Defines ==== */

/* ==== Variables Globales ==== */
/* ==== END Global Variables ==== */


/* ==== Funciones a usar - Prototipos ==== */
/* ==== END Prototipos ==== */

/* ==== Setup - Configuracion ==== */
void setup() {
  for(int i=PRIMER_LED;i<=ULTIMO_LED;i++){  // Iteramos por todos los pines
      pinMode(i,OUTPUT);    // Configuramos el pin como salida
  }

}
/* ==== END Setup ==== */

/* ==== Loop - Codigo que se repite==== */
void loop() {
  // Vamos por orden creciente de pines
  for(int i=PRIMER_LED;i<=ULTIMO_LED;i++){  // incrementamos a cada paso
    digitalWrite(i,HIGH); // Encendemos el led i
    delay(TIEMPO_ESPERA);
    digitalWrite(i,LOW); // Apagamos el led i, antes de pasar al siguiente
  }
  // Vamos en orden decreciente de pines
  for(int i=ULTIMO_LED;i>=PRIMER_LED;i--){  // decrementamos a cada paso
    digitalWrite(i,HIGH); // Encendemos el led i
    delay(TIEMPO_ESPERA);
    digitalWrite(i,LOW); // Apagamos el led i, antes de pasar al siguiente
  }

}
/* ==== End Loop ==== */

/* ==== Funciones ==== */

/* ==== END Functions ==== */
