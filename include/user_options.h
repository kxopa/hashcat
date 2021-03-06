/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _USER_OPTIONS_H
#define _USER_OPTIONS_H

#include <getopt.h>

typedef enum user_options_defaults
{
  ATTACK_MODE             = ATTACK_MODE_STRAIGHT,
  BENCHMARK               = false,
  BITMAP_MAX              = 24,
  BITMAP_MIN              = 16,
  DEBUG_MODE              = 0,
  FORCE                   = false,
  GPU_TEMP_ABORT          = 90,
  GPU_TEMP_DISABLE        = false,
  GPU_TEMP_RETAIN         = 75,
  HASH_MODE               = 0,
  HEX_CHARSET             = false,
  HEX_SALT                = false,
  HEX_WORDLIST            = false,
  INCREMENT               = false,
  INCREMENT_MAX           = PW_MAX,
  INCREMENT_MIN           = 1,
  KERNEL_ACCEL            = 0,
  KERNEL_LOOPS            = 0,
  KEYSPACE                = false,
  LEFT                    = false,
  LIMIT                   = 0,
  LOGFILE_DISABLE         = false,
  LOOPBACK                = false,
  MACHINE_READABLE        = false,
  MARKOV_CLASSIC          = false,
  MARKOV_DISABLE          = false,
  MARKOV_THRESHOLD        = 0,
  NVIDIA_SPIN_DAMP        = 100,
  OPENCL_VECTOR_WIDTH     = 0,
  OUTFILE_AUTOHEX         = true,
  OUTFILE_CHECK_TIMER     = 5,
  OUTFILE_FORMAT          = 3,
  POTFILE_DISABLE         = false,
  POWERTUNE_ENABLE        = false,
  QUIET                   = false,
  REMOVE                  = false,
  REMOVE_TIMER            = 60,
  RESTORE                 = false,
  RESTORE_DISABLE         = false,
  RESTORE_TIMER           = 60,
  RP_GEN                  = 0,
  RP_GEN_FUNC_MAX         = 4,
  RP_GEN_FUNC_MIN         = 1,
  RP_GEN_SEED             = 0,
  RUNTIME                 = 0,
  SCRYPT_TMTO             = 0,
  SEGMENT_SIZE            = 33554432,
  SEPARATOR               = ':',
  SHOW                    = false,
  SKIP                    = 0,
  STATUS                  = false,
  STATUS_TIMER            = 10,
  STDOUT_FLAG             = false,
  SPEED_ONLY              = false,
  USAGE                   = false,
  USERNAME                = false,
  VERSION                 = false,
  WEAK_HASH_THRESHOLD     = 100,
  WORKLOAD_PROFILE        = 2,

} user_options_defaults_t;

