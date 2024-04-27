const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a0a0a", /* black   */
  [1] = "#F09828", /* red     */
  [2] = "#FBFA03", /* green   */
  [3] = "#8A4996", /* yellow  */
  [4] = "#1CBFE5", /* blue    */
  [5] = "#9E9FA0", /* magenta */
  [6] = "#CAC4B1", /* cyan    */
  [7] = "#e3e3e4", /* white   */

  /* 8 bright colors */
  [8]  = "#9e9e9f",  /* black   */
  [9]  = "#F09828",  /* red     */
  [10] = "#FBFA03", /* green   */
  [11] = "#8A4996", /* yellow  */
  [12] = "#1CBFE5", /* blue    */
  [13] = "#9E9FA0", /* magenta */
  [14] = "#CAC4B1", /* cyan    */
  [15] = "#e3e3e4", /* white   */

  /* special colors */
  [256] = "#0a0a0a", /* background */
  [257] = "#e3e3e4", /* foreground */
  [258] = "#e3e3e4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
