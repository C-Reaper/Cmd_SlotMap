#include "/home/codeleaded/System/Static/Container/SlotMap.h"

int main(int argc,const char *argv[]){
    
    SlotMap d = SlotMap_New(sizeof(int));

    SlotMap_Push(&d,(int[]){ 0 });
    SlotMap_Push(&d,(int[]){ 1 });
    SlotMap_Push(&d,(int[]){ 2 });
    SlotMap_Push(&d,(int[]){ 3 });
    SlotMap_Push(&d,(int[]){ 4 });
    SlotMap_Push(&d,(int[]){ 5 });
    SlotMap_Push(&d,(int[]){ 6 });
    SlotMap_Push(&d,(int[]){ 7 });
    SlotMap_Push(&d,(int[]){ 8 });
    SlotMap_Push(&d,(int[]){ 9 });

    SlotMap_Print(&d);

    SlotMap_Push(&d,(int[]){ 10 });
    SlotMap_Push(&d,(int[]){ 11 });
    SlotMap_Push(&d,(int[]){ 12 });
    SlotMap_Push(&d,(int[]){ 13 });
    SlotMap_Push(&d,(int[]){ 14 });
    SlotMap_Push(&d,(int[]){ 15 });
    SlotMap_Push(&d,(int[]){ 16 });
    SlotMap_Push(&d,(int[]){ 17 });
    SlotMap_Push(&d,(int[]){ 18 });
    SlotMap_Push(&d,(int[]){ 19 });

    SlotMap_Print(&d);

    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);

    SlotMap_Print(&d);
    
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);
    SlotMap_PopTop(&d);

    SlotMap_Print(&d);

    SlotMap_Free(&d);

    return 0;
}