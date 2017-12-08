# Instructions

- `keymap_ergodox_custom.c` includes custom keymapping for ergodox
- `matrix.c` includes custom led configuration for ergodox
- Build via make, then load via teensy loader
```
make -f Makefile.lufa && make -f Makefile.lufa KEYMAP=ergodox_custom
```
- Remote server build

```
@echo off
if "%1" EQU "" (GOTO :NOPARAM)
SET FILE_NAME=ergodox_%1

del %FILE_NAME%.*
plink ojkwon@feedfever.cloudapp.net -P 9099 -i "%CMDER_ROOT%\..\serverrsakeys\arch_id_rsa_d2684_puttyformat.ppk" "cd ~/github/tmk_keyboard/keyboard/ergodox";"make -f Makefile.%1 clean";"make -f Makefile.%1 custom"
pscp.exe -P 9099 -i "%CMDER_ROOT%\..\serverrsakeys\arch_id_rsa_d2684_puttyformat.ppk" ojkwon@feedfever.cloudapp.net:/home/ojkwon/github/tmk_keyboard/keyboard/ergodox/%FILE_NAME%.eep ./
pscp.exe -P 9099 -i "%CMDER_ROOT%\..\serverrsakeys\arch_id_rsa_d2684_puttyformat.ppk" ojkwon@feedfever.cloudapp.net:/home/ojkwon/github/tmk_keyboard/keyboard/ergodox/%FILE_NAME%.hex ./

teensy_loader_cli.exe -mmcu=atmega32u4 -w ./%FILE_NAME%.eep -v
teensy_loader_cli.exe -mmcu=atmega32u4 -w ./%FILE_NAME%.hex -v

del %FILE_NAME%.*
plink ojkwon@feedfever.cloudapp.net -P 9099 -i "%CMDER_ROOT%\..\serverrsakeys\arch_id_rsa_d2684_puttyformat.ppk" "cd ~/github/tmk_keyboard/keyboard/ergodox";"make -f Makefile.%1 clean";

EXIT /b 0

:NOPARAM
ECHO Select either lufa or pjrc protocol to flash.
EXIT /b 1
```