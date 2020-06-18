/*****************************
 * Name             : Richie Ilot
 * Description      : Knight Rider
 * Date of creation : 14/10/2019
 ******************************/

int ledCount = 6;
int arr[]={2,3,4,5,6,7};
const int delayTime = 500;
 
void setup() {
int a;
for(a=0; a<ledCount; a++)
{
pinMode(arr[a], OUTPUT);
}
}

void loop(){
int b,c,d;
digitalWrite(arr[0],HIGH);
delay(delayTime);
for(b=1;b<ledCount;b++)
{
    digitalWrite(arr[b], HIGH);
    digitalWrite(arr[b-1],HIGH);
    delay(delayTime);
    digitalWrite(arr[b], LOW);
    digitalWrite(arr[b-1], LOW);
}
digitalWrite(arr[5],HIGH);
delay(delayTime);
for(c=ledCount-2;c>=0;c--)
{
    digitalWrite(arr[c],HIGH);
    digitalWrite(arr[c+1], HIGH);
    delay(delayTime);
    digitalWrite(arr[c], LOW);
    digitalWrite(arr[c+1], LOW);
}
}
