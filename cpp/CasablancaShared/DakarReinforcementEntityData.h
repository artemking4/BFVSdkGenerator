// Object: DakarReinforcementEntityData
// ClassId: 2582
// RuntimeId: 58883
// TypeInfo: 0x0000000144D50150
#include "../Entity/EntityData.h"
#include "../CasablancaShared/SquadItemBase.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DakarReinforcementEntityData : public Entity::EntityData {
        CasablancaShared::SquadItemBase CallinItemData; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 TargetPosition; // 0x30
        Core::Vec3 LaunchPosition; // 0x40
        Float32 OrderDelay; // 0x50
        char pad_0x54[0xC];
    }; // 0x60
    static_assert(sizeof(DakarReinforcementEntityData) == 0x60);
}
#pragma pack(pop)