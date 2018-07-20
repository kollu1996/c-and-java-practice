
  /*int a,b=0,c,decimal_num,remai,base=1,num;
  long int binary=0; */
  printf("?");
  scanf("%d",&a);
  while (a > 0)
    {
        c = a % 10;
        b  = b + c;
        a /= 10;
    }
     num=b;
    decimal_num = num;
    while (num > 0)
    {
        remai = num % 2;
        binary = binary + remai * base;
        num = num / 2;
        base = base * 10;
    }
    printf("%ld\n", binary);

