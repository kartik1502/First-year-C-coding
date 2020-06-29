#include <stdio.h>
int isPalindrome(int num)
{
    int temp=num;
    int dig,rev;
     
 
    rev=0;
    while(num>0)
    {
        dig=num%10;
        rev=(rev*10)+dig;
        num/=10;
    }
     
    if(rev==temp)
        return 1;  
    else
        return 0;   
}
int main()
{
  int number;
  
  printf("Enter an integer number: ");
  scanf("%d", &number);
  
  if(isPalindrome(number))  
      printf("%d is a palindrome.", number);
  else
      printf("%d is not a palindrome.", number);
  
  return 0;
}