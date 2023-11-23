#include <stdio.h>
#include <stdlib.h>
#include <math.h>

////int main(){
//    char ans;
//    printf("Is programming easy? (y/n)\n");
//    scanf("%c", &ans);
//
//    switch(ans){
//    case 'Y':
//    case'y':
//            printf("I too think so..!\n");
//            break;
//    case 'N':
//    case 'n':
//            printf("Are u kidding?\n");
//            break;
//    default:
//            printf("Is that yes or no?\n");
//            break;
//
//}
//return 0;
////}
//
//
//int main(){
//    char op;
//    int n1, n2;
//    printf("Enter any operator(+,-,*,/)?\n");
//    scanf("%c", &op);
//    printf("Enter any two numbers:\n");
//    scanf("%d%d", &n1, &n2);
//    switch(op){
//    case'+':
//        printf("%d+%d=%d", n1,n2,n1+n2);
//        break;
//    case'-':
//        printf("%d-%d=%d", n1,n2,n1-n2);
//        break;
//    case'/':
//        printf("%d/%d=%d", n1,n2,n1/n2);
//        break;
//    case'*':
//        printf("%d*%d=%d", n1,n2,n1*n2);
//        break;
//    default:
//        printf("Enter a valid operation! ");
//        break;
//    }
//}
//
//
//int main(){
//    int num;
//    long long fact;
//    printf("Enter an integer: ");
//    scanf("%d", &num);
//    fact=1;
//    while(num>0){
//        fact=fact*num;
//        --num;
//    }
//    printf("Factorial=%lld", fact);
//    return 0;
//
//}
//
//
//
//int main(){
//int count1 = 1;
//while (count1 <= 10)
//{
//   int count2 = 1;
//   while (count2 <= 20)
//   {
//      printf("Here");
//      count2++;
//   }
//   count1++;
//}
//}
//
//
//int main(){
//    int val;
//    int max=0;
//    do{
//        printf("Enter a Positive number?(-1 to stop)\n");
//        scanf("%d", &val);
//        if(val>max)
//            max=val;
//    }while(val!=-1);
//    printf("%d is the maximum value among the given numbers!", max);
//    return 0;
//}
//
//
//
//int main(){
//    double num, sum=0;
//    do{
//        printf("Enter a number:\n");
//        scanf("%lf", &num);
//        sum += num;
//    }while(num!=0.0);
//    printf("Sum is %.2lf", sum);
//    return 0;
//}
//
//
//
//int main() {
//    double num, sum=0.0;
//    for(int i=1; i<=10; ++i){
//        printf("Enter \n %d:", i);
//        scanf("%lf", &num);
//        if(num<0.0)
//        break;
//
//    sum += num;
//    }
//    printf("Sum = %.2lf", sum);
//    return 0;
//}


//int main() {
//    int i, n;
//    printf("How many random numbers?\n");
//    scanf("%d", &n);
//    for(i=0; i<n; i++){
//        if(i%5==0)
//            printf("\n");
//        printf("%9d", rand());
//    }
//    printf("\n");
//    return 0;
//}

//int main() {
//    int num,count,sum=0;
//    printf("Enter a positive integer:\n");
//    scanf("%d", &num);
//    for(count=1; count<=num; ++count){
//        sum += count;
//    }
//    printf("sum=%d", sum);
//    return 0;
//}



//int main(){
//    for(int i=1; i<=10; i++){
//        if(i==4)
//            continue;
//        else
//            printf("%d\n", i);
//    }
//    return 0;
//
//}
//


//int absolute (int);
//int main(){
//    int num, answer;
//    printf("Enter an integer(0 to stop):\n");
//    scanf("%d", &num);
//    while(num!=0){
//        answer=absolute(num);
//        printf("The absolute value of %d is: %d", num, answer);
//        scanf("%d", &num);
//    }
//    return 0;
//}
// int absolute (int x){
//    if(x<0 || x>0)
//        return abs(x);
//    else
//        printf("Enter a number other than 0!");
// }

//int sum(int a, int b){
//    int s1=a+b;
//    return s1;
//}
//
//void display(int s2){
//    printf("The sum of Numbers %d:\n", s2);
//}
//
//int main(){
//    int num1=34;
//    int num2=23;
//    int sum_of=sum(num1, num2);
//    display(sum_of);
//    return 0;
//}

