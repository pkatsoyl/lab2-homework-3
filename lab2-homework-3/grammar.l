%option noyywrap
%s SINGLELINECOMMENTS
%%
"//" { BEGIN (SINGLELINECOMMENTS) ;}
<SINGLELINECOMMENTS>.* { printf("i find it\n"); } 
<SINGLELINECOMMENTS>\n { BEGIN (INITIAL); } 


%%

