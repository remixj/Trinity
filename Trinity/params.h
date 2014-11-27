#ifndef PARAMS_H
#define PARAMS_H

//Rate control interval 
unsigned int CONTROL_INTERVAL_US=1000;

//The following four parameters are used to generate feedback packet
unsigned int FEEDBACK_PACKET_SIZE = 64;
const u16 FEEDBACK_HEADER_SIZE = 20;
const u8 FEEDBACK_PACKET_TTL = 64;
int FEEDBACK_PACKET_IPPROTO = 143; // should be some unused protocol

#endif