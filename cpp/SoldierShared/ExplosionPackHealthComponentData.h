// Object: ExplosionPackHealthComponentData
// ClassId: 1937
// RuntimeId: 39297
// TypeInfo: 0x0000000144F43DB0
#include "../GameplaySim/GameHealthComponentData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class ExplosionPackHealthComponentData : public GameplaySim::GameHealthComponentData {
        Boolean OnDamageExplosionInheritUnlock; // 0x80
        char pad_0x81[0xF];
    }; // 0x90
    static_assert(sizeof(ExplosionPackHealthComponentData) == 0x90);
}
#pragma pack(pop)