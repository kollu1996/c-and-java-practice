struct gsymbol *head=NULL;
struct gsymbol *hash=NULL;

 struct gsymbol* makeanentry(char *NAME,int TYPE,int *BINDING,struct makeanentry *next)
{
  struct gsymbol *temp;
 // temp=NULL;
temp=(struct gsymbol*)malloc(sizeof(struct gsymbol));
temp->NAME=(char*)malloc(sizeof(char));
strcpy(temp->NAME,NAME);
temp->TYPE=TYPE;
temp->BINDING=BINDING;
printf("now i have made an entry in symbol table\n");
temp->next=NULL;
if(head==NULL)
{
  head=temp;
 printf("i have given the value of temp to head\n");
}
else
{
struct gsymbol *temp1=head;
     while(temp1->next!=NULL)
    {
      temp1=temp1->next;
    }
    temp1->next=temp;
  }
  return(head);
}

 struct gsymbol* Glookup(char *NAME)
{
   printf("request came for me to search\n");
   struct gsymbol *star;
   //star=NULL;
   //star=(struct gsymbol*)malloc(sizeof(struct gsymbol));
   star=head;
   while(star!=NULL)
   {
    printf("i have entered while loop near star glookup\n");
   if(strcmp(star->NAME,NAME)==0)
   {
     printf("i found the identifier\n");
     return(star);
     // printf("i have send the value\n");
     // break;
   }
   star=star->next;
  }
   if(star==NULL)
  {
    return(star);
   }
}

struct tnode* makenode(int type,int NODETYPE,char* name,int value, struct tnode *l,struct tnode *r,struct tnode *m)
{

struct tnode *temp;
temp=(struct tnode*)malloc(sizeof(struct tnode));
temp->type=type;
temp->NODETYPE=NODETYPE;
printf("i have made a node\n");
temp->name=(char*)malloc(sizeof(char));
strcpy(temp->name,name);


temp->value=value;

temp->left=l;
temp->right=r;
temp->middle=m;
return temp;
}

int evaluate(struct tnode *tnode)
{
int *p;
   switch(tnode->NODETYPE)
   {
      case 1:/* ASSIGN */
      printf("hai i am now in evaluate\n");
       hash=Glookup(tnode->left->name);
      printf("i have assigned the value to hash\n");
        
        printf("%d\n",evaluate(tnode->right));
        printf("%u\n",hash->BINDING);
       *(hash->BINDING)= evaluate(tnode->right);
     printf("i have assigned the value to p\n");
      
      printf("i have sucessfully assigned the value\n");
      break;
     case 2: /* ASSIGN ARRAY */
    hash=Glookup(tnode->left->name);
    *(hash->BINDING+evaluate(tnode->middle))=evaluate(tnode->right);
      break;  
      case 3: /* WRITE */
      
      printf("%d\n",(evaluate(tnode->left)));
     break;
    case 101: /* WRITE AN ARRAY */
      hash=Glookup(tnode->left->name);
    return(*(hash->BINDING+evaluate(tnode->middle)));
   break;
      case 4: /*+*/
      return(evaluate(tnode->left) + evaluate(tnode->right));
      break;
      case 5:/*  * */
      return(evaluate(tnode->left) * evaluate(tnode->right));
      break;
      case 6:/*-*/
      return(evaluate(tnode->left) - evaluate(tnode->right));
      break;
      case 7:/* / */
      return(evaluate(tnode->left) / evaluate(tnode->right));
      break;
      case 8: /* NUM */
      printf("I am at node NUM %u\n",tnode->value);
      return (tnode->value);
      
      break;
      case 9: /* ID */
      hash=Glookup(tnode->name);
      printf("I am at node ID %d\n",*(hash->BINDING));
      return *(hash->BINDING);
      
      break;
      case 0:
      evaluate(tnode->left);
      evaluate(tnode->right);
      break;
      case 10: /* > */
      if(evaluate(tnode->left) > evaluate(tnode->right))
      {
             return (1);
      }
     else
     {
           return (0);
     }
     break;
     case 11: /* < */
     if(evaluate(tnode->left) < evaluate(tnode->right))
     {
          return (1);
     }
     else
     {
        return (0);
     }
      break;
     case 12: /* == */
       if(evaluate(tnode->left) == evaluate(tnode->right))
      {
        return(1);
      }
     else
    {
      return (0);
    }
    break;
    case 13: /* IF */
   if(evaluate(tnode->left)==1)
     {
       return ( evaluate (tnode->right));
     }
    break;
   case 14: /* WHILE */
   while(evaluate(tnode->left) ==1)
    {
       (evaluate(tnode->right));
    }
   if(evaluate(tnode->left)!=1)
   {
     break;
   }
    
 }

}
     
      


      

  
   


