#include <stdio.h>
#include "json_c.c"
#include <memory.h>
#include <string.h>

typedef struct{
    char nodetype[10];
    char coord[];

} Block_item;

/*구조 정리 : exit() -> 0~54번 함수 존재 -> 각 함수 type
arg면 -> param (여러 개 존재 가능)필요
type -> type 도 가능
node type가 FuncDef인 경우
body 존재 -> block items -> itmes 안에 또 여러 개 존재 (init, cond(안에 op), iftrue, ifflase) 
-> 안에 stmt -> block items
& decl -> type*/

int main()
{
    const char *str = {"_nodetype"};

}
