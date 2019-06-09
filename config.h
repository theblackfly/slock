/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282A36",   /* after initialization */
	[INPUT] =  "#BD93F9",   /* during input */
	[FAILED] = "#FF5555",   /* wrong password */
};

/* lock screen opacity */
static const float alpha = 1;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Enter password to unlock";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * text_size = "fixed";
