// Object: StrippedUnlockAsset
// ClassId: 442
// RuntimeId: 5688
// TypeInfo: 0x0000000144DB6210
#include "../GameShared/UnlockAsset.h"
#include "../DiceCommonsShared/BaseDefinition.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class StrippedUnlockAsset : public GameShared::UnlockAsset {
        DiceCommonsShared::BaseDefinition ParentDefinition; // 0x58
        Guid UIParentGuid; // 0x60
    }; // 0x70
    static_assert(sizeof(StrippedUnlockAsset) == 0x70);
}
#pragma pack(pop)