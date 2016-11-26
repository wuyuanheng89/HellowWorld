#include"greet.h"

main(){
    printf("Hellow world");
    printf("ARE YOU READY");
    printf("ok,let's go");
    printf(g_words);
    if(g_cfg_say_bye){
        printf("bye bye");
    }else{
        // do nothing
    }
}

