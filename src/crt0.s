;
;   H4ck Software 2021
;
;   <src/crt0.asm>
;
;   Init Script.
;

    .import _main

.P816
_entry:
    rep $10 ; Assume we are running in a 65816 in emulation mode, change to native.
    ldx $01ff
    txs

    jsr _main ; main()

    stp ; Halt the processor, we are done.
