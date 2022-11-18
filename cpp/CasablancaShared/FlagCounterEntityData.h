// Object: FlagCounterEntityData
// ClassId: 2745
// RuntimeId: 3785
// TypeInfo: 0x0000000144D5BD60
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FlagCounterEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        Int32 ObjectiveFlagCount; // 0x24
        Float32 EnemyFlagProgress; // 0x28
        Boolean VisibleInMinimap; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(FlagCounterEntityData) == 0x30);
}
#pragma pack(pop)