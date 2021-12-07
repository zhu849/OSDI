void test(void);

int global_var;
int global_var_init = 123;

int main(){

	global_var = 0;
	test();
	global_var++;
	return 0;
}
