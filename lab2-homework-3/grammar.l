%option noyywrap
%s SINGLELINECOMMENTS MULTIPLELINECOMMENTS
%%
REGEXP { BEGIN SINGLELINECOMMENTS ;}
<SINGLELINECOMMENTS>REGEXP { C action code; } 
<SINGLELINECOMMENTS>REGEXP { BEGIN INITIAL; } 

REGEXP { BEGIN MULTIPLELINECOMMENTS ;}
<MULTIPLELINECOMMENTS>REGEXP { C action code; } 
<MULTIPLELINECOMMENTS>REGEXP { BEGIN INITIAL; } 
%%
