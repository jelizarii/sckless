//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"TIEMPO ",	"curl -s wttr.in/Pamplona?format=%t",	60,	0},
	{"VOL ",	"wpctl get-volume @DEFAULT_AUDIO_SINK@ | awk '{print $2 * 100 }'",	30,	0},

	{"BAT ", "acpi -b | awk '{print $4}' | tr -d ','",	30,		0},

	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
