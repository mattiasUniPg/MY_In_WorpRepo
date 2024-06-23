public static int fibonacci(int n){
int f;
if (n==1)
f = 1;
else if (n==2)
f = 1;
else
f = fibonacci(n-1)+fibonacci(n-2);
return f;
}