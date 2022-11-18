// Object: BFUICompassIconCreatorEntityData
// ClassId: 2172
// RuntimeId: 42113
// TypeInfo: 0x0000000144D2F9A0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../CasablancaShared/CompassIconType.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUICompassIconCreatorEntityData : public Entity::EntityData {
        CasablancaShared::CompassIconType IconType; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 PositionOverride; // 0x30
        CasablancaShared::BFUIPlayerObject Player; // 0x40
        Boolean IsEnabled; // 0x48
        Boolean PositionOverrideEnabled; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(BFUICompassIconCreatorEntityData) == 0x50);
}
#pragma pack(pop)