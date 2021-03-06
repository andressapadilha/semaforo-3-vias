 #define vmA 13
 #define amA 12
 #define vdA 11
 #define vmB 10
 #define amB 9
 #define vdB 8
 #define vmC 7
 #define amC 6
 #define vdC 5


// A função de setup é executada uma vez quando você pressiona reset ou liga a placa
void setup() {
  
  // inicializar o pino digital colocado como uma SAÍDA.

  //Semáforo 1
  pinMode(vmA, OUTPUT); //Vermelho A
  pinMode(amA, OUTPUT); //Amarelo  A
  pinMode(vdA, OUTPUT); //Verde    A

  //Semáforo 2
  pinMode(vmB, OUTPUT); //Vermelho B
  pinMode(amB, OUTPUT); //Amarelo  B
  pinMode(vdB, OUTPUT); //Verde    B

  //Semáforo 3
  pinMode(vmC, OUTPUT); //Vermelho C
  pinMode(amC, OUTPUT); //Amarelo  C
  pinMode(vdC, OUTPUT); //Verde    C
}

// A função loop executa repetidamente de forma infinita
void loop() {
  //Situação 1
  semaforoA (LOW, LOW, HIGH); // Semáforo A: ABERTO  (led verde)
  semaforoB (HIGH, LOW, LOW); // Semáforo B: FECHADO (led vermelho)
  semaforoC (HIGH, LOW, LOW); // Semáforo C: FECHADO (led vermelho)
  delay (8000); // 8s de espera

  //Situação 2
  semaforoA (LOW, HIGH, LOW); // Semáforo A: ESPERA  (led amarelo)
  semaforoB (HIGH, LOW, LOW); // Semáforo B: FECHADO (led vermelho)
  semaforoC (HIGH, LOW, LOW); // Semáforo C: FECHADO (led vermelho)
  delay (1000); // 1s de espera

  //Situação 3
  semaforoA (HIGH, LOW, LOW); // Semáforo A: FECHADO (led vermelho)
  semaforoB (LOW, LOW, HIGH); // Semáforo B: ABERTO  (led verde)
  semaforoC (HIGH, LOW, LOW); // Semáforo C: FECHADO (led vermelho)
  delay (8000); // 8s de espera

  //Situação 4
  semaforoA (HIGH, LOW, LOW); // Semáforo A: FECHADO (led vermelho)
  semaforoB (LOW, HIGH, LOW); // Semáforo B: ESPERA  (led amarelo)
  semaforoC (HIGH, LOW, LOW); // Semáforo C: FECHADO (led vermelho)
  delay (1000); // 1s de espera

  //Situação 5
  semaforoA (HIGH, LOW, LOW); // Semáforo A: FECHADO (led vermelho)
  semaforoB (HIGH, LOW, LOW); // Semáforo B: FECHADO (led vermelho)
  semaforoC (LOW, LOW, HIGH); // Semáforo C: ABERTO  (led verde)
  delay (8000); // 8s de espera

  //Situação 6
  semaforoA (HIGH, LOW, LOW); // Semáforo A: FECHADO (led vermelho)
  semaforoB (HIGH, LOW, LOW); // Semáforo B: FECHADO (led vermelho)
  semaforoC (LOW, HIGH, LOW); // Semáforo C: ESPERA  (led amarelo)
  delay (1000); // 1s de espera
}


//Semáforo A
void semaforoA (int estadoVm, int estadoAm, int estadoVd) {
  digitalWrite(vmA, estadoVm);  // LED VERMELHO ligado
  digitalWrite(amA, estadoAm);  // LED AMARELO desligado
  digitalWrite(vdA, estadoVd);  // LED VERDE desligado
}

//Semáforo B
void semaforoB (int estadoVm, int estadoAm, int estadoVd) {
  digitalWrite(vmB, estadoVm);  // LED VERMELHO ligado
  digitalWrite(amB, estadoAm);  // LED AMARELO desligado
  digitalWrite(vdB, estadoVd);  // LED VERDE desligado
}

//Semáforo C
void semaforoC (int estadoVm, int estadoAm, int estadoVd) {
  digitalWrite(vmC, estadoVm);  // LED VERMELHO ligado
  digitalWrite(amC, estadoAm);  // LED AMARELO desligado
  digitalWrite(vdC, estadoVd);  // LED VERDE desligado
}
