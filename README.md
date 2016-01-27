/*******************************************************************************
 * USED        BCM wPi   Name    Physical    Name      wPi BCM   USED           *
 *_____________________________________________________________________________ *
 *                       3.3V      1   2     5V                                 *
 * HifiBerry   2   8     SDA.1     3   4     5V                                 *
 * HifiBerry   3   9     SCL.1     5   6     GND                                *
 *             4   7     GPIO.7    7   8     TxD       15  14                   *
 * GND         9   10    RxD       16  15                                       *
 *             17  0     GPIO.0    11  12    GPIO.1    1   18    HifiBerry DAC+ *
 *             27  2     GPIO.2    13  14    GND                                *
 * PIR         22  3     GPIO.3    15  16    GPIO.4    4   23                   *  
 *                       3.3V      17  18    GPIO.5    5   24                   *
 * MCP3008     10  12    MOSI      19  20    GND                                *
 * MCP3008     9   13    MISO      21  22    GPIO.6    6   25                   *      
 * MCP3008     11  14    SCLK      23  24    CE0       10  8     MCP3008        *
 *                       GND       25  26    CE1       11  7                    *
 *             0   30    SDA.0     27  28    SCL.0     31  1     HifiBerry      *
 * BUTTON A    5   21    GPIO.21   29  30    GND                                *
 * Button B    6   22    GPIO.22   31  32    GPIO.26   26  12                   *
 * Button C    13  23    GPIO.23   33  34    GND                                *  
 * HifiBerry   19  24    GPIO.24   35  36    GPIO.27   27  16                   *  
 * Button D    26  25    GPIO.25   37  38    GPIO.28   28  20    HifiBerry DAC  *
 *                       GND       39  40    GPIO.29   29  21    HifiBerry DAC+ *
 *                                                                              *
 *                                                                              *
 *                                 ___ ___                                      *
 * ULTRASOUND      100   CH0     _|       |_ VDD                                *
 * IR              101   CH1     _|   M   |_ VREF                               *
 *                 102   CH2     _|   C   |_ AGND                               *
 *                 103   CH3     _|   P   |_ CLK                                *
 *                 104   CH4     _|   3   |_ Dout                               *  
 *                 105   CH5     _|   0   |_ Din                                *
 *                 106   CH6     _|   0   |_ CS/SHDN                            *
 *                 107   CH7     _|   8   |_ DGND                               *
 *                                |_______|                                     *
 *                                                                              *
 *                                                                              *
 ********************************************************************************
 */


