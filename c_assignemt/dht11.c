#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define MAX_TIMINGS     80
#define DHT_PIN         3       /* GPIO-22 */

int dht[5] = {0,0,0,0,0};
void readValue(){

         dht[0] = dht[1] = dht[2] = dht[3] = dht[4] = 0;

        int state = 1;
        int  counter = 0;
        int j=0,i;
        float H,T;

        wiringPiSetup();
        pinMode(DHT_PIN,OUTPUT);
        digitalWrite(DHT_PIN,LOW);
        delay(18);
        digitalWrite(DHT_PIN,HIGH);
        delayMicroseconds(40);
        pinMode(DHT_PIN,INPUT);


        for(i = 0;i< MAX_TIMINGS;i++){
          counter = 0;
          while(digitalRead(DHT_PIN) == state){
                  counter++;
 delayMicroseconds(1);
                  if(counter == 255){
                          break;
                  }
          }
          state = digitalRead(DHT_PIN);

          if(counter == 255){
              break;
          }

          if((i>=4) &&(i % 2 == 0)){

                 dht[j/8] <<= 1;
                 if(counter > 16)
                 dht[j/8] = 1;
                j++;
         }

          H = dht[0];
          }

     T = dht[2] * 9./5. + 32;
     printf("Humidity : %d%d :: :: Temperature :%d%dC %1.fF\n",dht[0],dht[1],dht[2],dht[3],T);
}

int main()
{
while(1){
readValue();
delay(2000);
}
}
          
