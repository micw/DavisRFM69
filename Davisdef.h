// Constants used in defining the layout of message structures used by the Davis
// instrument Vantage Pro2 / Vantage Vue weather station consoles
//
// This is part of the DavisRFM69 library from https://github.com/dekay/DavisRFM69
// (C) DeKay 2014 dekaymail@gmail.com
// and released under the MIT License (http://opensource.org/licenses/mit-license.php)

#ifndef DAVISDEF_h
#define DAVISDEF_h

// LOOP data packet length and structure.
// See http://www.davisnet.com/support/weather/download/VantageSerialProtocolDocs_v230.pdf
#define LOOP_PACKET_LENGTH 99
#define BAR_TREND 3
#define PACKET_TYPE 4
#define NEXT_RECORD_LSB 5
#define NEXT_RECORD_MSB 6
#define BAROMETER_LSB 7
#define BAROMETER_MSB 8
#define INSIDE_TEMPERATURE_LSB 9
#define INSIDE_TEMPERATURE_MSB 10
#define INSIDE_HUMIDITY 11
#define OUTSIDE_TEMPERATURE_LSB 12
#define OUTSIDE_TEMPERATURE_MSB 13
#define WIND_SPEED 14
#define TEN_MIN_AVG_WIND_SPEED 15
#define WIND_DIRECTION_LSB 16
#define WIND_DIRECTION_MSB 17
#define EXTRA_TEMPERATURES_BASE 18
#define SOIL_TEMPERATURE_BASE 25
#define LEAF_TEMPERATURE_BASE 29
#define OUTSIDE_HUMIDITY 33
#define EXTRA_HUMIDITIES_BASE 34
#define RAIN_RATE_LSB 41
#define RAIN_RATE_MSB 42
#define UV 43
#define SOLAR_RADIATION_LSB 44
#define SOLAR_RADIATION_MSB 45
#define STORM_RAIN_LSB 46
#define STORM_RAIN_MSB 47
#define START_DATE_OF_CURRENT_STORM_LSB 48
#define START_DATE_OF_CURRENT_STORM_MSB 49
#define DAY_RAIN_LSB 50
#define DAY_RAIN_MSB 51
#define MONTH_RAIN_LSB 52
#define MONTH_RAIN_MSB 53
#define YEAR_RAIN_LSB 54
#define YEAR_RAIN_MSB 55
#define DAY_ET_LSB 56
#define DAY_ET_MSB 57
#define MONTH_ET_LSB 58
#define MONTH_ET_MSB 59
#define YEAR_ET_LSB 60
#define YEAR_ET_MSB 61
#define SOIL_MOISTURES_BASE 62
#define LEAF_WETNESS_BASE 66
#define INSIDE_ALARMS 70
#define RAIN_ALARMS 71
#define OUTSIDE_ALARMS_LSB 72
#define OUTSIDE_ALARMS_MSB 73
#define EXTRA_TEMP_HUM_ALARMS_BASE 74
#define SOIL_LEAF_ALARMS_BASE 82
#define TRANSMITTER_BATTERY_STATUS 86
#define CONSOLE_BATTERY_VOLTAGE_LSB 87
#define CONSOLE_BATTERY_VOLTAGE_MSB 88
#define FORECAST_ICONS 89
#define FORECAST_RULE_NUMBER 90
#define TIME_OF_SUNRISE_LSB 91
#define TIME_OF_SUNRISE_MSB 92
#define TIME_OF_SUNSET_LSB 93
#define TIME_OF_SUNSET_MSB 94
#define CRC_MSB 97
#define CRC_LSB 98

// For the packet stats array used in response to the RXCHECK command
#define PACKET_STATS_LENGTH 5
#define PACKETS_RECEIVED 0
#define PACKETS_MISSED 1
#define NUM_RESYNCS 2
#define RECEIVED_STREAK 3
#define CRC_ERRORS 4

// For the HiLows array.
#define HI_LOWS_LENGTH 436