//
//int maximum(int, int, int);
//int main(){
//    int a,b,c;
//    printf("Enter the 3 integers:");
//    scanf("%d%d%d", &a,&b,&c);
//    printf("Maximum is: %d\n", maximum(a,b,c));
//}
//
//int maximum(int x, int y, int z){
//    int max=x;
//    if(y>max)
//        max=y;
//    if(z>max)
//        max=z;
//    return max;
//}

//#include <stdio.h>
//
//
//int f1(int n);
//int f2(void);
//
//int main(void){
//    int t;
//    printf("Enter a number: ");
//    scanf("%d", &t);
//    t?f1(t)+f2():printf("Zero entered!");
//    return 0;
//}
//
//int f1(int n){
//    printf("%d", n);
//    return 0;
//}
//
//int f2(){
//    printf("' 'entered");
//    return 0;
//}


//
//void reverseSen();
//int main(){
//    printf("Enter a sentence:");
//    reverseSen();
//    return 0;
//}
//
//void reverseSen(){
//    char c;
//    scanf("%c", &c);
//    if(c!='\n'){
//        reverseSen();
//        printf("%c", c);
//    }
//}


//int main(){
//    register int a;
//    scanf("%d", a);
//    printf("Entered register value: %d", a);
//    return 0;
//
//}
//
//
//void a(void);
//void b(void);
//void c(void);
//int x = 1;
//int main(){
//int x=5;
//printf("Local x outer %d\n", x);
//{
//
//    int x = 7;
//    printf("Local x inner %d\n", x);
//
//}
//printf("Local x outer main %d\n", x);
//a();
//b();
//c();
//printf("Local x in main %d", x);
//return 0;
//}
//
//
//void a(void){
//    int x = 25;
//    printf("Local x before %d\n", x);
//    ++x;
//    printf("Local x after %d\n", x);
//
//}
//
//
//void b(void){
//    static int x=50;
//    printf("Local Static x %d\n", x);
//    ++x;
//    printf("Local Static after %d\n", x);
//}
//
//void c(void){
//printf("Global x before %d\n", x);
//x *= 10;
//printf("Global x after %d\n", x);
//}

//void fibonacci(int range){
//    int a=0,b=1,c;
//    while(a<=range){
//        printf("%d\t", a);
//        c=a+b;
//        a=b;
//        b=c;
//
//    }
//}
//int main(){
//    int range;
//    printf("Enter the range for Fibonacci series:\n");
//    scanf("%d", &range);
//    fibonacci(range);
//    return 0;
//
//}
//
//int checkprime(int num){
//    int count=0;
//    for(int i=2; i<=num/2; i++){
//        if(num%i==0){
//            count=1;
//            break;
//        }
//    }
//    if(num==1) count=1;
//    return count;
//
//}
//
//int main(){
//int num;
//printf("Enter the Number: ");
//scanf("%d", &num);
//if(checkprime(num)==0)
//    printf("%d is a Prime number!", num);
//else
//    printf("%d is not a Prime Number!", num);
//return 0;
//       }


//int main(){
//    int i, num[5];
//    printf("Enter 5 numbers:\n");
//    for(i=0;i<5;i++)
//        scanf("%d", &num[i]);
//    printf("Array Elements are:\n");
//    for(i=0;i<5;i++)
//        printf("%d\n", num[i]);
//    return 0;
//}



//int main(){
//    char name[6];
//    name[0]='A';
//    name[1]='s';
//    name[2]='h';
//    name[3]='r';
//    name[4]='a';
//    name[5]='f';
//    name[6]='\0';  Takes null character in array character always
//    printf("The Individual Characters:\n");
//    printf("First Letter:%c\n", name[0]);
//    printf("Third Letter:%c\n", name[2]);
//    printf("Last Letter:%c\n", name[7]);
//    printf("Not Allocated any space:%c", name[10]);
//}
//
//
//int main(){
//    int numbers[]={1,2,3,4,5,6};
//    int i;
//    printf("Array elements are:\n");
//    for(i=0;i<=5;i++)
//        printf("%d\n",numbers[i]);
//    return 0;
//}
//
//void main(){
//    int num1[]={24, 23, 5, 56, 67, 68};
//    int i,num2[]={1, 2, 4, 5, 6, 6,};
//    printf("Elements if 1st-2nd Array:\n");
//    for(i=0;i<=4    ;i++)
//        printf("\n\t\t %d+%d=\t%d", num1[i], num2[i], num1[i]+num2[i]);
//    return 0;
//}

