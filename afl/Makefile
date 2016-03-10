export AFL_USE_ASAN=1
export AFL_HARDEN=1

%: %.c
	afl-clang -o $@ ../libcapstone.a -I ../include $^
