// Object: MovementImpactEffectEntityData
// ClassId: 2892
// RuntimeId: 61686
// TypeInfo: 0x0000000144C4F6E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Casablanca/ImpactEffectData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class MovementImpactEffectEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<Casablanca::ImpactEffectData> EffectDatas; // 0x28
        Boolean Enabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(MovementImpactEffectEntityData) == 0x38);
}
#pragma pack(pop)