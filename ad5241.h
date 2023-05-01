#ifndef AD5241_H
#define AD5241_H

#define AD5241_SLA_W    0x58
#define AD5241_SLA_R    0x59

#define AD5241_WIPER_0  0x00

void AD5241_write(unsigned char instruction, unsigned char data)
{
    Wire_Start();
    Wire_Write(AD5241_SLA_W);
    Wire_Write(instruction);
    Wire_Write(data);
    Wire_Stop();
}

void AD5241_Voltage(unsigned char wiper, double voltage)
{
    voltage = (double)(voltage / 0.01960);    
    AD5241_write(wiper, (unsigned char) voltage );
}

#endif // // AD5254