// Minimum EEPROM locations to get WeeWX and Cumulus to work
#define EEPROM_LATITUDE_LSB     0x0B
#define EEPROM_LATITUDE_MSB     0x0C
#define EEPROM_LONGITUDE_LSB    0x0D
#define EEPROM_LONGITUDE_MSB    0x0E
#define EEPROM_ELEVATION_LSB    0x0F
#define EEPROM_ELEVATION_MSB    0x10
#define EEPROM_TIME_ZONE_INDEX  0x11
#define EEPROM_DST_MANAUTO      0x12
#define EEPROM_DST_OFFON        0x13
#define EEPROM_GMT_OFFSET_LSB   0x14
#define EEPROM_GMT_OFFSET_MSB   0x15
#define EEPROM_GMT_OR_ZONE      0x16
#define EEPROM_UNIT_BITS        0x29
#define EEPROM_SETUP_BITS       0x2B
#define EEPROM_RAIN_YEAR_START  0x2C
#define EEPROM_ARCHIVE_PERIOD   0X2D

// Daylight savings time mode set in EEPROM location 0x12
#define DST_USE_MODE_AUTO    0
#define DST_USE_MODE_MANUAL  1

// Daylight savings time setting if in manual mode set in EEPROM location 0x13
#define DST_SET_MODE_STANDARD 0
#define DST_SET_MODE_DST      1

#define GMT_OR_ZONE_USE_INDEX  0
#define GMT_OR_ZONE_USE_OFFSET 1

// For the time zone offsets in hours * 100 minutes to 15 minute resulution
// in two's complement format.
// NOTE: Requires setting the GMT_OR_ZONE field in EEPROM location 0x16 to 1 !!!
// TODO DO THE MATH TO WORK THESE VALUES OUT
#define GMT_OFFSET_MINUS1200 0
#define GMT_OFFSET_MINUS1100 0
#define GMT_OFFSET_MINUS1000 0
#define GMT_OFFSET_MINUS900  0
#define GMT_OFFSET_MINUS800  0
#define GMT_OFFSET_MINUS700  0
#define GMT_OFFSET_MINUS600  0
#define GMT_OFFSET_MINUS500  0
#define GMT_OFFSET_MINUS400  0
#define GMT_OFFSET_MINUS330  0
#define GMT_OFFSET_MINUS300  0
#define GMT_OFFSET_MINUS200  0
#define GMT_OFFSET_MINUS100  0
#define GMT_OFFSET_ZERO      0
#define GMT_OFFSET_PLUS100   0
#define GMT_OFFSET_PLUS200   0
#define GMT_OFFSET_PLUS300   0
#define GMT_OFFSET_PLUS330   0
#define GMT_OFFSET_PLUS400   0
#define GMT_OFFSET_PLUS430   0
#define GMT_OFFSET_PLUS500   0
#define GMT_OFFSET_PLUS530   0
#define GMT_OFFSET_PLUS600   0
#define GMT_OFFSET_PLUS700   0
#define GMT_OFFSET_PLUS800   0
#define GMT_OFFSET_PLUS900   0
#define GMT_OFFSET_PLUS930   0
#define GMT_OFFSET_PLUS1000  0
#define GMT_OFFSET_PLUS1100  0
#define GMT_OFFSET_PLUS1200  0

