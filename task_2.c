#include<stdio.h>
#include<math.h>

int main(){
float m1, m2, v1, v2, d1, d2;//оголошення змінних
printf("Введіть масу та об'єм першого об'єкта: ");
scanf("%f %f", &m1, &v1);
printf("Введіть масу та об’єм другого об'єкта: ");
scanf("%f %f", &m2, &v2);

d1=m1/v1;
d2=m2/v2;//формули густини

if(d1>d2){
printf("Перший об'єкт має більшу щільність.\n");
}
else if(d1<d2){
printf("Другий об'єкт має більшу щільність.\n");
}
else{
printf("Обидва об'єкти мають однакову щільність.\n");
}//структура if-else

return 0;
}