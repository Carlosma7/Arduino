/*  TITULO: Control de una hélice con motor DC y driver L9110H.
 
    AUTOR:
   
    MARIANO DEL CAMPO GARCÍA (@2016) --> INGENIERO TÉCNICO INDUSTRIAL ESPECIALIDAD ELECTRÓNICA
    - FACEBOOK: https://www.facebook.com/mariano.delcampogarcia
    - TWITTER: https://twitter.com/MarianoCampoGa
    - CORREO: marianodc83@gmail.com
   
   
    DESCRIPCIÓN DEL PROGRAMA
   
    Con este programa se controlar una hélice con motor DC (Fan Motor) mediante el driver L9110H. A través del
    monitor serie podremos seleccionar las diferentes opciones de velocidad y sentido de giro del motor DC,
    además de poder realizar dos tipos difrentes de parada (con freno motor y sin él).
   
   
    ESQUEMA DE CONEXION
   
                                      +-----+
         +----[PWR]-------------------| USB |--+
         |                            +-----+  |
         |         GND/RST2  [ ][ ]            |
         |       MOSI2/SCK2  [ ][ ]  A5/SCL[ ] |  
         |          5V/MISO2 [ ][ ]  A4/SDA[ ] |  
         |                             AREF[ ] |
         |                              GND[ ] |
         | [ ]N/C                    SCK/13[ ] |  
         | [ ]IOREF                 MISO/12[ ] |  
         | [ ]RST                   MOSI/11[ ]~|  
         | [ ]3V3    +---+               10[ ]~|  
         | [ ]5v    -| A |-               9[ ]~|   INA del "Fan motor"
         | [ ]GND   -| R |-               8[ ] |   INB del "Fan motor"
         | [ ]GND   -| D |-                    |
         | [ ]Vin   -| U |-               7[ ] |  
         |          -| I |-               6[ ]~|  
         | [ ]A0    -| N |-               5[ ]~|  
         | [ ]A1    -| O |-               4[ ] |    
         | [ ]A2     +---+           INT1/3[ ]~|    
         | [ ]A3                     INT0/2[ ] |  
         | [ ]A4/SDA  RST SCK MISO     TX>1[ ] |  
         | [ ]A5/SCL  [ ] [ ] [ ]      RX<0[ ] |  
         |            [ ] [ ] [ ]              |
         |  UNO_R3    GND MOSI 5V  ____________/
          \_______________________/
 
  NOTAS:
 
   - La alimentación y la masa del "Fan Motor" van directamente conectadas a +5V y GND respectivamente.
   
*/
 
  // Declaración de constantes globales
  #define MOTOR_PWM 9 // Pin digital 9 para el pin INA (Velocidad PWMM del motor)
  #define MOTOR_GIRO 8 // Pin digital 8 para el pin INB (Sentido de giro del motor)
  #define PWM_LENTO 100  // PWM para la velocidad lenta
  #define PWM_RAPIDO 255 // PWM para la velocidad rápida
  #define RETARDO_GIRO 1000 // Retardo para el cambio del sentido de giro del motor
 
  boolean entrada_valida; // Variable para el control del MENU
  byte c; // Variable que almacena el carácter recibido por el puerto serie
  int anterior = 0; // Variable que almacena el número de la secuencia del MENU
 
  void setup()
  {
    Serial.begin(9600);
    pinMode(MOTOR_GIRO, OUTPUT); // Pin digital 8 como salida
    pinMode(MOTOR_PWM, OUTPUT); // Pin digital 9 como salida
    digitalWrite(MOTOR_GIRO, LOW); // MOTOR_DIR a nivel BAJO
    digitalWrite(MOTOR_PWM, LOW); // MOTOR_PWM a nivel BAJO
  }
 
  void loop()
  {  
    // Dibuja el MENU a través del monitor serie
    Serial.println("--------------------------------");
    Serial.println("----------    MENU    ----------");
    Serial.println("--------------------------------");
    Serial.println("1 - AVANCE RAPIDO");
    Serial.println("2 - HACIA ADELANTE");
    Serial.println("3 - PARADA SUAVE");
    Serial.println("4 - MARCHA ATRAS");
    Serial.println("5 - RETROCESO RAPIDO");
    Serial.println("6 - FRENO MOTOR");
    Serial.println("X - CUALQUIER TECLA SACA MENU");
    Serial.println("--------------------------------");
    Serial.print(">> Selecciona una opcion... ");
   
    do
    {
      // Espera el siguiente carácter enviado desde el monitor serie
      while(!Serial.available())
      ; // Se mantiene en un bucle de espera
 
      c = Serial.read(); // Almaceno el carácter recibido
      Serial.write(c);
     
      // Evalúo el carácter recibido
      switch(c)
      {
        case '1': // AVANCE RAPIDO
       
          Serial.println("\n--------------------------------");
          Serial.println( "AVANCE RAPIDO!!!" );
          Serial.println("--------------------------------");
          Serial.print(">> Selecciona una opcion... ");
         
          if(anterior!=2)
          {
            // Se detienen los motores brevemente antes del cambio del sentido de giro
            digitalWrite(MOTOR_GIRO, LOW);
            digitalWrite(MOTOR_PWM, LOW);
          }
          if(anterior == 3 || anterior == 4)
          {
            delay(RETARDO_GIRO); // Retardo para el cambio del sentido de giro
          }
   
          // Ajusta la velocidad y el sentido de giro del motor
          digitalWrite(MOTOR_GIRO, HIGH); // Sentido de giro -> Hacia adelante
          analogWrite(MOTOR_PWM, 255-PWM_RAPIDO); // Velocidad -> Rápida
 
          entrada_valida = true;
          anterior = 1;
          break;
           
 
        case '2': // HACIA ADELANTE
       
          Serial.println("\n--------------------------------");
          Serial.println( "HACIA ADELANTE!!!" );
          Serial.println("--------------------------------");
          Serial.print(">> Selecciona una opcion... ");
         
          if(anterior!=1)
          {
            // Se detienen los motores brevemente antes del cambio del sentido de giro
            digitalWrite(MOTOR_GIRO, LOW);
            digitalWrite(MOTOR_PWM, LOW);
          }  
         
          if(anterior == 3 || anterior == 4)
          {
            delay(RETARDO_GIRO); // Retardo para el cambio del sentido de giro
          }  
 
          // Ajusta la velocidad y el sentido de giro del motor
          digitalWrite(MOTOR_GIRO, HIGH); // Sentido de giro -> Hacia adelante
          analogWrite(MOTOR_PWM, 255-PWM_LENTO); // Velocidad -> Lenta
 
          entrada_valida = true;
          anterior = 2;        
          break;      
           
 
        case '3': // PARADA SUAVE
       
          Serial.println("\n--------------------------------");
          Serial.println( "PARADA SUAVE!!!" );
          Serial.println("--------------------------------");
          Serial.print(">> Selecciona una opcion... ");
         
          // Se detienen los motores
          digitalWrite(MOTOR_GIRO, LOW);
          digitalWrite(MOTOR_PWM, LOW);
 
          entrada_valida = true;
          break;      
 
   
        case '4': // MARCHA ATRAS
       
          Serial.println("\n--------------------------------");
          Serial.println( "MARCHA ATRAS!!!" );
          Serial.println("--------------------------------");
          Serial.print(">> Selecciona una opcion... ");
         
          if(anterior!=4)
          {
            // Se detienen los motores brevemente antes del cambio del sentido de giro
            digitalWrite(MOTOR_GIRO, LOW);
            digitalWrite(MOTOR_PWM, LOW);
          }
         
          if(anterior == 1 || anterior == 2)
          {
            delay(RETARDO_GIRO); // Retardo para el cambio del sentido de giro
          }
 
          // Ajusta la velocidad y el sentido de giro del motor
          digitalWrite(MOTOR_GIRO, LOW); // Sentido de giro -> Hacia atrás
          analogWrite(MOTOR_PWM, PWM_LENTO ); // Velocidad -> Lenta
 
          entrada_valida = true;
          anterior = 3;
          break;      
 
 
        case '5': // RETROCESO RAPIDO
 
          Serial.println("\n--------------------------------");
          Serial.println( "RETROCESO RAPIDO!!!" );
          Serial.println("--------------------------------");
          Serial.print(">> Selecciona una opcion... ");
         
          if(anterior!=3)
          {
            // Se detienen los motores brevemente antes del cambio del sentido de giro
            digitalWrite(MOTOR_GIRO, LOW);
            digitalWrite(MOTOR_PWM, LOW);          
          }
         
          if(anterior == 1 || anterior == 2)
          {
            delay(RETARDO_GIRO); // Retardo para el cambio del sentido de giro
          }
 
          // Ajusta la velocidad y el sentido de giro del motor
          digitalWrite(MOTOR_GIRO, LOW); // Sentido de giro -> Hacia atrás
          analogWrite(MOTOR_PWM, PWM_RAPIDO); // Velocidad -> Rápida
 
          entrada_valida = true;
          anterior = 4;
          break;
 
           
        case '6': // FRENO MOTOR (No utilizar con frecuencia)
 
          Serial.println("\n--------------------------------");
          Serial.println( "FRENO MOTOR!!!" );
          Serial.println("--------------------------------");
          Serial.print(">> Selecciona una opcion... ");
         
          // Se invierte el sentido de giro del motor y se para
          digitalWrite(MOTOR_GIRO, HIGH);
          digitalWrite(MOTOR_PWM, HIGH);
 
          entrada_valida = true;
          break;      
 
           
        default:
 
          Serial.println("\n");        
          // Si se introduce un carácter que no está en el MENU, se vuelve a mostrar el MENU
         
          entrada_valida = false;
          break;
      }
 
    } while(entrada_valida == true);
  }
  