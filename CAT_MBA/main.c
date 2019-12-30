extern int l2_cat_main(int argc, char *argv[]);
extern int l3_cat_main(int argc, char *argv[]);
extern int mba_main(int argc, char *argv[]);
extern int association_main(int argc, char *argv[]);
extern int reset_main(int argc, char *argv[]);

int main(int argc, char *argv[]) {
	l3_cat_main(argc, argv);
	association_main(argc, argv);
	reset_main(argc, argv);
}