typedef enum user_options_map
{
  IDX_ATTACK_MODE              = 'a',
  IDX_BENCHMARK                = 'b',
  IDX_BITMAP_MAX               = 0xff00,
  IDX_BITMAP_MIN               = 0xff01,
  IDX_CPU_AFFINITY             = 0xff02,
  IDX_CUSTOM_CHARSET_1         = '1',
  IDX_CUSTOM_CHARSET_2         = '2',
  IDX_CUSTOM_CHARSET_3         = '3',
  IDX_CUSTOM_CHARSET_4         = '4',
  IDX_DEBUG_FILE               = 0xff03,
  IDX_DEBUG_MODE               = 0xff04,
  IDX_FORCE                    = 0xff05,
  IDX_GPU_TEMP_ABORT           = 0xff06,
  IDX_GPU_TEMP_DISABLE         = 0xff07,
  IDX_GPU_TEMP_RETAIN          = 0xff08,
  IDX_HASH_MODE                = 'm',
  IDX_HELP                     = 'h',
  IDX_HEX_CHARSET              = 0xff09,
  IDX_HEX_SALT                 = 0xff0a,
  IDX_HEX_WORDLIST             = 0xff0b,
  IDX_INCREMENT                = 'i',
  IDX_INCREMENT_MAX            = 0xff0c,
  IDX_INCREMENT_MIN            = 0xff0d,
  IDX_INDUCTION_DIR            = 0xff0e,
  IDX_KERNEL_ACCEL             = 'n',
  IDX_KERNEL_LOOPS             = 'u',
  IDX_KEYSPACE                 = 0xff0f,
  IDX_LEFT                     = 0xff10,
  IDX_LIMIT                    = 'l',
  IDX_LOGFILE_DISABLE          = 0xff11,
  IDX_LOOPBACK                 = 0xff12,
  IDX_MACHINE_READABLE         = 0xff13,
  IDX_MARKOV_CLASSIC           = 0xff14,
  IDX_MARKOV_DISABLE           = 0xff15,
  IDX_MARKOV_HCSTAT            = 0xff16,
  IDX_MARKOV_THRESHOLD         = 't',
  IDX_NVIDIA_SPIN_DAMP         = 0xff17,
  IDX_OPENCL_DEVICES           = 'd',
  IDX_OPENCL_DEVICE_TYPES      = 'D',
  IDX_OPENCL_INFO              = 'I',
  IDX_OPENCL_PLATFORMS         = 0xff18,
  IDX_OPENCL_VECTOR_WIDTH      = 0xff19,
  IDX_OUTFILE_AUTOHEX_DISABLE  = 0xff1a,
  IDX_OUTFILE_CHECK_DIR        = 0xff1b,
  IDX_OUTFILE_CHECK_TIMER      = 0xff1c,
  IDX_OUTFILE_FORMAT           = 0xff1d,
  IDX_OUTFILE                  = 'o',
  IDX_POTFILE_DISABLE          = 0xff1e,
  IDX_POTFILE_PATH             = 0xff1f,
  IDX_POWERTUNE_ENABLE         = 0xff20,
  IDX_QUIET                    = 0xff21,
  IDX_REMOVE                   = 0xff22,
  IDX_REMOVE_TIMER             = 0xff23,
  IDX_RESTORE                  = 0xff24,
  IDX_RESTORE_DISABLE          = 0xff25,
  IDX_RESTORE_FILE_PATH        = 0xff26,
  IDX_RP_FILE                  = 'r',
  IDX_RP_GEN_FUNC_MAX          = 0xff27,
  IDX_RP_GEN_FUNC_MIN          = 0xff28,
  IDX_RP_GEN                   = 'g',
  IDX_RP_GEN_SEED              = 0xff29,
  IDX_RULE_BUF_L               = 'j',
  IDX_RULE_BUF_R               = 'k',
  IDX_RUNTIME                  = 0xff2a,
  IDX_SCRYPT_TMTO              = 0xff2b,
  IDX_SEGMENT_SIZE             = 'c',
  IDX_SEPARATOR                = 'p',
  IDX_SESSION                  = 0xff2c,
  IDX_SHOW                     = 0xff2d,
  IDX_SKIP                     = 's',
  IDX_STATUS                   = 0xff2e,
  IDX_STATUS_TIMER             = 0xff2f,
  IDX_STDOUT_FLAG              = 0xff30,
  IDX_SPEED_ONLY               = 0xff31,
  IDX_TRUECRYPT_KEYFILES       = 0xff32,
  IDX_USERNAME                 = 0xff33,
  IDX_VERACRYPT_KEYFILES       = 0xff34,
  IDX_VERACRYPT_PIM            = 0xff35,
  IDX_VERSION_LOWER            = 'v',
  IDX_VERSION                  = 'V',
  IDX_WEAK_HASH_THRESHOLD      = 0xff36,
  IDX_WORKLOAD_PROFILE         = 'w'

} user_options_map_t;

int user_options_init (hashcat_ctx_t *hashcat_ctx);

void user_options_destroy (hashcat_ctx_t *hashcat_ctx);

int user_options_getopt (hashcat_ctx_t *hashcat_ctx, int argc, char **argv);

int user_options_sanity (hashcat_ctx_t *hashcat_ctx);

void user_options_preprocess (hashcat_ctx_t *hashcat_ctx);

void user_options_extra_init (hashcat_ctx_t *hashcat_ctx);

void user_options_extra_destroy (hashcat_ctx_t *hashcat_ctx);

u64 user_options_extra_amplifier (hashcat_ctx_t *hashcat_ctx);

void user_options_logger (hashcat_ctx_t *hashcat_ctx);

#endif // _USER_OPTIONS_H
