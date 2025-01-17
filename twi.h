#ifndef TWI_H
#define TWI_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef TWI_FREQ
#define TWI_FREQ 100000UL
#endif

#ifndef TWI_BUFFER_LENGTH
#define TWI_BUFFER_LENGTH 32
#endif

void twi_init();
void twi_write(uint8_t address, uint8_t* data, uint8_t length, void (*callback)(uint8_t, uint8_t *));
void twi_read(uint8_t address, uint8_t length, void (*callback)(uint8_t, uint8_t *));
uint8_t *twi_wait();

#ifdef __cplusplus
}
#endif

#endif // TWI_H
