static const char norm_fg[] = "#e3e3e4";
static const char norm_bg[] = "#0a0a0a";
static const char norm_border[] = "#9e9e9f";

static const char sel_fg[] = "#e3e3e4";
static const char sel_bg[] = "#FBFA03";
static const char sel_border[] = "#e3e3e4";

static const char urg_fg[] = "#e3e3e4";
static const char urg_bg[] = "#F09828";
static const char urg_border[] = "#F09828";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
