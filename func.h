void interrupt tint( void );
void CLK_init( void );
void SDRAM_init( void );
void INTR_init( void );
void TIME_init(void);
void TMCR_Reset( void );
void SetDSPPLL(unsigned int uPLL);
void PLL_Init(int freq);
void AIC23_Init(void);
void AIC23_Mixer(void);
void AIC23_Mixer_Init(void);
void EnableAPLL();