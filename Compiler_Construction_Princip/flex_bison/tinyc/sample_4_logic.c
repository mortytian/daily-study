#include "for_gcc_build.hh" 
int main() {
	print("0 && 0 is %d", 0 && 0);
	print("0 && 1 is %d", 0 && 1);
	print("1 && 0 is %d", 1 && 0);
	print("1 && 1 is %d", 1 && 1);


	print("0 || 0 is %d", 0 || 0);
	print("0 || 1 is %d", 0 || 1);
	print("1 || 0 is %d", 1 || 0);
	print("1 || 1 is %d", 1 || 1);

	print("!1 is %d", !1);
	print("!0 is %d", !0);

	return 0;
}
