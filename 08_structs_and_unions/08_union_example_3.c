#include <stdbool.h>

union {
    struct {
        bool RXC:1;  // USART Receive Complete
        bool TXC:1;  // USART Transmit Complete
        bool UDRE:1; // USART Data Register Empty
        bool FE:1;   // Frame Error
        bool DOR:1;  // Data OverRun
        bool PE:1;   // Parity Error
        bool U2X:1;
        bool MPCM:1;
    } bits;
    unsigned char flags;
} UCSR;

int main(void)
{
    bool status;
    unsigned char state;

    status = UCSR.bits.RXC; // read RXC bit
    UCSR.bits.FE = 0; // clear FE
    state = UCSR.flags; // read all bits in the variable

    return 0;
}