//int main(){
//    int sumo=0,sume=0,i=0,odd[5],even[5],a=-1,b=-1;
//    for(i=1;i<10;i++){
//            if(i%2==0)
//            even[++a]=i;
//            else
//            odd[++b]=i;
//    }
//    printf("\n\t Even \tOdd\n");
//    for(i=0;i<5;i++){
//        printf("\n\t%d \t%d",even[i],odd[i]);
//        sume=sume+even[i];
//        sumo=sumo+odd[i];
//    }
//    printf("\n\t====================\n");
//    printf("Addition of %d %d", sume, sumo);
//    return 0;
//}

//
//int main(){
//    int matrix[3][3],i,j,r,c;
//    printf("Enter the order of Matrix:\n");
//    scanf("%d%d", &r, &c);
//    printf("Enter the elements of Matrix for %d row %d column:\n", r, c);
//    for(i=0;i<r;i++){
//        for(j=0;j<c;j++){
//            scanf("%d", &matrix[i][j]);
//        }
//    }
//    printf("Given Matrix:\n");
//    for(i=0;i<r;i++)
//    {
//    for(j=0;j<c;j++)
//    printf("%d\t",matrix[i][j]);
//    printf("\n");
//    }
//    printf("%d\t",matrix[2][2]);
//    return 0;
//    }

//int main(){
//int n[]={19,3,12,15,7,3,5,7,12,23};
//int i,j;
//printf("%s%13s%17s\n", "Element","Value","Histogram");
//for(i=0;i<10;i++){
//    printf("%7d%13d\t", i, n[i]);
//    for(j=1;j<=n[i];j++)
//        printf("%c", '*');
//    printf("\n");
//}
//return 0;
//}
//
//
//
//int main() {
//    int array[10], max, size, c, location=1;
//    printf("Enter the number of elements: ");
//    scanf("%d", &size);
//    printf("Enter the %d integers:\n", size);
//    for(c=0;c<size;c++)
//    scanf("%d", &array[c]);
//    max = array[0];
//    for(c=1;c<size;c++){
//        if(array[c]>max){
//            max=array[c];
//            location=c+1;
//        }
//    }
//    printf("maximum Element is present in location %d and its value is %d\n", location, max);
//    return 0;
//}
//
//int main() {
//    char text[]="HAPPY";
//    char text1[]="hello";
//    printf("The test converted to lower case:%s\n", strlwr(text));
//    printf("The test converted to upper case:%s\n", strupr(text1));
//    return 0;
//}
//
//int main(){
//    char name[20];
//    int i,l;
//    printf("Enter your name:\n");
//    scanf("%s", &name);
//    l=strlen(name);
//    l=strlen(name);
//    printf("Your name is %s: ", name);
//    printf("It contains %d Characters ". l);
//    printf("\nName & its ASCII Value:\n");
//    for(i=0;i<l;i++)
//        printf("\n\t%c\t\t%d", name[i], name[i]);
//    return 0;
//}
//
//
//
//void main()
//{
//int i,j,a;
//scanf(¡°%s¡±,&a);
//printf(¡°The given Values are:¡±);
//for (i=0;i<=6;i++)
//{
//     for (j=0;j<i;j++)
//    {
//       printf("%d",a[i]);
//     }
//    printf("\n");
//}
//}
//
//#include <stdio.h>
//#include <string.h>
//int main() {
//   int i,j;
//   char a[6];
//   scanf("%s", &a);
//   printf("The given value as a ladder:\n");
//   for(i=0;i<=6;i++){
//       for(j=0; j<i;j++){
//        printf("%c", a[j]);
//        }
//        printf("\n");
//   }
//
//   return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//int main(){
//char str1[]="asel";
//char str2[]="asel";
//int i=strcmpi(str1, str2);
//printf("The String comparison gives the value:%d\n", i);
//return 0;
//
//}

