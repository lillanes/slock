/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * text_size = "lucidasanstypewriter-bold-24";

/* time in seconds before the monitor shuts down */
static const int monitortime = 10;
