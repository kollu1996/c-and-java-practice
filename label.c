
 case: 10 /*WHILE*/
 
L1=get_label();
L2=get_label();
R1=get_reg();
R1=codegen(tnode->left);
R2=codegen(tnode->right);

fprintf(nikhil,"L%d",L1);
fprintf(nikhil,"MOV R%d,R%d",R0,R1);
fprintf(nikhil,"JZ R%d,L%d",R1,L1);
fprintf(nikhil,"MOV R%d,
