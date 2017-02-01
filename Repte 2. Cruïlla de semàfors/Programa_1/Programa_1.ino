/************************************************************************
**                                                                     **
**                                                                     **
**                                                                     **
************************************************************************/

//****************************INCLUDE ***********************************

   

//*************************** VARIABLES *********************************
 int led1 = 5;   //V
 int led2 = 6;   //N
 int led3 = 7;   //R
 int led4 = 8;   //R
 int led5 = 9;   //N
 int led6 = 10;  //V

//**************************** SERUP ************************************

void setup() {                      //configura el fianl de salida 

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);

 }

//******************************LOOP*************************************

void loop()                        //inicia el bucle del probrama 
{
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  delay(1000);

  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);    
    
  delay(900);

  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, HIGH);    
  delay(1000);

  digitalWrite(led6, LOW);    
  digitalWrite(led5, HIGH);    

  delay(900);



 
}

//****************************** FUNCIONES ******************************

