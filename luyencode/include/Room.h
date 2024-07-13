#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>

class Room {
private:
    std::string RoomID;
    static int numRoom;
public:
    Room(const std::string &ID);
    ~Room();
};

#endif
