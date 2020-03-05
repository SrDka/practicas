boolean digito[16][7]=
{
   {1, 1, 1, 1, 1, 1, 0},
   {0, 1, 1, 0, 0, 0, 0},
   {1, 1, 0, 1, 1, 0, 1},
   {1, 1, 1, 1, 0, 0, 1},
   {0, 1, 1, 0, 0, 1, 1},
   {1, 0, 1, 1, 0, 1, 1},
   {1, 0, 1, 1, 1, 1, 1},
   {1, 1, 1, 0, 0, 0, 0},
   {1, 1, 1, 1, 1, 1, 1},
   {1, 1, 1, 0, 0, 1, 1},
   {1, 1, 1, 0, 1, 1, 1},
   {0, 0, 1, 1, 1, 1, 1},
   {1, 0, 0, 1, 1, 1, 0},
   {0, 1, 1, 1, 1, 0, 1},
   {1, 0, 0, 1, 1, 1, 1},
   {1, 0, 0, 0, 1, 1, 1},
   
};

int boton=0;
int mas=9;
int menos=10;

void setup()
{
  for(byte i = 2; i<9;i++){
    pinMode(i, OUTPUT);
  }
    pinMode(mas, INPUT);
    pinMode(menos, INPUT);  
}

void loop()
{
  if(digitalRead(mas) == HIGH){
    boton=boton+1;
    delay(300);
  }
  if(digitalRead(menos) == HIGH){
    boton=boton-1;
    delay(300);
  }
  ver(boton);
}
void ver(int num){
  for(int salida = 2, pin = 0; pin<7;salida++,pin ++){
    digitalWrite(salida, digito[num][pin]);  
  }
}
