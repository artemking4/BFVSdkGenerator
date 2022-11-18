// Object: EffectBlueprint
// ClassId: 259
// RuntimeId: 40261
// TypeInfo: 0x0000000144E23620
#include "../Entity/ObjectBlueprint.h"
#include "../Entity/TimeDeltaType.h"

#pragma pack(push, 8)
namespace EffectBase {
    class EffectBlueprint : public Entity::ObjectBlueprint {
        Entity::TimeDeltaType TimeDeltaType; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(EffectBlueprint) == 0x58);
}
#pragma pack(pop)