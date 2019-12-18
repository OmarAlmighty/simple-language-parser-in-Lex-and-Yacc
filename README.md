# simple language parser in Lex and Yacc
 stmt                 expr

                WHILE( cond ) { stmt }

                IF( cond  ) { stmt }

                FOR( dec ; cond ; expr ) { stmt }

                SWITCH( ID ) { caseStmt }

                dec

                cond

                eqAssign

                print

                func

expr                NUMBER

                ID ( parms )

                ID

                ID + ID

                ID - ID

                ID \* ID

                ID / ID

                ID % ID

                ID + expr

                ID + expr

                ID - expr

                ID \* expr

                ID / expr

                ID % expr

                expr + ID

                expr - ID

                expr \* ID

                expr / ID

                expr %ID

- --expr
- --ID

expr + expr

expr – expr

expr \* expr

expr / expr

                expr % expr

                ( expr )

                eqAssign

dec            INT ID  = expr

                DOUBLEID = expr

                BOOLID = cond

                TEXTID = STRING

cond                expr \&gt;= expr

expr \&lt;= expr

expr \&gt; expr

expr \&lt; expr

expr != expr

expr == expr

caseStmt                     case ( cond ):  { stmt };  caseStmt

                        case ( cond ):  { stmt };

eqAssign                ID += expr

                        ID -=  expr

                        ID /=  expr

                        ID \*= expr

print                        DISP (ID )

                        DISP (STRING )

                        DISPLN (ID )

                        DISPLN (STRING )

func                         DEF ID ( parms ) {stmt RT ( expr ) }

                        DEF ID ( parms ) {stmt RT ( ID ) }

parms                ID , parms

                        dec , parms

                        ID

                        dec
