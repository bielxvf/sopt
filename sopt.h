#ifndef SOPT_H
#define SOPT_H

#define SOPT_VERSION 0.1

typedef struct {
    int id;
    const char *s;
    const char *l;
    const char *vals;
    const char *usage;
} sopt_Option;

typedef struct {
    int id;
    const char *s;
    const char *l;
    const char *args;
    const char *usage;
} sopt_Subcommand;

typedef struct {
	const char *name;
	const char *version;
	const char *usage;
	size_t options_size;
	sopt_Option *options;
	size_t subcommands_size;
	sopt_Subcommand *subcommands;
} sopt_Program;

sopt_Program sopt_program_init(const char *name,
    const char *version,
    const char *usage);

void sopt_add_option(int id, const char *s, const char *l,
		     const char *usage, const char *vals);

bool sopt_option_is(int id, char **argv);
void sopt_print_help();
void sopt_print_version();

void _sopt_option_print(const sopt_Option *opt);

#endif // SOPT_H

#ifdef SOPT_IMPLEMENTATION

#endif // SOPT_IMPLEMENTATION
