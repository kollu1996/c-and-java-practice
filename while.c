
 L1=get_label();
 L2=get_label();
 R1=getreg();
 R1=codegen(tnode->left);
 fprintf(nikhil,"L%d:",L1);
  fprintf(nikhil,"JZ R%d,L%d",R1,L2);
 R1=codegen(tnode->right);
  fprintf(nikhil,"JMP L%d",L1);
 fprintf(nikhil,"L%d:",L2);



