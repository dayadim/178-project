	component projectSystemQsys is
		port (
			audio_ADCDAT               : in    std_logic                     := 'X';             -- ADCDAT
			audio_ADCLRCK              : in    std_logic                     := 'X';             -- ADCLRCK
			audio_BCLK                 : in    std_logic                     := 'X';             -- BCLK
			audio_DACDAT               : out   std_logic;                                        -- DACDAT
			audio_DACLRCK              : in    std_logic                     := 'X';             -- DACLRCK
			audio_clk_clk              : out   std_logic;                                        -- clk
			audio_pll_ref_clk_clk      : in    std_logic                     := 'X';             -- clk
			audio_pll_ref_reset_reset  : in    std_logic                     := 'X';             -- reset
			av_config_SDAT             : inout std_logic                     := 'X';             -- SDAT
			av_config_SCLK             : out   std_logic;                                        -- SCLK
			char_lcd_DATA              : inout std_logic_vector(7 downto 0)  := (others => 'X'); -- DATA
			char_lcd_ON                : out   std_logic;                                        -- ON
			char_lcd_BLON              : out   std_logic;                                        -- BLON
			char_lcd_EN                : out   std_logic;                                        -- EN
			char_lcd_RS                : out   std_logic;                                        -- RS
			char_lcd_RW                : out   std_logic;                                        -- RW
			expansion_jp5_export       : inout std_logic_vector(31 downto 0) := (others => 'X'); -- export
			green_leds_export          : out   std_logic_vector(8 downto 0);                     -- export
			keys_export                : in    std_logic_vector(3 downto 0)  := (others => 'X'); -- export
			red_leds_export            : out   std_logic_vector(17 downto 0);                    -- export
			sd_card_b_SD_cmd           : inout std_logic                     := 'X';             -- b_SD_cmd
			sd_card_b_SD_dat           : inout std_logic                     := 'X';             -- b_SD_dat
			sd_card_b_SD_dat3          : inout std_logic                     := 'X';             -- b_SD_dat3
			sd_card_o_SD_clock         : out   std_logic;                                        -- o_SD_clock
			sdram_addr                 : out   std_logic_vector(12 downto 0);                    -- addr
			sdram_ba                   : out   std_logic_vector(1 downto 0);                     -- ba
			sdram_cas_n                : out   std_logic;                                        -- cas_n
			sdram_cke                  : out   std_logic;                                        -- cke
			sdram_cs_n                 : out   std_logic;                                        -- cs_n
			sdram_dq                   : inout std_logic_vector(31 downto 0) := (others => 'X'); -- dq
			sdram_dqm                  : out   std_logic_vector(3 downto 0);                     -- dqm
			sdram_ras_n                : out   std_logic;                                        -- ras_n
			sdram_we_n                 : out   std_logic;                                        -- we_n
			sdram_clk_clk              : out   std_logic;                                        -- clk
			seven_seg_0_export         : out   std_logic_vector(6 downto 0);                     -- export
			seven_seg_1_export         : out   std_logic_vector(6 downto 0);                     -- export
			seven_seg_2_export         : out   std_logic_vector(6 downto 0);                     -- export
			seven_seg_3_export         : out   std_logic_vector(6 downto 0);                     -- export
			seven_seg_4_export         : out   std_logic_vector(6 downto 0);                     -- export
			seven_seg_5_export         : out   std_logic_vector(6 downto 0);                     -- export
			seven_seg_6_export         : out   std_logic_vector(6 downto 0);                     -- export
			seven_seg_7_export         : out   std_logic_vector(6 downto 0);                     -- export
			sram_DQ                    : inout std_logic_vector(15 downto 0) := (others => 'X'); -- DQ
			sram_ADDR                  : out   std_logic_vector(19 downto 0);                    -- ADDR
			sram_LB_N                  : out   std_logic;                                        -- LB_N
			sram_UB_N                  : out   std_logic;                                        -- UB_N
			sram_CE_N                  : out   std_logic;                                        -- CE_N
			sram_OE_N                  : out   std_logic;                                        -- OE_N
			sram_WE_N                  : out   std_logic;                                        -- WE_N
			switches_export            : in    std_logic_vector(17 downto 0) := (others => 'X'); -- export
			system_pll_ref_clk_clk     : in    std_logic                     := 'X';             -- clk
			system_pll_ref_reset_reset : in    std_logic                     := 'X'              -- reset
		);
	end component projectSystemQsys;

	u0 : component projectSystemQsys
		port map (
			audio_ADCDAT               => CONNECTED_TO_audio_ADCDAT,               --                audio.ADCDAT
			audio_ADCLRCK              => CONNECTED_TO_audio_ADCLRCK,              --                     .ADCLRCK
			audio_BCLK                 => CONNECTED_TO_audio_BCLK,                 --                     .BCLK
			audio_DACDAT               => CONNECTED_TO_audio_DACDAT,               --                     .DACDAT
			audio_DACLRCK              => CONNECTED_TO_audio_DACLRCK,              --                     .DACLRCK
			audio_clk_clk              => CONNECTED_TO_audio_clk_clk,              --            audio_clk.clk
			audio_pll_ref_clk_clk      => CONNECTED_TO_audio_pll_ref_clk_clk,      --    audio_pll_ref_clk.clk
			audio_pll_ref_reset_reset  => CONNECTED_TO_audio_pll_ref_reset_reset,  --  audio_pll_ref_reset.reset
			av_config_SDAT             => CONNECTED_TO_av_config_SDAT,             --            av_config.SDAT
			av_config_SCLK             => CONNECTED_TO_av_config_SCLK,             --                     .SCLK
			char_lcd_DATA              => CONNECTED_TO_char_lcd_DATA,              --             char_lcd.DATA
			char_lcd_ON                => CONNECTED_TO_char_lcd_ON,                --                     .ON
			char_lcd_BLON              => CONNECTED_TO_char_lcd_BLON,              --                     .BLON
			char_lcd_EN                => CONNECTED_TO_char_lcd_EN,                --                     .EN
			char_lcd_RS                => CONNECTED_TO_char_lcd_RS,                --                     .RS
			char_lcd_RW                => CONNECTED_TO_char_lcd_RW,                --                     .RW
			expansion_jp5_export       => CONNECTED_TO_expansion_jp5_export,       --        expansion_jp5.export
			green_leds_export          => CONNECTED_TO_green_leds_export,          --           green_leds.export
			keys_export                => CONNECTED_TO_keys_export,                --                 keys.export
			red_leds_export            => CONNECTED_TO_red_leds_export,            --             red_leds.export
			sd_card_b_SD_cmd           => CONNECTED_TO_sd_card_b_SD_cmd,           --              sd_card.b_SD_cmd
			sd_card_b_SD_dat           => CONNECTED_TO_sd_card_b_SD_dat,           --                     .b_SD_dat
			sd_card_b_SD_dat3          => CONNECTED_TO_sd_card_b_SD_dat3,          --                     .b_SD_dat3
			sd_card_o_SD_clock         => CONNECTED_TO_sd_card_o_SD_clock,         --                     .o_SD_clock
			sdram_addr                 => CONNECTED_TO_sdram_addr,                 --                sdram.addr
			sdram_ba                   => CONNECTED_TO_sdram_ba,                   --                     .ba
			sdram_cas_n                => CONNECTED_TO_sdram_cas_n,                --                     .cas_n
			sdram_cke                  => CONNECTED_TO_sdram_cke,                  --                     .cke
			sdram_cs_n                 => CONNECTED_TO_sdram_cs_n,                 --                     .cs_n
			sdram_dq                   => CONNECTED_TO_sdram_dq,                   --                     .dq
			sdram_dqm                  => CONNECTED_TO_sdram_dqm,                  --                     .dqm
			sdram_ras_n                => CONNECTED_TO_sdram_ras_n,                --                     .ras_n
			sdram_we_n                 => CONNECTED_TO_sdram_we_n,                 --                     .we_n
			sdram_clk_clk              => CONNECTED_TO_sdram_clk_clk,              --            sdram_clk.clk
			seven_seg_0_export         => CONNECTED_TO_seven_seg_0_export,         --          seven_seg_0.export
			seven_seg_1_export         => CONNECTED_TO_seven_seg_1_export,         --          seven_seg_1.export
			seven_seg_2_export         => CONNECTED_TO_seven_seg_2_export,         --          seven_seg_2.export
			seven_seg_3_export         => CONNECTED_TO_seven_seg_3_export,         --          seven_seg_3.export
			seven_seg_4_export         => CONNECTED_TO_seven_seg_4_export,         --          seven_seg_4.export
			seven_seg_5_export         => CONNECTED_TO_seven_seg_5_export,         --          seven_seg_5.export
			seven_seg_6_export         => CONNECTED_TO_seven_seg_6_export,         --          seven_seg_6.export
			seven_seg_7_export         => CONNECTED_TO_seven_seg_7_export,         --          seven_seg_7.export
			sram_DQ                    => CONNECTED_TO_sram_DQ,                    --                 sram.DQ
			sram_ADDR                  => CONNECTED_TO_sram_ADDR,                  --                     .ADDR
			sram_LB_N                  => CONNECTED_TO_sram_LB_N,                  --                     .LB_N
			sram_UB_N                  => CONNECTED_TO_sram_UB_N,                  --                     .UB_N
			sram_CE_N                  => CONNECTED_TO_sram_CE_N,                  --                     .CE_N
			sram_OE_N                  => CONNECTED_TO_sram_OE_N,                  --                     .OE_N
			sram_WE_N                  => CONNECTED_TO_sram_WE_N,                  --                     .WE_N
			switches_export            => CONNECTED_TO_switches_export,            --             switches.export
			system_pll_ref_clk_clk     => CONNECTED_TO_system_pll_ref_clk_clk,     --   system_pll_ref_clk.clk
			system_pll_ref_reset_reset => CONNECTED_TO_system_pll_ref_reset_reset  -- system_pll_ref_reset.reset
		);

