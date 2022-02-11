#include <iostream>

/*int main() {
  std::cout << "Hello World!\n";
}*/
int main(void) {
   int i, num;
   printf("Ingrese el Numero: ");
   scanf("%d", &num);
   printf("\n---->");

   while(num!=1){
     if(num%2 == 0){
       num=num/2;
     }else{
       num=num*3+1;
     } 
     printf("%d ", num); 
   }
   getchar();

   return 0;  
}