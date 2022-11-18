// Object: MissileHealthComponentData
// ClassId: 1939
// RuntimeId: 63992
// TypeInfo: 0x0000000144F43D30
#include "../GameplaySim/GameHealthComponentData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class MissileHealthComponentData : public GameplaySim::GameHealthComponentData {
        Float32 Health; // 0x80
        char pad_0x84[0xC];
    }; // 0x90
    static_assert(sizeof(MissileHealthComponentData) == 0x90);
}
#pragma pack(pop)