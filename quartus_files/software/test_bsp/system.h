/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'Nios2' in SOPC Builder design 'projectSystemQsys'
 * SOPC Builder design path: ../../projectSystemQsys.sopcinfo
 *
 * Generated: Sun Nov 26 16:33:44 PST 2023
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * AV_Config configuration
 *
 */

#define ALT_MODULE_CLASS_AV_Config altera_up_avalon_audio_and_video_config
#define AV_CONFIG_BASE 0xff203000
#define AV_CONFIG_IRQ -1
#define AV_CONFIG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define AV_CONFIG_NAME "/dev/AV_Config"
#define AV_CONFIG_SPAN 16
#define AV_CONFIG_TYPE "altera_up_avalon_audio_and_video_config"


/*
 * Audio_Subsystem_Audio configuration
 *
 */

#define ALT_MODULE_CLASS_Audio_Subsystem_Audio altera_up_avalon_audio
#define AUDIO_SUBSYSTEM_AUDIO_BASE 0xff203040
#define AUDIO_SUBSYSTEM_AUDIO_IRQ 6
#define AUDIO_SUBSYSTEM_AUDIO_IRQ_INTERRUPT_CONTROLLER_ID 0
#define AUDIO_SUBSYSTEM_AUDIO_NAME "/dev/Audio_Subsystem_Audio"
#define AUDIO_SUBSYSTEM_AUDIO_SPAN 16
#define AUDIO_SUBSYSTEM_AUDIO_TYPE "altera_up_avalon_audio"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x0a000020
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x20
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 1
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 1
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_DIVISION_ERROR_EXCEPTION
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INST_ADDR_WIDTH 0x1c
#define ALT_CPU_NAME "Nios2"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x0a000020
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x20
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 1
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 1
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_DIVISION_ERROR_EXCEPTION
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INST_ADDR_WIDTH 0x1c
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00000000


/*
 * Char_LCD_16x2 configuration
 *
 */

#define ALT_MODULE_CLASS_Char_LCD_16x2 altera_up_avalon_character_lcd
#define CHAR_LCD_16X2_BASE 0xff203050
#define CHAR_LCD_16X2_IRQ -1
#define CHAR_LCD_16X2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CHAR_LCD_16X2_NAME "/dev/Char_LCD_16x2"
#define CHAR_LCD_16X2_SPAN 2
#define CHAR_LCD_16X2_TYPE "altera_up_avalon_character_lcd"


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_UP_AVALON_AUDIO
#define __ALTERA_UP_AVALON_AUDIO_AND_VIDEO_CONFIG
#define __ALTERA_UP_AVALON_CHARACTER_LCD
#define __ALTERA_UP_AVALON_SRAM
#define __ALTERA_UP_SD_CARD_AVALON_INTERFACE


/*
 * Expansion_JP5 configuration
 *
 */

#define ALT_MODULE_CLASS_Expansion_JP5 altera_avalon_pio
#define EXPANSION_JP5_BASE 0xff200060
#define EXPANSION_JP5_BIT_CLEARING_EDGE_REGISTER 1
#define EXPANSION_JP5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define EXPANSION_JP5_CAPTURE 1
#define EXPANSION_JP5_DATA_WIDTH 32
#define EXPANSION_JP5_DO_TEST_BENCH_WIRING 1
#define EXPANSION_JP5_DRIVEN_SIM_VALUE 0
#define EXPANSION_JP5_EDGE_TYPE "FALLING"
#define EXPANSION_JP5_FREQ 50000000
#define EXPANSION_JP5_HAS_IN 0
#define EXPANSION_JP5_HAS_OUT 0
#define EXPANSION_JP5_HAS_TRI 1
#define EXPANSION_JP5_IRQ 11
#define EXPANSION_JP5_IRQ_INTERRUPT_CONTROLLER_ID 0
#define EXPANSION_JP5_IRQ_TYPE "EDGE"
#define EXPANSION_JP5_NAME "/dev/Expansion_JP5"
#define EXPANSION_JP5_RESET_VALUE 0
#define EXPANSION_JP5_SPAN 16
#define EXPANSION_JP5_TYPE "altera_avalon_pio"


/*
 * Green_LEDs configuration
 *
 */

