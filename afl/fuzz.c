/* Second-Best Disassembler Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013> */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include <capstone.h>

static csh handle;

void main(void)
{
    uint8_t buf[2048];
    int size = read(0, buf, 2048);

	uint64_t address = 0x1000;
	cs_insn *insn;
	int i;
	size_t count;

    cs_err err = cs_open(PLATFORM, MODE, &handle);
    cs_option(handle, CS_OPT_DETAIL, CS_OPT_ON);
    cs_disasm(handle, buf, size, address, 0, &insn);
    cs_close(&handle);
}
