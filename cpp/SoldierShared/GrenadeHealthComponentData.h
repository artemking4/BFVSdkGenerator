// Object: GrenadeHealthComponentData
// ClassId: 1938
// RuntimeId: 62851
// TypeInfo: 0x0000000144F43730
#include "../GameplaySim/GameHealthComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class GrenadeHealthComponentData : public GameplaySim::GameHealthComponentData {
        Float32 Health; // 0x80
        Boolean DisarmOnDestroyed; // 0x84
        char pad_0x85[0xB];
    }; // 0x90
    static_assert(sizeof(GrenadeHealthComponentData) == 0x90);
}
#pragma pack(pop)