#define ALT_MODULE_CLASS_Green_LEDs altera_avalon_pio
#define GREEN_LEDS_BASE 0xff200010
#define GREEN_LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define GREEN_LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define GREEN_LEDS_CAPTURE 0
#define GREEN_LEDS_DATA_WIDTH 9
#define GREEN_LEDS_DO_TEST_BENCH_WIRING 0
#define GREEN_LEDS_DRIVEN_SIM_VALUE 0
#define GREEN_LEDS_EDGE_TYPE "NONE"
#define GREEN_LEDS_FREQ 50000000
#define GREEN_LEDS_HAS_IN 0
#define GREEN_LEDS_HAS_OUT 1
#define GREEN_LEDS_HAS_TRI 0
#define GREEN_LEDS_IRQ -1
#define GREEN_LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GREEN_LEDS_IRQ_TYPE "NONE"
#define GREEN_LEDS_NAME "/dev/Green_LEDs"
#define GREEN_LEDS_RESET_VALUE 0
#define GREEN_LEDS_SPAN 16
#define GREEN_LEDS_TYPE "altera_avalon_pio"


/*
 * Interval_Timer configuration
 *
 */

#define ALT_MODULE_CLASS_Interval_Timer altera_avalon_timer
#define INTERVAL_TIMER_ALWAYS_RUN 0
#define INTERVAL_TIMER_BASE 0xff202000
#define INTERVAL_TIMER_COUNTER_SIZE 32
#define INTERVAL_TIMER_FIXED_PERIOD 0
#define INTERVAL_TIMER_FREQ 50000000
#define INTERVAL_TIMER_IRQ 0
#define INTERVAL_TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define INTERVAL_TIMER_LOAD_VALUE 6249999
#define INTERVAL_TIMER_MULT 0.001
#define INTERVAL_TIMER_NAME "/dev/Interval_Timer"
#define INTERVAL_TIMER_PERIOD 125.0
#define INTERVAL_TIMER_PERIOD_UNITS "ms"
#define INTERVAL_TIMER_RESET_OUTPUT 0
#define INTERVAL_TIMER_SNAPSHOT 1
#define INTERVAL_TIMER_SPAN 32
#define INTERVAL_TIMER_TICKS_PER_SEC 8
#define INTERVAL_TIMER_TIMEOUT_PULSE_OUTPUT 0
#define INTERVAL_TIMER_TYPE "altera_avalon_timer"


/*
 * Interval_Timer_2 configuration
 *
 */

#define ALT_MODULE_CLASS_Interval_Timer_2 altera_avalon_timer
#define INTERVAL_TIMER_2_ALWAYS_RUN 0
#define INTERVAL_TIMER_2_BASE 0xff202020
#define INTERVAL_TIMER_2_COUNTER_SIZE 32
#define INTERVAL_TIMER_2_FIXED_PERIOD 0
#define INTERVAL_TIMER_2_FREQ 50000000
#define INTERVAL_TIMER_2_IRQ 2
#define INTERVAL_TIMER_2_IRQ_INTERRUPT_CONTROLLER_ID 0
#define INTERVAL_TIMER_2_LOAD_VALUE 6249999
#define INTERVAL_TIMER_2_MULT 0.001
#define INTERVAL_TIMER_2_NAME "/dev/Interval_Timer_2"
#define INTERVAL_TIMER_2_PERIOD 125.0
#define INTERVAL_TIMER_2_PERIOD_UNITS "ms"
#define INTERVAL_TIMER_2_RESET_OUTPUT 0
#define INTERVAL_TIMER_2_SNAPSHOT 1
#define INTERVAL_TIMER_2_SPAN 32
#define INTERVAL_TIMER_2_TICKS_PER_SEC 8
#define INTERVAL_TIMER_2_TIMEOUT_PULSE_OUTPUT 0
#define INTERVAL_TIMER_2_TYPE "altera_avalon_timer"


/*
 * JTAG_UART configuration
 *
 */

#define ALT_MODULE_CLASS_JTAG_UART altera_avalon_jtag_uart
#define JTAG_UART_BASE 0xff201000
#define JTAG_UART_IRQ 8
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/JTAG_UART"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * Red_LEDs configuration
 *
 */

#define ALT_MODULE_CLASS_Red_LEDs altera_avalon_pio
#define RED_LEDS_BASE 0xff200000
#define RED_LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define RED_LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RED_LEDS_CAPTURE 0
#define RED_LEDS_DATA_WIDTH 18
#define RED_LEDS_DO_TEST_BENCH_WIRING 0
#define RED_LEDS_DRIVEN_SIM_VALUE 0
#define RED_LEDS_EDGE_TYPE "NONE"
#define RED_LEDS_FREQ 50000000
#define RED_LEDS_HAS_IN 0
#define RED_LEDS_HAS_OUT 1
#define RED_LEDS_HAS_TRI 0
#define RED_LEDS_IRQ -1
#define RED_LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RED_LEDS_IRQ_TYPE "NONE"
#define RED_LEDS_NAME "/dev/Red_LEDs"
#define RED_LEDS_RESET_VALUE 0
#define RED_LEDS_SPAN 16
#define RED_LEDS_TYPE "altera_avalon_pio"


