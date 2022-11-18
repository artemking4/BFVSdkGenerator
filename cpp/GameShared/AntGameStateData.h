// Object: AntGameStateData
// ClassId: 107
// RuntimeId: 25024
// TypeInfo: 0x0000000144E84B40
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class AntGameStateData : public Core::DataContainer {
        Int32 PropertyHash; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(AntGameStateData) == 0x20);
}
#pragma pack(pop)