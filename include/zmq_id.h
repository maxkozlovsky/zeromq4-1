#ifndef ZMQ_ID_H
#define ZMQ_ID_H

struct zmq_id {
    unsigned char len;
    unsigned char val[7];
};

#endif //ZMQ_ID_H