//void printFib(int n){
//    static int n1=0, n2=1, n3;
//    if(n>0){
//        n3=n1+n2;
//        n1=n2;
//        n2=n3;
//        printf("%d\t", n3);
//        printFib(n-1);
//    }
//}
//
//int main(){
//    int n;
//    printf("Enter how many elements:");
//    scanf("%d", &n);
//    printf("Fibonacci Series:\n");
//    printf("%d %d\t", 0,1);
//    printFib(n-2);
//    return 0;
//
//}

//void goal(int x){
//    static int y;
//    if(x==0)
//        printf("%d\n", y);
//    else if(x==1)
//        y=100;
//    else if(x==2)
//        y++;
//}
//
//int main(void){
//    goal(1);
//    goal(0);
//    goal(2);
//    goal(0);
//    return 0;
//}

//#include <stdio.h>
//#define start main
//void start(){
//    printf("Hello");
//}
//
//
//    int main(){
//    int n, reverse=0, rem;
//    printf("Enter a Number: \n");
//    scanf("%d", &n);
//    while(n!=0){
//        rem=n%10;
//        reverse=reverse*10+rem;
//        n/=10;
//    }
//    printf("Reversed Number:%d", reverse);
//    return 0;
//}

//
//void main(){
//    int i,j,temp;
//    int a[10]={10,9,7,101,23};
//
//    for(i=0;0<5;i++){
//        for(j=i+1;j<5;j++){
//            if(a[j]<a[i]){
//                temp=a[i];
//                a[i]=a[j];
//                a[j]=temp;
//            }
//        }
//    }
//    printf("Printing the arranged Values:\n");
//    for(i=0;i<5;i++){
//        printf("%d\n", a[i]);
//    }
//}

//int getReverse(int num){
//    int revNum=0;
//    while(num>0){
//        revNum=(revNum*10)+(num%10);
//        num=num/10;
//    }
//    printf("\nThe reverse of Number=%d", revNum);
//}
//int getSum(int num){
//    int sum=0;
//    while(num>0){
//        sum=sum+(num%10);
//        num=num/10;
//    }
//    printf("The sum of given number %d", sum);
//    return sum;
//}
//int main(){
//    int num, sum, revNum;
//    printf("Enter the number:\n");
//    scanf("%d", &num);
//    sum=getSum(num);
//    revNum=getReverse(sum);
//    int res=sum+revNum;
//    printf("\n The product of %d and %d=%d", sum, revNum, res);
//    if(res==num)
//        printf("The %d is a Magic Number!", num);
//    else
//        printf("The %d is not a Magic Number", num);
//}
//
//#include <stdio.h>
//
//int main()
//
//{
//
//    int i, num, temp = 0;
//
//    // read input from user.
//
//    printf("Enter any numb to Check for Prime: ");
//
//    scanf("%d", &num);
//
//    // iterate up to n/2.
//
//    for (i = 2; i <= num / 2; i++)
//
//    {
//
//        // check if num is divisible by any number.
//
//        if (num % i == 0)
//
//        {
//
//            temp++;
//
//            break;
//
//        }
//
//    }
//
//    // check for the value of temp and num.
//
//    if (temp == 0 && num != 1)
//
//    {
//
//        printf("%d is a Prime number", num);
//
//    }
//
//    else
//
//    {
//
//        printf("%d is not a Prime number", num);
//
//    }
//
//    return 0;
//
//}











//
//After midterm 2023-11-01

//1----------------------------------------------------------------------------------------

//void main(){
//
//
//int A = 3;
//int B;
//int *P = &A;
//int *Q = P;
//int *R = &B;
//
//printf("Enter a value for b:\n ");
//scanf("%d", &B);
//printf("%d %d\n", A, B);
//printf("%d %d %d\n", *P, *Q, *R);
//Q=&B;
//if(P==Q)
//    printf("1\n");
//if(Q==R)
//    printf("2\n");
//if(*P==*Q)
//    printf("3\n");
//if(*Q==*R)
//    printf("4\n");
//if(*P==*R)
//    printf("5\n");
//
//}

//2----------------------------------------------------------------------------------------

//void main(){
//    int a=1024;
//    int *p=&a;
//    int**q=&p;
//    int ***r=&q;
//    printf("%d %d %d %d\n", a, *p, **q, ***r);
//}

//3----------------------------------------------------------------------------------------

