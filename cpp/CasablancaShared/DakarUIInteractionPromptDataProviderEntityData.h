// Object: DakarUIInteractionPromptDataProviderEntityData
// ClassId: 2591
// RuntimeId: 10072
// TypeInfo: 0x0000000144D66670
#include "../Entity/EntityData.h"
#include "../GameShared/UnlockAsset.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarUIInteractionPromptDataProviderEntityData : public Entity::EntityData {
        Array<GameShared::UnlockAsset> WeaponTierAssets; // 0x20
        CString UIMetaDataType; // 0x28
        Boolean IsEnabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(DakarUIInteractionPromptDataProviderEntityData) == 0x38);
}
#pragma pack(pop)