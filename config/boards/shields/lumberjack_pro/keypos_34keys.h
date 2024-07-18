/*                              34 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
  │  0   1   2   3   4 │  5   6   7   8   9 │ │ LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 │
  │ 10  11  12  13  14 │ 15  16  17  18  19 │ │ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
  │ 20  21  22  23  24 │ 25  26  27  28  29 │ │ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 │
  ╰───────────╮ 30  31 │ 32  33 ╭───────────╯ ╰───────────╮ LH1 LH0 │ RH0 RH1 ╭───────────╯
              ╰────────┴────────╯                         ╰─────────┴─────────╯             */

#pragma once

#define LTC  17  // left-top row
#define LTI  16
#define LTM  15
#define LTR  14
#define LTP  13

#define RTC  18  // right-top row
#define RTI  19
#define RTM  20
#define RTR  21
#define RTP  22

#define LMC 29  // left-middle row
#define LMI 28
#define LMM 27
#define LMR 26
#define LMP 25

#define RMC 30  // right-middle row
#define RMI 31
#define RMM 32
#define RMR 33
#define RMP 34

#define LBC 41  // left-bottom row
#define LBI 40
#define LBM 39
#define LBR 38
#define LBP 37

#define RBC 42  // right-bottom row
#define RBI 43
#define RBM 44
#define RBR 45
#define RBP 46

#define LHI 52  // left thumb keys

#define RHI 53  // right thumb keys

#define KEYS_L LTC LTI LTM LTR LTP LMC LMI LMM LMR LMP LBC LBI LBM LBR LBP  // left-hand keys
#define KEYS_R RTC RTI RTM RTR RTP RMC RMI RMM RMR RMP RBC RBI RBM RBR RBP  // right-hand keys
#define THUMBS LHI RHI 
