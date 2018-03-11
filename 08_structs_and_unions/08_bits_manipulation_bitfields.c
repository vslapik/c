#include <stdbool.h>

struct {
    bool RXC:1;  // USART Receive Complete
    bool TXC:1;  // USART Transmit Complete
    bool UDRE:1; // USART Data Register Empty
    bool FE:1;   // Frame Error
    bool DOR:1;  // Data OverRun
    bool PE:1;   // Parity Error
    bool U2X:1;
    bool MPCM:1;
} UCSR;

int main(void)
{
    bool status;

    status = UCSR.RXC; // read RXC bit
    UCSR.FE = 0; // clear FE
    UCSR.U2X = 1; // set U2X
    UCSR.U2X = !UCSR.U2X; // invert U2X bit value

    return 0;
}
