/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 2000;                /* minimum width when centered */
static const unsigned int alpha = (int)(0.81*255);                                                       // patch: dmenu-alpha: 0-255
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"DejaVuSansMono Nerd Font:style=Book:size=18"
};
static const char *prompt = "";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm]          = { "#bbbbbb", "#222222" },
	[SchemeSel]           = { "#eeeeee", "#005577" },
	[SchemeOut]           = { "#000000", "#00ffff" },
	[SchemeSelHighlight]  = { "yellow",  "#005577"  },
	[SchemeNormHighlight] = { "yellow",  "#222222"  },
};

static const unsigned int alphas[SchemeLast][2] = {                                                      // patch: dmenu-alpha
	[SchemeNorm] = { OPAQUE, alpha },                                                                      // patch: dmenu-alpha
	[SchemeSel]  = { OPAQUE, alpha },                                                                      // patch: dmenu-alpha
	[SchemeOut]  = { OPAQUE, alpha },                                                                      // patch: dmenu-alpha
};                                                                                                       // patch: dmenu-alpha

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 24;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
