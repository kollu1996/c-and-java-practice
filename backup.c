"MOV R[0-9],R[0-9]\n" {if(k==0)cou=cou+2;}
"MOV [R[0-9]],R[0-9]\n" {if(k==0)cou=cou+2;}
"MOV R[0-9],[R[0-9]]\n" {if(k==0)cou=cou+2;}
"MOV R[0-9] ,[0-9]+\n" {if(k==0)cou=cou+2;}
"MOV SP,[0-9]\n"  {if(k==0)cou=cou+2;}
"PUSH R[0-9]\n" {if(k==0)cou=cou+2;}
"POP R[0-9]\n" {if(k==0)cou=cou+2;}
"GE R[0-9],R[0-9]\n"  {if(k==0)cou=cou+2;}
"LT R[0-9],R[0-9]\n"  {if(k==0)cou=cou+2;}
"EQ R[0-9],R[0-9]\n"  {if(k==0)cou=cou+2;}

"ADD R[0-9],R[0-9]\n" {if(k==0)cou=cou+2;}
"MUL R[0-9],R[0-9]\n" {if(k==0)cou=cou+2;}
"SUB R[0-9],R[0-9]\n" {if(k==0)cou=cou+2;}
"DIV R[0-9],R[0-9]\n" {if(k==0)cou=cou+2;}
"INT [0-9]+\n" {if(k==0)cou=cou+2;}
"\n" { cou=cou+2; }


"JMP L[0-9]\n" {  if(k==0)
                   {
                     cou=cou+2;
                   }
                   else 
                   {
                    s=(char *)malloc(sizeof(char)); 
                      struct labeltrans *hash1;
                    strcpy(s,yytext+4);  
                   hash1=llookup(s);
                   fprintf(nikhil1,"JMP %d \n",hash1->address);
                  }
                }
"JZ R[0-9],L[0-9]\n"  {
                       if(k==0)
                   {
                     cou=cou+2;
                   }
                   else
                   {
                    s=(char *)malloc(sizeof(char)); 
                     struct labeltrans *hash1;
                    strcpy(s,yytext+6);  
                   hash1=llookup(s);
                   yyless(6);
                   fprintf(nikhil1,"%s %d",yytext,hash1->address);
                      }
                    }


