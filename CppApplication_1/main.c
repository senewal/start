printf("Welcome")
/*
 * Наумович Артур
 * 1. Реализовать функцию перевода из 10 системы в двоичную используя рекурсию.
2. Реализовать функцию возведения числа a в степень b:

a. без рекурсии;
b. рекурсивно;
c. *рекурсивно, используя свойство чётности степени.
3. Исполнитель Калькулятор преобразует целое число, записанное на экране. У исполнителя две команды, каждой команде присвоен номер:

    Прибавь 1
    Умножь на 2

Первая команда увеличивает число на экране на 1, вторая увеличивает это число в 2 раза. Сколько существует программ, которые число 3 преобразуют в число 20.
а) с использованием массива;
б) с использованием рекурсии.
Реализовать меню с выбором способа заполнения массива: из файла, случайными числами, с клавиатуры.

 */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


 long int destobin(int d);
 long int powd(a1,d);


//namespase std;


void menu();
void example1();
void example2();
void example3();
void example4();
void example5();
void example6();
void example7();
void example8();
void example9();
void example10();
void example11();
void example12();
void example13();
void example14();
void example15();






int main(int argc, char** argv) {
    srand(time(NULL));
	int choice,a1=0,b1=4;
        double c1;
        
	do{
		menu();
		
		printf("Input your choice, please\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			example1();
			break;
                        case 2:
			example2();
			break;
                        case 3:
			example3();
			break;
                        case 4:
			example4();
			break;
                        case 5:
			example5();
			break;
                        case 6:
			example6();
			break;
                        case 7:
			example7();
			break;
                        case 8:
			example8();
			break;
                        case 9:
			example9();
			break;
                        case 10:
			example10();
			break;
                        case 11:
			example11();
			break;
			case 0:
			printf("Goodbye");
			break;
		}
		
		
	}while(choice!=0||a1++>20);
	
	printf("Privet");
	return 0;
}
void example1(){
    printf("Converting desimal numbers to binary/n");
   
    int main()
    {
        int d;
        scanf("%i",&d);
        long int a=destobin(d);
        return 0;
    }
    long int destobin(int d)
    {
        if (d/2==0)
        {
            return d%2;
        }
        return destobin(d/2)*10 + d%2;
    }
	
}
void example2(){
    printf("Возведение числа a в степень n\n");
    printf("1-обычный, 2-рекурсия, 3- методом четных степеней\n");
    int a=5,n=5,choice=0,result,i,d;
    scanf("%d",&choice);
    switch(choice){
        case 1: result = a;
        for ( i=1;i<n;i++){
            result*=n;
            printf("result = %d в степени %d\n",result,i+1);           
        }
        case 2:printf("Рекурсия возведения числа а=%d в степень n=%d\n",a,n);     
            long int powd(a1,d){
            if (d!=1){                
                return a1*powd(a1,d-1);
            }
            return 1;
            //printf("result = %d в степени %d\n",,degree);
        }
            printf("%d\n",powd(a,n+1));
               }
    case 3: printf("Рекурсия возведения числа а=%d в степень n=%d четным способом\n",a,n);
        long int powd(a1,d){
            if (d=1){                
                return a1;
            }
            if (d==0){                
                return 1;
            } else return sqr(a1)*powd(a1,d-2);
            
            //printf("result = %d в степени %d\n",,degree);
        }
           // printf("%d\n",powd(a,n+1));
               }
    
  
    

void example3(){
        }
void example4(){
    
}
void example5(){
    printf("This is solution 5\n");
    
    
    
}
void example6(){
    printf("This is solution 6\n");
    
    
}
void example7(){
    printf("This is solution 7\n");
    
    
}
void example8(){
    printf("This is solution 8\n");
    
    
}
void example9(){
    printf("This is solution 9\n");
    
    
}
void example10(){
    printf("This is solution 10\n");
    
    
}
void example11(){
    printf("This is solution 11\n");
    
    
}
void example12(){
    printf("This is solution 12\n");
    
    
}
void example13(){
    printf("This is solution 13\n");
    
    
}
void example14(){
    printf("This is solution 14\n");
    
    
}
void example15(){
    printf("This is solution 15\n");
    
    
}

    
    

void menu(){
    printf("Main menu\n");
		printf("Example 1 \n");
		printf("Exapmle 2 \n");
                printf("Exapmle 3 - \n");
                printf("Exapmle 4 - \n");
                printf("Exapmle 5 - \n");
                printf("Exapmle 6 - \n");
                printf("Exapmle 7 - \n");
                printf("Exapmle 8 - \n");
                printf("Exapmle 9 - \n");
                printf("Exapmle 10 - \n");
                printf("Exapmle 11- \n");
                printf("Exapmle 12 - \n");
                printf("Exapmle 13 - \n");
                printf("Exapmle 14 - \n");
                printf("Exapmle 15 - \n");
                
                
                
                printf("Input program number from 1 to 15 or 0 for EXIT\n");
	}