/*
 * SDRAM configuration
 *
 */

#define ALT_MODULE_CLASS_SDRAM altera_avalon_new_sdram_controller
#define SDRAM_BASE 0x0
#define SDRAM_CAS_LATENCY 3
#define SDRAM_CONTENTS_INFO
#define SDRAM_INIT_NOP_DELAY 0.0
#define SDRAM_INIT_REFRESH_COMMANDS 2
#define SDRAM_IRQ -1
#define SDRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_IS_INITIALIZED 1
#define SDRAM_NAME "/dev/SDRAM"
#define SDRAM_POWERUP_DELAY 100.0
#define SDRAM_REFRESH_PERIOD 15.625
#define SDRAM_REGISTER_DATA_IN 1
#define SDRAM_SDRAM_ADDR_WIDTH 0x19
#define SDRAM_SDRAM_BANK_WIDTH 2
#define SDRAM_SDRAM_COL_WIDTH 10
#define SDRAM_SDRAM_DATA_WIDTH 32
#define SDRAM_SDRAM_NUM_BANKS 4
#define SDRAM_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_SDRAM_ROW_WIDTH 13
#define SDRAM_SHARED_DATA 0
#define SDRAM_SIM_MODEL_BASE 1
#define SDRAM_SPAN 134217728
#define SDRAM_STARVATION_INDICATOR 0
#define SDRAM_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_T_AC 5.5
#define SDRAM_T_MRD 3
#define SDRAM_T_RCD 20.0
#define SDRAM_T_RFC 70.0
#define SDRAM_T_RP 20.0
#define SDRAM_T_WR 14.0


/*
 * SD_Card configuration
 *
 */

#define ALT_MODULE_CLASS_SD_Card Altera_UP_SD_Card_Avalon_Interface
#define SD_CARD_BASE 0xb000000
#define SD_CARD_IRQ -1
#define SD_CARD_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SD_CARD_NAME "/dev/SD_Card"
#define SD_CARD_SPAN 1024
#define SD_CARD_TYPE "Altera_UP_SD_Card_Avalon_Interface"


/*
 * SRAM configuration
 *
 */

#define ALT_MODULE_CLASS_SRAM altera_up_avalon_sram
#define SRAM_BASE 0x8000000
#define SRAM_IRQ -1
#define SRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SRAM_NAME "/dev/SRAM"
#define SRAM_SPAN 2097152
#define SRAM_TYPE "altera_up_avalon_sram"


/*
 * Slider_Switches configuration
 *
 */

#define ALT_MODULE_CLASS_Slider_Switches altera_avalon_pio
#define SLIDER_SWITCHES_BASE 0x8200090
#define SLIDER_SWITCHES_BIT_CLEARING_EDGE_REGISTER 0
#define SLIDER_SWITCHES_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SLIDER_SWITCHES_CAPTURE 0
#define SLIDER_SWITCHES_DATA_WIDTH 18
#define SLIDER_SWITCHES_DO_TEST_BENCH_WIRING 1
#define SLIDER_SWITCHES_DRIVEN_SIM_VALUE 0
#define SLIDER_SWITCHES_EDGE_TYPE "NONE"
#define SLIDER_SWITCHES_FREQ 50000000
#define SLIDER_SWITCHES_HAS_IN 1
#define SLIDER_SWITCHES_HAS_OUT 0
#define SLIDER_SWITCHES_HAS_TRI 0
#define SLIDER_SWITCHES_IRQ -1
#define SLIDER_SWITCHES_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SLIDER_SWITCHES_IRQ_TYPE "NONE"
#define SLIDER_SWITCHES_NAME "/dev/Slider_Switches"
#define SLIDER_SWITCHES_RESET_VALUE 0
#define SLIDER_SWITCHES_SPAN 16
#define SLIDER_SWITCHES_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_IRQ_BASE NULL
#define ALT_LEGACY_INTERRUPT_API_PRESENT
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/JTAG_UART"
#define ALT_STDERR_BASE 0xff201000
#define ALT_STDERR_DEV JTAG_UART
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/JTAG_UART"
#define ALT_STDIN_BASE 0xff201000
#define ALT_STDIN_DEV JTAG_UART
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/JTAG_UART"
#define ALT_STDOUT_BASE 0xff201000
#define ALT_STDOUT_DEV JTAG_UART
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "projectSystemQsys"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK INTERVAL_TIMER
#define ALT_TIMESTAMP_CLK none


