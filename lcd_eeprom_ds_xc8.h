//definicje ogólne


// #define _XTAL_FREQ    4194300   //ile Hz

//*********************************************
// definicje
#define LED_LAT LATDbits.LATD0
#define LED_TRIS TRISDbits.TRISD0
#define KEY1_LAT LATEbits.LATE1
#define KEY1_PORT PORTEbits.RE1	// enter
#define KEY2_PORT PORTEbits.RE0  //klawisz change
#define KEY2_LAT LATEbits.LATE0
#define KEY1_TRIS TRISEbits.TRISE1
// #define czestotliwosc    4000000




#define ilosc_linii		  10	//ile roznych opcji w menu
#define	 czy_zmieniam_opcje		1  //bit 0
#define  odswiez_menu			2  //bit 1
#define  odswiez_liczby			4  //bit 2  jesli mam odswiezyc tylko zawartosc opcji
#define  spr_ds				8  //bit 3  jesli mam zmierzyc dsa



#define  numer_ds     1
#define   sekundy	3
#define   minuty	4
#define   godziny	5
#define  numer_minut 4
#define  numer_godzin 5 
#define  numer_zapisu 6 
#define  numer_bajt 7



// ds18b20

//czujnik do³¹czony do 4 bitu PORTD

#define  Tris_ds1820_bits          TRISDbits.TRISD3
#define Tris_ds1820 		TRISD
#define pin_ds1820		0x08
#define  czujnik_ds1820_bits        TRISD3
#define  czujnik_ds1820      3

#define  Latch_ds1820		LATDbits.LATD3
// #define  Port_ds1820		PORTDbits
#define  Port_ds1820_bits		PORTDbits.RD3
#define  Port_ds1820		PORTD
#define  czas_oczekiwania_480us   	0x7e  //126 * 4 
#define  czas_oczekiwania_60us   	0x3f  //63 * 1 
#define  czas_oczekiwania_60us_odbior   0x3f  //63 * 1 
#define  t2con_dla_480us            0b00011100  // ustawiono *4 postscaler i *1 prescaler
#define  t2con_dla_60us             0b00000100  // ustawiono *1 postscaler i *1 prescaler
#define jak_duzo_bajtow_odbieram   9
#define jak_duzo_bajtow_wyswietlam 7

// unsigned char zmienna  __at (0x0200);

 // __at (0x0202) ;
// unsigned char ilosc_sekund  __at (0x0204) ;
#define		ktore_bity_lcd 	0x0f