//void main(){
//    int a = 102;
//    printf("%d %u\n", a, &a);
//    printf("\t char %d bytes and its pointer %d bytes",
//           sizeof(char), sizeof(char*));
//    printf("\t int %d bytes and its pointer %d bytes",
//           sizeof(int), sizeof(int*));
//}

//4----------------------------------------------------------------------------------------

//
//void main(){
//    int a=102;
//    int *pa;
//    pa=&a;
//    printf("Address of a=%u\n", pa);
//    printf("Value of a=%d\n", a);
//    printf("Value of a=%d\n", *(&a));
//    printf("Value of a=%d\n", *pa);
//}

//5----------------------------------------------------------------------------------------

//void main(){
//    int a,b,c,d,*ap,*bp;
//    a=10;
//    b=12;
//    ap=&a;
//    bp=&b;
//    c=a+b;
//    d=*ap+*bp;
//    printf("Sum through pointers:d\n", d);
//    printf("Multiplication through pointers:%d\n", a**bp);
//    printf("Divide via pointers:%d\n", *ap/b);
//    printf("Modulo operator:%d\n", *ap%b or a%*bp);
//
//}

//6----------------------------------------------------------------------------------------

//
//void main()
//{
//int a=2,*j,*k;
//j=&a;
//k=&a;
//if(j==k)
//printf("Two pointers have same address");
//else
//printf("The Pointers have different addresses");
//printf("Address of a(j)=%u",j);
//printf("Address of a(k)=%u",k);
//}

//7----------------------------------------------------------------------------------------

//void main(){
//    int num[4]={10, 25, 45, 35}, i;
//    printf("Elements are:\n");
//    for(i=0;i<4;i++){
//        printf("num[%d]=%d", i, *(num+i));
//        printf("%8u\n", num+i);
//    }
//}



//2023-11-02
////8----------------------------------------------------------------------------------------
//void main(){
//    int s[]={10,20,30,40,50};
//    int *pb;
//    int ds[5], i;
//    pb=s;
//    for(i=0;i<5;i++){
//        ds[i]=*pb;
//        pb++;
//    }
//    printf("Original Array, Duplicated array");
//    for(i=0;i<5;i++)
//        printf("\n\t%d\t%d", s[i],ds[i]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void main(){
//    float *nums;
//    int n, i;
//    printf("How many number?\n");
//    scanf("%d", &n);
//    nums=(float*)calloc(n,sizeof(float));
//    for(i=0;i<n;i++){
//        printf("Please enter number %d:", i+1);
//        scanf("%f", &(nums[i]));
//    }
//}