/*
 * keys configuration
 *
 */

#define ALT_MODULE_CLASS_keys altera_avalon_pio
#define KEYS_BASE 0x8200080
#define KEYS_BIT_CLEARING_EDGE_REGISTER 1
#define KEYS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEYS_CAPTURE 1
#define KEYS_DATA_WIDTH 4
#define KEYS_DO_TEST_BENCH_WIRING 1
#define KEYS_DRIVEN_SIM_VALUE 0
#define KEYS_EDGE_TYPE "FALLING"
#define KEYS_FREQ 50000000
#define KEYS_HAS_IN 1
#define KEYS_HAS_OUT 0
#define KEYS_HAS_TRI 0
#define KEYS_IRQ 1
#define KEYS_IRQ_INTERRUPT_CONTROLLER_ID 0
#define KEYS_IRQ_TYPE "EDGE"
#define KEYS_NAME "/dev/keys"
#define KEYS_RESET_VALUE 0
#define KEYS_SPAN 16
#define KEYS_TYPE "altera_avalon_pio"


/*
 * seven_seg_0 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg_0 altera_avalon_pio
#define SEVEN_SEG_0_BASE 0x8200070
#define SEVEN_SEG_0_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG_0_CAPTURE 0
#define SEVEN_SEG_0_DATA_WIDTH 7
#define SEVEN_SEG_0_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG_0_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG_0_EDGE_TYPE "NONE"
#define SEVEN_SEG_0_FREQ 50000000
#define SEVEN_SEG_0_HAS_IN 0
#define SEVEN_SEG_0_HAS_OUT 1
#define SEVEN_SEG_0_HAS_TRI 0
#define SEVEN_SEG_0_IRQ -1
#define SEVEN_SEG_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG_0_IRQ_TYPE "NONE"
#define SEVEN_SEG_0_NAME "/dev/seven_seg_0"
#define SEVEN_SEG_0_RESET_VALUE 0
#define SEVEN_SEG_0_SPAN 16
#define SEVEN_SEG_0_TYPE "altera_avalon_pio"


/*
 * seven_seg_1 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg_1 altera_avalon_pio
#define SEVEN_SEG_1_BASE 0x8200060
#define SEVEN_SEG_1_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG_1_CAPTURE 0
#define SEVEN_SEG_1_DATA_WIDTH 7
#define SEVEN_SEG_1_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG_1_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG_1_EDGE_TYPE "NONE"
#define SEVEN_SEG_1_FREQ 50000000
#define SEVEN_SEG_1_HAS_IN 0
#define SEVEN_SEG_1_HAS_OUT 1
#define SEVEN_SEG_1_HAS_TRI 0
#define SEVEN_SEG_1_IRQ -1
#define SEVEN_SEG_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG_1_IRQ_TYPE "NONE"
#define SEVEN_SEG_1_NAME "/dev/seven_seg_1"
#define SEVEN_SEG_1_RESET_VALUE 0
#define SEVEN_SEG_1_SPAN 16
#define SEVEN_SEG_1_TYPE "altera_avalon_pio"


/*
 * seven_seg_2 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg_2 altera_avalon_pio
#define SEVEN_SEG_2_BASE 0x8200050
#define SEVEN_SEG_2_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG_2_CAPTURE 0
#define SEVEN_SEG_2_DATA_WIDTH 7
#define SEVEN_SEG_2_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG_2_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG_2_EDGE_TYPE "NONE"
#define SEVEN_SEG_2_FREQ 50000000
#define SEVEN_SEG_2_HAS_IN 0
#define SEVEN_SEG_2_HAS_OUT 1
#define SEVEN_SEG_2_HAS_TRI 0
#define SEVEN_SEG_2_IRQ -1
#define SEVEN_SEG_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG_2_IRQ_TYPE "NONE"
#define SEVEN_SEG_2_NAME "/dev/seven_seg_2"
#define SEVEN_SEG_2_RESET_VALUE 0
#define SEVEN_SEG_2_SPAN 16
#define SEVEN_SEG_2_TYPE "altera_avalon_pio"


/*
 * seven_seg_3 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg_3 altera_avalon_pio
#define SEVEN_SEG_3_BASE 0x8200040
#define SEVEN_SEG_3_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG_3_CAPTURE 0
#define SEVEN_SEG_3_DATA_WIDTH 7
#define SEVEN_SEG_3_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG_3_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG_3_EDGE_TYPE "NONE"
#define SEVEN_SEG_3_FREQ 50000000
#define SEVEN_SEG_3_HAS_IN 0
#define SEVEN_SEG_3_HAS_OUT 1
#define SEVEN_SEG_3_HAS_TRI 0
#define SEVEN_SEG_3_IRQ -1
#define SEVEN_SEG_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG_3_IRQ_TYPE "NONE"
#define SEVEN_SEG_3_NAME "/dev/seven_seg_3"
#define SEVEN_SEG_3_RESET_VALUE 0
#define SEVEN_SEG_3_SPAN 16
#define SEVEN_SEG_3_TYPE "altera_avalon_pio"


/*
 * seven_seg_4 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg_4 altera_avalon_pio
#define SEVEN_SEG_4_BASE 0x8200030
#define SEVEN_SEG_4_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG_4_CAPTURE 0
#define SEVEN_SEG_4_DATA_WIDTH 7
#define SEVEN_SEG_4_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG_4_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG_4_EDGE_TYPE "NONE"
#define SEVEN_SEG_4_FREQ 50000000
#define SEVEN_SEG_4_HAS_IN 0
#define SEVEN_SEG_4_HAS_OUT 1
#define SEVEN_SEG_4_HAS_TRI 0
#define SEVEN_SEG_4_IRQ -1
#define SEVEN_SEG_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG_4_IRQ_TYPE "NONE"
#define SEVEN_SEG_4_NAME "/dev/seven_seg_4"
#define SEVEN_SEG_4_RESET_VALUE 0
#define SEVEN_SEG_4_SPAN 16
#define SEVEN_SEG_4_TYPE "altera_avalon_pio"


/*
 * seven_seg_5 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg_5 altera_avalon_pio
#define SEVEN_SEG_5_BASE 0x8200020
#define SEVEN_SEG_5_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG_5_CAPTURE 0
#define SEVEN_SEG_5_DATA_WIDTH 7
#define SEVEN_SEG_5_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG_5_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG_5_EDGE_TYPE "NONE"
#define SEVEN_SEG_5_FREQ 50000000
#define SEVEN_SEG_5_HAS_IN 0
#define SEVEN_SEG_5_HAS_OUT 1
#define SEVEN_SEG_5_HAS_TRI 0
#define SEVEN_SEG_5_IRQ -1
#define SEVEN_SEG_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG_5_IRQ_TYPE "NONE"
#define SEVEN_SEG_5_NAME "/dev/seven_seg_5"
#define SEVEN_SEG_5_RESET_VALUE 0
#define SEVEN_SEG_5_SPAN 16
#define SEVEN_SEG_5_TYPE "altera_avalon_pio"


/*
 * seven_seg_6 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg_6 altera_avalon_pio
#define SEVEN_SEG_6_BASE 0x8200010
#define SEVEN_SEG_6_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG_6_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG_6_CAPTURE 0
#define SEVEN_SEG_6_DATA_WIDTH 7
#define SEVEN_SEG_6_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG_6_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG_6_EDGE_TYPE "NONE"
#define SEVEN_SEG_6_FREQ 50000000
#define SEVEN_SEG_6_HAS_IN 0
#define SEVEN_SEG_6_HAS_OUT 1
#define SEVEN_SEG_6_HAS_TRI 0
#define SEVEN_SEG_6_IRQ -1
#define SEVEN_SEG_6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG_6_IRQ_TYPE "NONE"
#define SEVEN_SEG_6_NAME "/dev/seven_seg_6"
#define SEVEN_SEG_6_RESET_VALUE 0
#define SEVEN_SEG_6_SPAN 16
#define SEVEN_SEG_6_TYPE "altera_avalon_pio"


/*
 * seven_seg_7 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg_7 altera_avalon_pio
#define SEVEN_SEG_7_BASE 0x8200000
#define SEVEN_SEG_7_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG_7_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG_7_CAPTURE 0
#define SEVEN_SEG_7_DATA_WIDTH 7
#define SEVEN_SEG_7_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG_7_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG_7_EDGE_TYPE "NONE"
#define SEVEN_SEG_7_FREQ 50000000
#define SEVEN_SEG_7_HAS_IN 0
#define SEVEN_SEG_7_HAS_OUT 1
#define SEVEN_SEG_7_HAS_TRI 0
#define SEVEN_SEG_7_IRQ -1
#define SEVEN_SEG_7_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG_7_IRQ_TYPE "NONE"
#define SEVEN_SEG_7_NAME "/dev/seven_seg_7"
#define SEVEN_SEG_7_RESET_VALUE 0
#define SEVEN_SEG_7_SPAN 16
#define SEVEN_SEG_7_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
