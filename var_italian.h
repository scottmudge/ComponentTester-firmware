/* ************************************************************************
 *
 *   language specific global variables: Italian (ISO 8859-1)
 *
 *   (c) 2016-2024 by Markus Reschke
 *   translation by Gino_09@EEVblog
 *   based on code from Markus Frejek and Karl-Heinz K�bbeler
 *
 * ************************************************************************ */


/*
 *  Italian
 */

#if defined (UI_ITALIAN)

  /*
   *  constant strings
   *  - stored in EEPROM/Flash
   */


  /* firmware */
  const unsigned char Tester_str[] MEM_TYPE = "Component Tester";


  /* common terms and texts */
  const unsigned char Probing_str[] MEM_TYPE = "Analizzo...";
  const unsigned char Timeout_str[] MEM_TYPE = "Fuori Tempo";
  const unsigned char Failed1_str[] MEM_TYPE = "Componente non";
  const unsigned char Failed2_str[] MEM_TYPE = "trovato!";
  const unsigned char Done_str[] MEM_TYPE = "Fatto!";
  const unsigned char Select_str[] MEM_TYPE = "Selezionare";
  const unsigned char Adjustment_str[] MEM_TYPE = "Calibrazione";
  const unsigned char Save_str[] MEM_TYPE = "Salvare";
  const unsigned char Load_str[] MEM_TYPE = "Carica";
  const unsigned char Show_str[] MEM_TYPE = "Mostra dati";
  const unsigned char Remove_str[] MEM_TYPE = "Rimuovere";
  const unsigned char Create_str[] MEM_TYPE = "Creare";
  const unsigned char ShortCircuit_str[] MEM_TYPE = "Cortocircuito!";
  const unsigned char DischargeFailed_str[] MEM_TYPE = "Batteria?";
  const unsigned char Error_str[] MEM_TYPE = "Errore!";
  const unsigned char Exit_str[] MEM_TYPE = "Esci";
  const unsigned char Checksum_str[] MEM_TYPE = "Verifica Somma";
  const unsigned char BJT_str[] MEM_TYPE = "Transistor";
  const unsigned char Thyristor_str[] MEM_TYPE = "Tiristore";
  const unsigned char Triac_str[] MEM_TYPE = "Triac";
  const unsigned char PUT_str[] MEM_TYPE = "Trans. PUT";
  const unsigned char Bye_str[] MEM_TYPE = "Ciao!";


  /* units */
  const unsigned char Hertz_str[] MEM_TYPE = "Hz";


  /* options */
  #ifdef SW_SELFTEST
    const unsigned char Selftest_str[] MEM_TYPE = "Autotest";
  #endif

  #if ! defined (BAT_NONE) && ! defined (UI_BATTERY)
    const unsigned char Battery_str[] MEM_TYPE = "Bat";
    const unsigned char OK_str[] MEM_TYPE = "ok";
    const unsigned char Weak_str[] MEM_TYPE = "debole";
    const unsigned char Low_str[] MEM_TYPE = "basso";
  #endif

  #ifdef BAT_EXT_UNMONITORED
    const unsigned char External_str[] MEM_TYPE = "ext";
  #endif

  #ifdef UI_KEY_HINTS
    const unsigned char Menu_or_Test_str[] MEM_TYPE = "<Menu Test>";
  #endif

  #if defined (SW_PWM_SIMPLE) || defined (SW_PWM_PLUS)
    const unsigned char PWM_str[] MEM_TYPE = "PWM";
  #endif

  #ifdef SW_SQUAREWAVE
    const unsigned char SquareWave_str[] MEM_TYPE = "Onda Quadra";
  #endif

  #if defined (HW_ZENER) || defined (HW_PROBE_ZENER)
    const unsigned char Zener_str[] MEM_TYPE = "Zener";
  #endif

  #if defined (HW_ZENER) && ! defined (ZENER_UNSWITCHED)
    const unsigned char Min_str[] MEM_TYPE = "Min";
  #endif

  #ifdef HW_FREQ_COUNTER
    const unsigned char FreqCounter_str[] MEM_TYPE = "Frequenzimetro";
  #endif

  #ifdef HW_FREQ_COUNTER_EXT
    const unsigned char CounterChannel_str[] MEM_TYPE = "Ch";
    const unsigned char FreqInput_str[] MEM_TYPE = "BNC";
    const unsigned char LF_Crystal_str[] MEM_TYPE = "LF crystal";
    const unsigned char HF_Crystal_str[] MEM_TYPE = "HF crystal";
  #endif

  #ifdef HW_RING_TESTER
    const unsigned char RingTester_str[] MEM_TYPE = "Ring Tester";
  #endif

  #ifdef HW_EVENT_COUNTER
    const unsigned char EventCounter_str[] MEM_TYPE = "Event Counter";
    const unsigned char Count_str[] MEM_TYPE = "Count";
    const unsigned char Time_str[] MEM_TYPE = "Time";
    const unsigned char Events_str[] MEM_TYPE = "Events";
    const unsigned char Stop_str[] MEM_TYPE = "Stop";
  #endif

  #ifdef HW_LC_METER
    const unsigned char LC_Meter_str[] MEM_TYPE = "LC Meter";
    const unsigned char Adjusting_str[] MEM_TYPE = "adjusting...";
  #endif

  #ifdef HW_LOGIC_PROBE
    const unsigned char LogicProbe_str[] MEM_TYPE = "Logic Probe";
  #endif

  #ifdef SW_ENCODER
    const unsigned char Encoder_str[] MEM_TYPE = "Encoder Rotativo";
    const unsigned char TurnRight_str[] MEM_TYPE = "Gira a destra";
  #endif

  #ifdef SW_CONTRAST
    const unsigned char Contrast_str[] MEM_TYPE = "Contrasto";
  #endif

  #if defined (SW_IR_RECEIVER) || defined (HW_IR_RECEIVER)
    const unsigned char IR_Detector_str[] MEM_TYPE = "Rivelatore IR";
  #endif

  #ifdef SW_IR_TRANSMITTER
    const unsigned char IR_Transmitter_str[] MEM_TYPE = "IR RC";
    const unsigned char IR_Send_str[] MEM_TYPE = "sending...";
  #endif

  #ifdef SW_OPTO_COUPLER
    const unsigned char OptoCoupler_str[] MEM_TYPE = "Accoppiatore opt";
    const unsigned char None_str[] MEM_TYPE = "Nessuno";
    const unsigned char CTR_str[] MEM_TYPE = "CTR";
  #endif

  #ifdef VAR_START_STR
    const unsigned char Start_str[] MEM_TYPE = "Avvio";
  #endif

  #ifdef SW_UJT
    const unsigned char UJT_str[] MEM_TYPE = "Trans. UJT";
  #endif

  #ifdef SW_SERVO
    const unsigned char Servo_str[] MEM_TYPE = "Servo";
    const unsigned char Sweep_str[] MEM_TYPE = "<->";
  #endif

  #ifdef SW_CAP_LEAKAGE
    const unsigned char CapLeak_str[] MEM_TYPE = "Cap Leakage";
    const unsigned char CapCharge_str[] MEM_TYPE = "Charging";
    const unsigned char CapHigh_str[] MEM_TYPE = "Rl";
    const unsigned char CapLow_str[] MEM_TYPE = "Rh";
    const unsigned char CapDischarge_str[] MEM_TYPE = "Discharging";
  #endif

  #ifdef SW_MONITOR_R
    const unsigned char Monitor_R_str[] MEM_TYPE = "R Monitor";
  #endif

  #ifdef SW_MONITOR_C
    const unsigned char Monitor_C_str[] MEM_TYPE = "C Monitor";
  #endif

  #ifdef SW_MONITOR_L
    const unsigned char Monitor_L_str[] MEM_TYPE = "L Monitor";
  #endif

  #ifdef SW_MONITOR_RCL
    const unsigned char Monitor_RCL_str[] MEM_TYPE = "RCL Monitor";
  #endif

  #ifdef SW_MONITOR_RL
    const unsigned char Monitor_RL_str[] MEM_TYPE = "RL Monitor";
  #endif

  #ifdef HW_TOUCH
    const unsigned char TouchSetup_str[] MEM_TYPE = "Touch Setup";
  #endif

  #ifdef SW_POWER_OFF
    const unsigned char PowerOff_str[] MEM_TYPE = "Off";
  #endif

  #ifdef SW_ONEWIRE_SCAN
    const unsigned char OneWire_Scan_str[] MEM_TYPE = "OneWire Scan";
    const unsigned char Bus_str[] MEM_TYPE = "Bus";
  #endif

  #ifdef SW_CONTINUITY_CHECK
    const unsigned char ContinuityCheck_str[] MEM_TYPE = "Continuity";
  #endif

  #ifdef SW_FONT_TEST
    const unsigned char FontTest_str[] MEM_TYPE = "Font";
  #endif

  #ifdef SW_SYMBOL_TEST
    const unsigned char SymbolTest_str[] MEM_TYPE = "Symbols";
  #endif

  #ifdef HW_FLASHLIGHT
    const unsigned char Flashlight_str[] MEM_TYPE = "Flashlight";
  #endif

  #ifdef SW_PHOTODIODE
    const unsigned char Photodiode_str[] MEM_TYPE = "Photodiode";
    const unsigned char NoBias_str[] MEM_TYPE = "no";
    const unsigned char ReverseBias_str[] MEM_TYPE = "rev";
  #endif

  #ifdef SW_DIODE_LED
    const unsigned char Diode_LED_str[] MEM_TYPE = "Diode/LED";
  #endif

  #ifdef SW_METER_5VDC
    const unsigned char Meter_5VDC_str[] MEM_TYPE = "5V-Meter";
  #endif

#endif


/* ************************************************************************
 *   EOF
 * ************************************************************************ */