////9---------------------------------------------------------------------------------------------
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void main(){
//    char *str;
//    str=(char*)malloc(15);
//    strcpy(str, "ComputerScience");
//    printf("String=%s\t, Address=%u\n", str, str);
//    str=(char*)realloc(str,25);
//    strcat(str,",net");
//    printf("String=%s\t, Address New=u%\n", str, str);
//    free(str);
//}

//10------------------------------------------------------------------------------------------------
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void main(){
//    int k, *x;
//    for(k=0;k<3;k++)
//    printf("%u\t", x[k]);
//}

//11--------------------------------------------------------------------------------------------------

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void main(){
//    int i, *ii;
//    puts("Enter value for i:");
//    scanf("%d", &i);
//    ii=&i;
//    printf("Address of i=%u\n", ii);
//    printf("Address of i=%u\n", ++ii);
//    printf("Address of i=%u\n", ii++);

//    int arr[5]={23,45,67},p;
//    for(p=0;p<5;p++){
//        printf("Value of arr[%d]:\n",p);
//        printf("Value of %d:\n",arr[p]);
//        printf("Value of %d:\n",*(arr+p));
//        printf("Value of %d:\n",*(p+arr));
//        printf("Value of %d:\n",p[arr]);
//    }
//}

//12----------------------------------------------------------------------------------------------------

//void main(){
//    char *buf1="Computer";
//    char *buf2="Com ter";
//    int stat;
//    stat=memicmp(buf1,buf2,4);
//    if(stat)
//    printf("They are nor same!");
//    else
//    printf("They are same!");
//}

//13------------------------------------------------------------------------------------------------------

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void main(){
//    float A[6]={1.0,2.0,1.0,0.6,3.0,2.0};
//    float *theMin=&(A[0]);
//    float *walker=&(A[1]);
//    while(walker<&(A[6])){
//        if(*walker<*theMin)
//        theMin=walker;
//    walker=walker+1;
//    }
//    printf("%f\n", *theMin);
//}


//2023-11-08

//14---------------------------------------------------------------------------------------------------------

//struct date1{
//    unsigned int d;
//    unsigned int m;
//    unsigned int y;
//};
//int main(){
//    struct date1 dt={8,9,2019};
//    printf("Size of the date is %d bytes\n", sizeof(struct date1));
//    printf("Date is %d%d%d\n", dt.d,dt.m,dt.y);
//    return 0;
//}

//15---------------------------------------------------------------------------------------------------------

//struct test1
//{
//   unsigned int x: 5;
//   unsigned int y: 8;
//};
//  
//// A structure with forced alignment
//struct test2
//{
//   unsigned int x: 5;
//   unsigned int: 0;
//   unsigned int y: 8;
//};
//  
//int main()
//{
//   printf("Size of test1 is %d bytes\n", sizeof(struct test1));
//   printf("Size of test2 is %d bytes\n", sizeof(struct test2));
//   return 0;
//}

//16---------------------------------------------------------------------------------------------------------

//struct test
//{
//   unsigned int x: 5;
//   unsigned int y: 5;
//   unsigned int z;
//};
//int main()
//{
//   struct test t;
//   printf("Address of bit field is: %p\n", &t.x);
//   printf("Address of normal field is: %p", &t.z);
//   return 0;
//}

//17---------------------------------------------------------------------------------------------------------

//struct test
//{
//unsigned int x: 4;
//unsigned int y: 4;
//unsigned int z;
//};
//int main(){
//struct test t;
//t.x=15;
//printf("Value is %d\n", t.x);
//return 0;
//}

//18---------------------------------------------------------------------------------------------------------

//struct test{
//    unsigned int d;
//    unsigned int m:33;
//    unsigned int n;
//};
//int main(){
//    struct test t;
//    printf("The sise of Structure is %d", sizeof(struct test));
//    return 0;
//}

//19---------------------------------------------------------------------------------------------------------

//struct student{
//    int rollno;
//    int marks;
//    char name[10];
//};
//int main(){
//    int size;
//    struct student s;
//    size=sizeof(s);
//    printf("The size of Student(Structure):%d", size);
//    return 0;
//
//}

//20---------------------------------------------------------------------------------------------------------

//struct Emp{
//    int id;
//    int Age;
//    char Name[25];
//    long salary;
//};
//void main(){
//    int i;
//    struct Emp e[3];
//    for(i=0;i<3;i++){
//        printf("Enter the Details of Emp:%d\n", i+1);
//        printf("Enter Emp id:\n");
//        scanf("%d", &e[i].id);
//        printf("Enter Age:\n");
//        scanf("%d", &e[i].Age);
//        printf("Enter Name:\n");
//        scanf("%s", &e[i].Name);
//        printf("Enter Salary:\n");
//        scanf("%d", &e[i].salary);
//    }
//for(i=0;i<3;i++){
//    printf("%d\n%s\n%d\n%d", e[i].id, e[i].Name, e[i].Age, e[i].salary);
//    }
//}

//2023-11-15
//21---------------------------------------------------------------------------------------------------------


//typedef struct Point{
//    int x;
//    int y;
//}Point;
//
//int main(){
//    Point p1;
//    p1.x = 10;
//    p1.y = 24;
//    printf("The value of X is %d:", p1.x);
//    return 0;
//}

//22---------------------------------------------------------------------------------------------------------

//struct address{
//  char city[20];
//  int pin;
//  int phone;
//};
//struct employee{
//    char name[25];
//    struct address add;
//};
//void display(struct employee);
//void main(){
//    struct employee emp;
//    printf("Enter employee information:\n");
//    scanf("%s %s %d %d\n", &emp.name, &emp.add.city, &emp.add.pin, &emp.add.phone);
//    display(emp);
//}
//void display(struct employee emp){
//    printf("Printing the details:\n");
//    printf("Name:%s, City:%s, Pin:%d, Phone:%d\n",
//            emp.name, emp.add.city, emp.add.pin, emp.add.phone);
//}

//23---------------------------------------------------------------------------------------------------------

//#include <stdio.h>
//struct Coordinate{
//    int x;
//    int y;
//};
//int main(){
//struct Coordinate Fr_point;
//struct Coordinate *cp;
//cp=&Fr_point;
//(*cp).x=5;
//(*cp).y=10;
//printf("First Coordinate(x,y)=(%d,%d)",(*cp).x,(*cp).y);
//return 0;
//}

//24---------------------------------------------------------------------------------------------------------

//struct Coordinate{
//    int x;
//    int y;
//};
//
//int main(){
//struct Coordinate Fr_point;
//struct Coordinate *cp=&Fr_point;
//
//printf("Enter the coordinate values:");
//scanf("%d %d\n", &cp->x, &cp->y);
//printf("The coordinate points are: %d %d\n", cp->x, cp->y);
//return 0;
//}

//25---------------------------------------------------------------------------------------------------------
//#include <stdio.h>
//#include <math.h>
//struct Coordinate{
//    int x;
//    int y;
//};
//
//float getDist(struct Coordinate *X, struct Coordinate *Y){
//    int x_diff=X->x - Y->x;
//    int y_diff=X->y - Y->y;
//    float dist=sqrt((x_diff*x_diff)+(y_diff*y_diff));
//    return dist;
//}
//
//int main(){
//    struct Coordinate a,b;
//    a.x=5, a.y=6;
//    b.x=4, b.y=7;
//    float dist=getDist(&a, &b);
//    printf("Distance between Points(%d,%d) and (%d,%d)="
//           "%.3f", a.x,a.y,b.x,b.y,dist);
//}

//26---------------------------------------------------------------------------------------------------------

//int sum(int num1, int num2){
//    return num1+num2;
//}
//int main(){
//    int (*f2p)(int, int);
//    f2p=sum;
//    int op1=f2p(10,13);
//    int op2=sum(10,13);
//    printf("Output:Call by Reference Pointer:%d\n", op1);
//    printf("Output2:Call by value: %d\n", op2);
//    return 0;
//
//    }

//27---------------------------------------------------------------------------------------------------------

//void salaryHike(int *var, int b){
//    *var=*var+b;
//}
//int main(){
//    int salary=0,bonus=0;
//    printf("Enter the Employee Current Salary:\n");
//    scanf("%d", &salary);
//    printf("Enter the bonus:\n");
//    scanf("%d", &bonus);
//    salaryHike(&salary, bonus);
//    printf("Net Salary is:%d\n", salary);
//    return 0;
//}

//2023-11-16
//28---------------------------------------------------------------------------------------------------------

//union unionJob{
//    char anme[32];
//    float salary;
//    int WorkerNo;
//};uJob;
//
//struct structJob{
//    char name[32];
//    float salary;
//    int WorkerNo;
//};sJob;
//
//int main(){
//    printf("The size of Union is: %d bytes\n", sizeof(uJob));
//    printf("The size of Structure is: %d bytes", sizeof(sJob));
//    return 0;
//}

//29---------------------------------------------------------------------------------------------------------

//
//union unionJob{
//    char name[32];
//    float salary;
//    int WorkerNo;
//}uJob;
//
//int main(){
//    uJob.salary=12000;
//    uJob.WorkerNo=1001;
//    printf("The salary of Union is: %f bytes\n", uJob.salary);
//    printf("The WorkerNo is: %d bytes", uJob.WorkerNo);
//    return 0;
//}

//30---------------------------------------------------------------------------------------------------------

//#include <stdio.h>
//#include <stdarg.h>
//
//double average(int num, ...){
//    va_list valist;
//    double sum=0.0;
//    int i;
//    va_start(valist,num);
//    for(i=0;i<num;i++){
//        sum+=va_arg(valist, int);
//    }
//    va_end(valist);
//    return sum/num;
//}
//int main(){
//    printf("Average of 2,3,4,5:%f\n", average(4,2,3,4,5));
//    printf("Average of 5,10,15:%f\n", average(3,4,10,15));
//    return 0;
//}

//31---------------------------------------------------------------------------------------------------------

//#include <stdio.h>
// int main(){
//     printf("File: %s\n", __FILE__);
//     printf("Date: %s\n", __DATE__);
//     printf("Time: %s\n", __TIME__);
//     printf("Line: %d\n", __LINE__);
//     printf("ANSI: %d\n", __STDC__);
//     return 0;
// }

//32---------------------------------------------------------------------------------------------------------

//#include <stdio.h>
//
//#define message_for(a,b) \
//    printf(#a " and " #b ": We are in the class!\n")
//
//int main(){
//    message_for(Carole, Debra);
//    return 0;
//}

//33---------------------------------------------------------------------------------------------------------

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//    int num;
//    FILE *fptr;
//    fptr=fopen("C:\\nUsers\\ENG\\Documents\\hello.txt", "w");
//    if(fptr==NULL){
//        printf("Error in path or file doesn't exist!");
//        exit(1);
//    }
//    printf("Enter a number to write in the file:\n");
//    scanf("%d", &num);
//    fprintf(fptr, "%d", num);
//    fclose(fptr);
//    return 0;
//}

//34---------------------------------------------------------------------------------------------------------

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//    int num;
//    FILE *fptr;
//    if((fptr=fopen("C:\\nUsers\\ENG\\Documents\\hello.txt", "r"))==NULL){
//        printf("Error Opening File!");
//        exit(1);
//    }
//    fscanf(fptr, "%d", &num);
//    printf("Value of num: %d", num);
//    fclose(fptr);
//    return 0;
//}

//2023-11-22
//35---------------------------------------------------------------------------------------------------------

//void disp(int *num){
//    printf("%d", *num);
//}
//
//int main(){
//    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    for(int i=0;i<10; i++){
//        printf("\nDisplaying the %d elements\n", i);
//        disp(&arr[i]);
//    }
//    return 0;
//}

//36---------------------------------------------------------------------------------------------------------

//int main(){
//    int* ptr1=(int*)malloc(sizeof(int));
//    if(ptr1==NULL){
//        printf("Memory allocation failed!\n");
//        return 1;
//    }
//    *ptr1=42;
//    printf("Value stored at ptr1:%d\n", *ptr1);
//
//    int* ptr2=(int*)calloc(5,sizeof(int));
//    printf("Values stored at ptr2: %d, %d, %d\n", ptr2[0], ptr2[1], ptr2[2]);
//
//    int* ptr3=(int*)realloc(ptr2, 5*sizeof(int));
//    ptr3[3]=100;
//    ptr3[4]=200;
//    printf("Values stored at ptr3:%d,%d,%d,%d,%d\n", ptr3[0], ptr3[1], ptr3[2], ptr3[3], ptr3[4]);
//    free(ptr1);
//    free(ptr3);
//    return 0;
//}

//37---------------------------------------------------------------------------------------------------------

//int main(){
//    int num=42;
//    int *ptr1=&num;
//    int **ptr2=&ptr1;
//    printf("Value of num:%d\n", **ptr2);
//    printf("Address of num:%p\n", *ptr2);
//    printf("Value at address pointed by ptr1: %d\n", *ptr1);
//    **ptr2=100;
//    printf("Modified value of num:%d\n", num);
//    return 0;
//}

//38---------------------------------------------------------------------------------------------------------

//struct Point{
//    int x;
//    int y;
//};
//void modufyPoint(struct Point *ptr){
//    ptr->x+=1;
//    ptr->y+=1;
//}
//int main(){
//    struct Point myPoint={10,20};
//    printf("Original Point:(%d,%d)\n", myPoint.x, myPoint.y);
//    modifyPoint(&myPoint); or modufyPoint
//    printf("Modified Point:(%d,%d)\n", myPoint.x, myPoint.y);
//    return 0;
//}

//39---------------------------------------------------------------------------------------------------------

//#include <stdio.h>
//
//void add(int a, int b){
//    printf("Addition: %d+%d=%d\n", a, b, a+b);
//}
//void subtract(int a, int b){
//    printf("Subtract: %d-%d=%d\n", a, b, a-b);
//}
//int main(){
//    void(*operationPtr)(int, int);
//    operationPtr=add;
//    printf("Using Function Pointer for Addition:\n");
//    operationPtr(5,3);
//
//    operationPtr=subtract;
//    printf("Using Function Pointer for Substraction:\n");
//    operationPtr(5,3);
//
//    return 0;
//}

//40---------------------------------------------------------------------------------------------------------


//#include <stdio.h>
//
//int main(){
//    char *strptr="Hello";
//    char *t = strptr;
//    while(*t!='\0'){
//        printf("%c", *t);
//        t++;
//    }
//    return 0;
//}
