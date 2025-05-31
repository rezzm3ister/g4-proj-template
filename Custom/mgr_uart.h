#ifndef MGR_UART
#define MGR_UART
#include "appl_main.h"
#include "lib_modbus.h"

#define MODB_SIZE 0x1000
extern uint16_t modb_db[MODB_SIZE];

#define MODB_ADDR           0x69


// typedef enum
// {
//     UART_IDLE=0,
//     UART_RECEIVING,
//     UART_TRANSMITTING
// } uart_state_t;



void uart_1msloop(void);
void uart_init(void);

void uart_mainloop(void);
#endif