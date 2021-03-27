# Single Parity Check
* Single Parity checking is the simple mechanism and inexpensive to detect the errors.
* In this technique, a redundant bit is also known as a parity bit which is appended at the end of the data unit so that the number of 1s becomes even. Therefore, the total number of transmitted bits would be 9 bits.
* If the number of 1s bits is odd, then parity bit 1 is appended and if the number of 1s bits is even, then parity bit 0 is appended at the end of the data unit.
* At the receiving end, the parity bit is calculated from the received data bits and compared with the received parity bit.
* This technique generates the total number of 1s even, so it is known as even-parity checking.
