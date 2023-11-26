
module projectSystemQsys (
	audio_ADCDAT,
	audio_ADCLRCK,
	audio_BCLK,
	audio_DACDAT,
	audio_DACLRCK,
	audio_clk_clk,
	audio_pll_ref_clk_clk,
	audio_pll_ref_reset_reset,
	av_config_SDAT,
	av_config_SCLK,
	char_lcd_DATA,
	char_lcd_ON,
	char_lcd_BLON,
	char_lcd_EN,
	char_lcd_RS,
	char_lcd_RW,
	expansion_jp5_export,
	green_leds_export,
	keys_export,
	red_leds_export,
	sd_card_b_SD_cmd,
	sd_card_b_SD_dat,
	sd_card_b_SD_dat3,
	sd_card_o_SD_clock,
	sdram_addr,
	sdram_ba,
	sdram_cas_n,
	sdram_cke,
	sdram_cs_n,
	sdram_dq,
	sdram_dqm,
	sdram_ras_n,
	sdram_we_n,
	sdram_clk_clk,
	seven_seg_0_export,
	seven_seg_1_export,
	seven_seg_2_export,
	seven_seg_3_export,
	seven_seg_4_export,
	seven_seg_5_export,
	seven_seg_6_export,
	seven_seg_7_export,
	sram_DQ,
	sram_ADDR,
	sram_LB_N,
	sram_UB_N,
	sram_CE_N,
	sram_OE_N,
	sram_WE_N,
	switches_export,
	system_pll_ref_clk_clk,
	system_pll_ref_reset_reset);	

	input		audio_ADCDAT;
	input		audio_ADCLRCK;
	input		audio_BCLK;
	output		audio_DACDAT;
	input		audio_DACLRCK;
	output		audio_clk_clk;
	input		audio_pll_ref_clk_clk;
	input		audio_pll_ref_reset_reset;
	inout		av_config_SDAT;
	output		av_config_SCLK;
	inout	[7:0]	char_lcd_DATA;
	output		char_lcd_ON;
	output		char_lcd_BLON;
	output		char_lcd_EN;
	output		char_lcd_RS;
	output		char_lcd_RW;
	inout	[31:0]	expansion_jp5_export;
	output	[8:0]	green_leds_export;
	input	[3:0]	keys_export;
	output	[17:0]	red_leds_export;
	inout		sd_card_b_SD_cmd;
	inout		sd_card_b_SD_dat;
	inout		sd_card_b_SD_dat3;
	output		sd_card_o_SD_clock;
	output	[12:0]	sdram_addr;
	output	[1:0]	sdram_ba;
	output		sdram_cas_n;
	output		sdram_cke;
	output		sdram_cs_n;
	inout	[31:0]	sdram_dq;
	output	[3:0]	sdram_dqm;
	output		sdram_ras_n;
	output		sdram_we_n;
	output		sdram_clk_clk;
	output	[6:0]	seven_seg_0_export;
	output	[6:0]	seven_seg_1_export;
	output	[6:0]	seven_seg_2_export;
	output	[6:0]	seven_seg_3_export;
	output	[6:0]	seven_seg_4_export;
	output	[6:0]	seven_seg_5_export;
	output	[6:0]	seven_seg_6_export;
	output	[6:0]	seven_seg_7_export;
	inout	[15:0]	sram_DQ;
	output	[19:0]	sram_ADDR;
	output		sram_LB_N;
	output		sram_UB_N;
	output		sram_CE_N;
	output		sram_OE_N;
	output		sram_WE_N;
	input	[17:0]	switches_export;
	input		system_pll_ref_clk_clk;
	input		system_pll_ref_reset_reset;
endmodule
