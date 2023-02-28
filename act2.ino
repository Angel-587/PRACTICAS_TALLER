void setup() {
  // put your setup code here, to run once:
pinMode(0, OUTPUT);
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
}


void loop() {
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  
  //Cero y cuenta a 10
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  
//CERO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  
   // UNO
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //DOS
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  //TRES
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  //CUATRO
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //CINCO
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
//SEIS
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  //SIETE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //OCHO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  //NUEVE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

// apagamos el cero del segundo display
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  // eNCEDEMOS el uno del segundo display /////////////////////////////////////// inicia decena 1///////////////////////////////////////
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  //CERO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
////////////////////////////////////////Decena 1//////////////////

  
   // UNO
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //DOS
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  //TRES
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  //CUATRO
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //CINCO
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
//SEIS
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  //SIETE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //OCHO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  //NUEVE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

// apagamos el uno del segundo display
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  // eNCEDEMOS el dos del segundo display INICA LA SEGUNDA DECENA
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  //CERO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

////////////////////////////////////////Decena 2//////////////////

  
   // UNO
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //DOS
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  //TRES
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  //CUATRO
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //CINCO
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
//SEIS
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  //SIETE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //OCHO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  //NUEVE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

// apagamos el DOS del segundo display
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  // eNCEDEMOS el TRES del segundo display INICIO DE LA TERCERA DECENA
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  //CERO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

  ////////////////////////////////////////Decena 3//////////////////
  
   // UNO
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //DOS
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  //TRES
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  //CUATRO
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //CINCO
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
//SEIS
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  //SIETE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //OCHO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  //NUEVE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

// apagamos el TRES del segundo display
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  // eNCEDEMOS el CUATRO del segundo display INICIO DE LA CUARTA DECENA
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  
  //CERO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW); 

  ////////////////////////////////////////Decena 4//////////////////
  
   // UNO
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //DOS
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  //TRES
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  //CUATRO
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //CINCO
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
//SEIS
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  //SIETE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //OCHO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  //NUEVE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

// apagamos el CUATRO del segundo display
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  // eNCEDEMOS el CINCO del segundo display INICIO DE LA QUINTA DECENA
  digitalWrite(7, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  
  //CERO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);  
  
  ////////////////////////////////////////Decena 5//////////////////
  
   // UNO
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //DOS
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  //TRES
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  //CUATRO
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //CINCO
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
//SEIS
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  //SIETE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //OCHO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  //NUEVE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

// apagamos el CINCO del segundo display
  digitalWrite(7, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  // eNCEDEMOS el SEIS del segundo display INICIO DE LA SEXTA DECENA
  digitalWrite(7, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  
  //CERO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

 ////////////////////////////////////////Decena 6//////////////////
  
   // UNO
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //DOS
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  //TRES
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  //CUATRO
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //CINCO
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
//SEIS
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  //SIETE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //OCHO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  //NUEVE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

// apagamos el SEIS del segundo display
  digitalWrite(7, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  // eNCEDEMOS el SIETE del segundo display INICIO DE LA SEPTIMA DECENA
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  
  //CERO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);  
////////////////////////////////////////Decena 7//////////////////
  
   // UNO
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //DOS
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  //TRES
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  //CUATRO
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //CINCO
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
//SEIS
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  //SIETE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //OCHO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  //NUEVE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

// apagamos el SIETE del segundo display
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  // eNCEDEMOS el OCHO del segundo display INICIO DE LA OCTAVA DECENA
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  
  //CERO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW); 

////////////////////////////////////////Decena 7//////////////////
  
   // UNO
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //DOS
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  //TRES
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  //CUATRO
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //CINCO
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
//SEIS
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  //SIETE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //OCHO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  //NUEVE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

// apagamos el OCHO del segundo display
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  // eNCEDEMOS el NUEVE del segundo display INICIO DE LA NOVENA DECENA
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  
  //CERO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW); 

////////////////////////////////////////Decena 9//////////////////
  
   // UNO
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //DOS
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  //TRES
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  //CUATRO
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //CINCO
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
//SEIS
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  //SIETE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  //OCHO
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  //NUEVE
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

// apagamos el NUEVE del segundo display
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}