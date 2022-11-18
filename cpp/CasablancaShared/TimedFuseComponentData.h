// Object: TimedFuseComponentData
// ClassId: 1861
// RuntimeId: 16420
// TypeInfo: 0x0000000144D404D0
#include "../Entity/GameComponentData.h"
#include "../Entity/MaterialDecl.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class TimedFuseComponentData : public Entity::GameComponentData {
        Entity::MaterialDecl AirDetonationImpactMaterialPair; // 0x80
        char pad_0x84[0xC];
    }; // 0x90
    static_assert(sizeof(TimedFuseComponentData) == 0x90);
}
#pragma pack(pop)