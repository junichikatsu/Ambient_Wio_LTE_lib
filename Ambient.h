/*
 * ambient.h - Library for sending data to Ambient
 * Created by Junichi Katsu, April 19, 2017
 */
#ifndef Ambient_h
#define Ambient_h

#include <WioLTEforArduino.h>
#include <WioLTEClient.h>
#include <stdio.h>

#define AMBIENT_WRITEKEY_SIZE 18
#define AMBIENT_MAX_RETRY 5
#define AMBIENT_DATA_SIZE 24
#define AMBIENT_NUM_PARAMS 11
#define AMBIENT_TIMEOUT 3000 // milliseconds

class Ambient
{
public:

    Ambient(void);

    bool begin(unsigned int channelId, const char * writeKey, WioLTEClient * c, int dev = 0);
    bool set(int field,const char * data);
	bool set(int field, double data);
	bool set(int field, int data);
    bool clear(int field);

    bool send(void);
    int bulk_send(char * buf);
    bool delete_data(const char * userKey);

private:

    WioLTEClient * client;
    unsigned int channelId;
    char writeKey[AMBIENT_WRITEKEY_SIZE];
    int dev;
    char host[18];
    int port;

    struct {
        int set;
        char item[AMBIENT_DATA_SIZE];
    } data[AMBIENT_NUM_PARAMS];
};

#endif // Ambient_h
