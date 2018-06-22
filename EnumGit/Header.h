#pragma once

enum simple1{
  s51 = 1,
  s52,
  s53,
  s54,
  s55,
  s56,
  s57,
  s58,
  s59
};

enum simple2 {
  s1 = 0,
  s2,
  s3,
  s4,
  s5,
  s6,
  s7,
  s8,
  s9,
  s10,
  s12,
  s13,
  s14,
  s15,
  s16,
  s17,
  s18,
  s19,
  s21,
  s22,
  s23,
  s24,
  s25,
  s26,
  s27,
  s28,
  s29,
  s31,
  s32,
  s33,
  s34,
  s35,
  s36,
  s37,
  s38,
  s39
};

typedef enum {
    PAS_INTVL_TIME_1_MIN = 1,
    PAS_INTVL_TIME_2_MIN,
    PAS_INTVL_TIME_3_MIN,
    PAS_INTVL_TIME_5_MIN,
    PAS_INTVL_TIME_10_MIN,
    PAS_INTVL_TIME_15_MIN,
    PAS_INTVL_TIME_20_MIN,
    PAS_INTVL_TIME_25_MIN,
    PAS_INTVL_TIME_30_MIN,
    PAS_INTVL_TIME_45_MIN,
    PAS_INTVL_TIME_60_MIN,
    PAS_INTVL_TIME_120_MIN,
    PAS_INTVL_TIME_240_MIN,
    PAS_INTVL_TIME_OFF,
    PAS_INTVL_TIME_150_SEC,
    PAS_INTVL_TIME_4_MIN,
    PAS_INTVL_TIME_6_MIN,
    PAS_INTVL_TIME_7_MIN,
    PAS_INTVL_TIME_8_MIN,
    PAS_INTVL_TIME_9_MIN,
    PAS_INTVL_TIME_11_MIN,
    PAS_INTVL_TIME_12_MIN,
    PAS_INTVL_TIME_13_MIN,
    PAS_INTVL_TIME_14_MIN,
    PAS_INTVL_TIME_180_MIN
} PAS_NIBP_INTVL_TIME;

enum class ec4 : long long {
    c1 = 0,
    c2 = 2,
    c3
};

enum branch2 {
    green,
    yellow
};