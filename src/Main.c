#include "/home/codeleaded/System/Static/Container/SlotMap.h"

int main(int argc,const char *argv[]){
    
    SlotMap d = SlotMap_New(sizeof(int));

    SlotMap_Insert(&d,(int[]){ 1 });
    SlotMap_Insert(&d,(int[]){ 2 });
    SlotMap_Insert(&d,(int[]){ 3 });
    SlotMap_Insert(&d,(int[]){ 4 });
    SlotMap_Insert(&d,(int[]){ 5 });
    SlotMap_Insert(&d,(int[]){ 6 });

    SlotMap_Print(&d);

    SlotMap_Remove(&d,0);

    SlotMap_Insert(&d,(int[]){ 7 });
    SlotMap_Insert(&d,(int[]){ 8 });
    SlotMap_Insert(&d,(int[]){ 9 });
    SlotMap_Insert(&d,(int[]){ 10 });
    SlotMap_Insert(&d,(int[]){ 11 });
    SlotMap_Insert(&d,(int[]){ 12 });
    
    SlotMap_Print(&d);

    SlotMap_Remove(&d,1);

    SlotMap_Print(&d);

    SlotMap_Free(&d);

    return 0;
}