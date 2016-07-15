#ifndef YOTTA_CFG_MAPPINGS_H
#define YOTTA_CFG_MAPPINGS_H

/**
  * This header file contains mappings from a yotta config.json file for the DAL,
  * to DAL specific #defines used in the DAL.
  */

//DAL mappings
#ifdef YOTTA_CFG_MICROBIT_DAL_HEAP_ALLOCATOR
    #define MICROBIT_HEAP_ALLOCATOR YOTTA_CFG_MICROBIT_DAL_HEAP_ALLOCATOR
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_NESTED_HEAP_PROPORTION
    #define MICROBIT_NESTED_HEAP_SIZE YOTTA_CFG_MICROBIT_DAL_NESTED_HEAP_PROPORTION
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_REUSE_SD
    #define MICROBIT_HEAP_REUSE_SD YOTTA_CFG_MICROBIT_DAL_REUSE_SD
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_GATT_TABLE_SIZE
    #define MICROBIT_SD_GATT_TABLE_SIZE YOTTA_CFG_MICROBIT_DAL_GATT_TABLE_SIZE
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_SYSTEM_TICK_PERIOD
    #define SYSTEM_TICK_PERIOD_MS YOTTA_CFG_MICROBIT_DAL_SYSTEM_TICK_PERIOD
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_SYSTEM_COMPONENTS
    #define MICROBIT_SYSTEM_COMPONENTS YOTTA_CFG_MICROBIT_DAL_SYSTEM_COMPONENTS
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_IDLE_COMPONENTS
    #define MICROBIT_IDLE_COMPONENTS YOTTA_CFG_MICROBIT_DAL_IDLE_COMPONENTS
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_ENABLED
    #define MICROBIT_BLE_ENABLED YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_ENABLED
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_USE_ACCEL_LSB
    #define USE_ACCEL_LSB YOTTA_CFG_MICROBIT_DAL_USE_ACCEL_LSB
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_MIN_DISPLAY_BRIGHTNESS
    #define MICROBIT_DISPLAY_MINIMUM_BRIGHTNESS YOTTA_CFG_MICROBIT_DAL_MIN_DISPLAY_BRIGHTNESS
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_MAX_DISPLAY_BRIGHTNESS
    #define MICROBIT_DISPLAY_MAXIMUM_BRIGHTNESS YOTTA_CFG_MICROBIT_DAL_MAX_DISPLAY_BRIGHTNESS
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_DISPLAY_SCROLL_SPEED
    #define MICROBIT_DEFAULT_SCROLL_SPEED YOTTA_CFG_MICROBIT_DAL_DISPLAY_SCROLL_SPEED
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_DISPLAY_SCROLL_STRIDE
    #define MICROBIT_DEFAULT_SCROLL_STRIDE YOTTA_CFG_MICROBIT_DAL_DISPLAY_SCROLL_STRIDE
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_DISPLAY_PRINT_SPEED
    #define MICROBIT_DEFAULT_PRINT_SPEED YOTTA_CFG_MICROBIT_DAL_DISPLAY_PRINT_SPEED
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_DEFAULT_PULLMODE
    #define MICROBIT_DEFAULT_PULLMODE YOTTA_CFG_MICROBIT_DAL_DEFAULT_PULLMODE
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_PANIC_ON_HEAP_FULL
    #define MICROBIT_PANIC_HEAP_FULL YOTTA_CFG_MICROBIT_DAL_PANIC_ON_HEAP_FULL
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_DEBUG
    #define MICROBIT_DBG YOTTA_CFG_MICROBIT_DAL_DEBUG
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_HEAP_DEBUG
    #define MICROBIT_HEAP_DBG YOTTA_CFG_MICROBIT_DAL_HEAP_DEBUG
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_STACK_SIZE
    #define MICROBIT_STACK_SIZE YOTTA_CFG_MICROBIT_DAL_STACK_SIZE
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_SRAM_BASE
    #define MICROBIT_SRAM_BASE YOTTA_CFG_MICROBIT_DAL_SRAM_BASE
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_SRAM_END
    #define MICROBIT_SRAM_END YOTTA_CFG_MICROBIT_DAL_SRAM_END
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_SD_LIMIT
    #define MICROBIT_SD_LIMIT YOTTA_CFG_MICROBIT_DAL_SD_LIMIT
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_GATT_TABLE_START
    #define MICROBIT_SD_GATT_TABLE_START YOTTA_CFG_MICROBIT_DAL_GATT_TABLE_START
#endif


//Bluetooth mappings
#ifdef YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_PAIRING_MODE
    #define MICROBIT_BLE_PAIRING_MODE YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_PAIRING_MODE
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_PRIVATE_ADDRESSING
    #define MICROBIT_BLE_PRIVATE_ADDRESSES YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_PRIVATE_ADDRESSING
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_OPEN
    #define MICROBIT_BLE_OPEN YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_OPEN
#endif


//we check if the user has requested open mode, otherwise we will double def!
#if (YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_OPEN == 0)

#ifdef YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_WHITELIST
    #define MICROBIT_BLE_WHITELIST YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_WHITELIST
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_ADVERTISING_TIMEOUT
    #define MICROBIT_BLE_ADVERTISING_TIMEOUT YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_ADVERTISING_TIMEOUT
#endif

#ifdef YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_TX_POWER
    #define MICROBIT_BLE_DEFAULT_TX_POWER YOTTA_CFG_MICROBIT_DAL_BLUETOOTH_TX_POWER
#endif

#endif


#endif
