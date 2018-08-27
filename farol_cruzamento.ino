#define led_vermelho1 2
#define led_amarelo1 3
#define led_verde1 4
#define led_vermelho2 5
#define led_amarelo2 6
#define led_verde2 7

void setup()
{
  pinMode(led_vermelho1, OUTPUT);
  pinMode(led_amarelo1, OUTPUT);
  pinMode(led_verde1, OUTPUT);
  pinMode(led_vermelho2, OUTPUT);
  pinMode(led_amarelo2, OUTPUT);
  pinMode(led_verde2, OUTPUT);
  
  digitalWrite(led_vermelho1, LOW);
  digitalWrite(led_amarelo1, LOW);
  digitalWrite(led_verde1, LOW);
  digitalWrite(led_vermelho2, LOW);
  digitalWrite(led_amarelo2, LOW);
  digitalWrite(led_verde2, LOW);
}
void loop()
{ 
  digitalWrite(led_vermelho1,HIGH);
  digitalWrite(led_verde2, HIGH);
  
  delay(2000);
  
  digitalWrite(led_verde2,LOW);
  digitalWrite(led_amarelo2, HIGH);
  //digitalWrite(led_vermelho1,HIGH);
  
  delay(1000);
 
  digitalWrite(led_amarelo2, LOW);
  digitalWrite(led_vermelho2, HIGH);
  
  digitalWrite(led_vermelho1, LOW);
  digitalWrite(led_verde1,HIGH);
  
  
  delay(2000);
  
  digitalWrite(led_verde1, LOW);
  digitalWrite(led_amarelo1, HIGH);
  //digitalWrite(led_vermelho2,HIGH);
  delay(1000);
  
  digitalWrite(led_amarelo1, LOW);
  digitalWrite(led_vermelho2,LOW);
  
} 
  

