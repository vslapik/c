#include <stdbool.h>

#define GET_BIT(r, m)   ((r) & (m))
#define SET_BIT(r, m)   ((r) |= (m))
#define CLEAR_BIT(r, m) ((r) &= ~(m))
#define FLIP_BIT(r, m)  ((r) ^= (m))

#define RXC  0x80 // USART Receive Complete
#define TXC  0x40 // USART Transmit Complete
#define UDRE 0x20 // USART Data Register Empty
#define FE   0x10 // Frame Error
#define DOR  0x08 // Data OverRun
#define PE   0x04 // Parity Error
#define U2X  0x02
#define MPCM 0x01

extern unsigned char UCSR;
int main(void)
{
    bool status;
    status = GET_BIT(UCSR, RXC); // read RXC bit
    CLEAR_BIT(UCSR, FE); // clear FE
    SET_BIT(UCSR, U2X); // set U2X
    FLIP_BIT(UCSR, U2X); // invert U2X bit value
    return 0;
}
