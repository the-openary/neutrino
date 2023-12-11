Custom OLED Module for the Neutrino

Pinout for SKR Mini E3 V2.0

```
 *            SKR Mini E3 V2.0
 *                 ------
 * (NONE)    PB5  | 1  2 | PA15 (BTN_ENC)
 * (BTN_EN1) PA9  | 3  4 | RESET
 * (BTN_EN2) PA10   5  6 | PB9  (SDA)
 * (SCL)     PB8  | 7  8 | PB15 (BEEPER)
 *            GND | 9 10 | 5V
 *                 ------
 *                  EXP1
 ```
Source: https://upload.wikimedia.org/wikipedia/commons/9/90/Stm32f103_pinout_diagram.png

Editing Marlin: 
- Add the following to `pins_BTT_SKR_MINI_E3_common.h` under  `#elif HAS_WIRED_LCD`
```C
  #elif ENABLED(OLED_PANEL_TINYBOY2)

    #define BEEPER_PIN EXP1_08_PIN //PB15

    #define BTN_ENC EXP1_02_PIN //PA15
    #define BTN_EN1 EXP1_03_PIN //PA9
    #define BTN_EN2 EXP1_05_PIN //PA10
```
- Then select 
```C 
#define OLED_PANEL_TINYBOY2
``` 
Under the `OLED Displays` section of `configuration.h` (roughly line 2980)

Special thanks to czupryna011 for the instructable I based this off of https://www.instructables.com/Small-and-Cheap-Tiny-OLED-for-Ender-3-stock-and-SK/