// For the time zone offset as an index (write value to EEPROM location 0x11)
// NOTE: Requires setting the GMT_OR_ZONE field in EEPROM location 0x16 to 0 !!!
#define GMT_ZONE_MINUS1200 0
#define GMT_ZONE_MINUS1100 1
#define GMT_ZONE_MINUS1000 2
#define GMT_ZONE_MINUS900  3
#define GMT_ZONE_MINUS800  4
#define GMT_ZONE_MINUS700  5
#define GMT_ZONE_MINUS600  6
#define GMT_ZONE_MINUS500  9
#define GMT_ZONE_MINUS400  11
#define GMT_ZONE_MINUS330  13
#define GMT_ZONE_MINUS300  14
#define GMT_ZONE_MINUS200  16
#define GMT_ZONE_MINUS100  17
#define GMT_ZONE_ZERO      18
#define GMT_ZONE_PLUS100   20
#define GMT_ZONE_PLUS200   23
#define GMT_ZONE_PLUS300   24
#define GMT_ZONE_PLUS330   30
#define GMT_ZONE_PLUS400   31
#define GMT_ZONE_PLUS430   32
#define GMT_ZONE_PLUS500   33
#define GMT_ZONE_PLUS530   34
#define GMT_ZONE_PLUS600   35
#define GMT_ZONE_PLUS700   36
#define GMT_ZONE_PLUS800   38
#define GMT_ZONE_PLUS900   39
#define GMT_ZONE_PLUS930   40
#define GMT_ZONE_PLUS1000  42
#define GMT_ZONE_PLUS1100  44
#define GMT_ZONE_PLUS1200  45

// Unit bits (EEPROM memory location 0x29)
#define BAROMETER_UNITS_IN     0x00
#define BAROMETER_UNITS_MM     0x01
#define BAROMETER_UNITS_HPA    0x02
#define BAROMETER_UNITS_MB     0x03
#define TEMP_UNITS_WHOLE_F     0x00
#define TEMP_UNITS_TENTHS_F    0x04
#define TEMP_UNITS_WHOLE_C     0x08
#define TEMP_UNITS_TENTHS_C    0x0C
#define ELEVATION_UNITS_FEET   0x00
#define ELEVATION_UNITS_M      0x10
#define RAIN_UNITS_IN          0x00
#define RAIN_UNITS_MM          0x20
#define WIND_UNITS_MPH         0x00
#define WIND_UNITS_MPS         0x40
#define WIND_UNITS_KMPH        0x80
#define WIND_UNITS_KNOTS       0xC0

// Setup bits (EEPROM memory location 0x2B)
#define AMPM_TIME_MODE_AMPM    0x00
#define AMPM_TIME_MODE_24H     0x01
#define AMPM_IS_PM             0x00
#define AMPM_IS_AM             0x02
#define MONTH_DAY_MONTHDAY     0x00
#define MONTH_DAY_DAYMONTH     0x04
#define WIND_CUP_SMALL         0x00
#define WIND_CUP_LARGE         0x08
#define RAIN_COLLECTOR_01IN    0x00
#define RAIN_COLLECTOR_02MM    0x10
#define RAIN_COLLECTOR_01MM    0x20
#define LATITUDE_SOUTH         0x00
#define LATITUDE_NORTH         0x40
#define LONGITUDE_WEST         0x00
#define LONGITUDE_EAST         0x80

// Month that the yearly rain total is cleared (EEPROM location 0x2C)
#define RAIN_SEASON_START_JAN  1
#define RAIN_SEASON_START_FEB  2
#define RAIN_SEASON_START_MAR  3
#define RAIN_SEASON_START_APR  4
#define RAIN_SEASON_START_MAY  5
#define RAIN_SEASON_START_JUN  6
#define RAIN_SEASON_START_JUL  7
#define RAIN_SEASON_START_AUG  8
#define RAIN_SEASON_START_SEP  9
#define RAIN_SEASON_START_OCT  10
#define RAIN_SEASON_START_NOV  11
#define RAIN_SEASON_START_DEC  12

#define ARCHIVE_PERIOD_MINS_1    1
#define ARCHIVE_PERIOD_MINS_5    5
#define ARCHIVE_PERIOD_MINS_10   10
#define ARCHIVE_PERIOD_MINS_15   15
#define ARCHIVE_PERIOD_MINS_30   30
#define ARCHIVE_PERIOD_MINS_60   60
#define ARCHIVE_PERIOD_MINS_120  120

#endif  // DAVISDEF_h
