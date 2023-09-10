CC=arm-none-eabi-
CFLAGS=-gdwarf-2 -mcpu=cortex-m3
INCS= -I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
As_s=$(wildcard *.s)
As_o=$(As_s:.s=.o)
project_name= toggle_LED_cortexM3

all:$(project_name).bin	

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS)  $< -o $@	

$(project_name).elf: $(OBJ) $(As_o)
	$(CC)ld.exe -T linker_script.ld  $(LIBS) $(As_o)  $(OBJ)  -o  $@	 -Map=Map_file.map
	
$(project_name).bin: $(project_name).elf
	$(CC)objcopy.exe -O binary $<  $@
	
clear_all:
	rm *.o *.elf *.bin