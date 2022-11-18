// Object: CustomizationMetaData
// ClassId: 4378
// RuntimeId: 9194
// TypeInfo: 0x0000000144DB6190
#include "../Entity/ObjectBlueprintMetaData.h"
#include "../DiceCommonsShared/StrippedUnlockAsset.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class CustomizationMetaData : public Entity::ObjectBlueprintMetaData {
        DiceCommonsShared::StrippedUnlockAsset UnlockData; // 0x18
    }; // 0x20
    static_assert(sizeof(CustomizationMetaData) == 0x20);
}
#pragma pack(pop)