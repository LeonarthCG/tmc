#include "global.h"
#include "player.h"
#include "structures.h"

extern void sub_08077E78(void*, u32);

void ResetPlayer() {
    u32 i = 0;
    void* ptr = &gUnk_03000B80;
    for (i = 0; i <= 2; i++) {
        sub_08077E78(ptr, i);
        ptr += 0x1c;
    }
    gPlayerState.field_0x3c[1] = 0;
    gPlayerState.field_0x1c = 0;
    gPlayerState.field_0x1d[4] = 0;
    gPlayerState.field_0x0[1] = 0;
    gPlayerState.field_0xe = 0;
    gPlayerState.field_0x1d[1] = 0;
    gPlayerState.field_0x1a[1] = 0;
    gPlayerState.field_0x3[0] = 0;
    gPlayerState.heldObject = 0;
    gPlayerState.flags.all &= ~(1<<27 | 1<<18);
    gPlayerEntity.field_0x70.WORD = 0;
    if (!(gPlayerState.jumpStatus & 0xc0)) {
        gPlayerState.jumpStatus = 0;
    }
    switch (gPlayerState.field_0xa8) {
        case 2:
        case 3:
        case 4:
            gPlayerState.field_0xa8 = 0;
    }
}
