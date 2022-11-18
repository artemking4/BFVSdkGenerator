// Object: SimpleMovementActionBaseData
// ClassId: 4316
// RuntimeId: 55157
// TypeInfo: 0x0000000144E8F6E0
#include "../GameShared/MovementActionData.h"
#include "../GameShared/SimpleMovementActionTimeData.h"

#pragma pack(push, 8)
namespace GameShared {
    class SimpleMovementActionBaseData : public GameShared::MovementActionData {
        GameShared::SimpleMovementActionTimeData StartTimeInfo; // 0x18
        GameShared::SimpleMovementActionTimeData RunTimeInfo; // 0x20
    }; // 0x28
    static_assert(sizeof(SimpleMovementActionBaseData) == 0x28);
}
#pragma pack(pop)