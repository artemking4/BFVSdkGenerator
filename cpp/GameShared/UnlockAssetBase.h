// Object: UnlockAssetBase
// ClassId: 432
// RuntimeId: 17130
// TypeInfo: 0x0000000144E8E660
#include "../Core/DataContainerPolicyAsset.h"
#include "../GameShared/UnlockUserDataBase.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../GameShared/UnlockAvailability.h"

#pragma pack(push, 8)
namespace GameShared {
    class UnlockAssetBase : public Core::DataContainerPolicyAsset {
        GameShared::UnlockUserDataBase UnlockUserData; // 0x20
        CString DebugUnlockId; // 0x28
        Uint32 Identifier; // 0x30
        Uint32 UnlockScore; // 0x34
        Uint32 SubCategoryIdentifier; // 0x38
        char pad_0x3C[0x4];
        GameShared::UnlockAssetBase NextLevelUnlockAsset; // 0x40
        GameShared::UnlockAvailability AvailableForPlayer; // 0x48
        Boolean AutoAvailable; // 0x4C
        Boolean IgnoreAllUnlocked; // 0x4D
        Boolean HiddenInProgression; // 0x4E
        Boolean HiddenIfLocked; // 0x4F
        Boolean DefaultUnlocked; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(UnlockAssetBase) == 0x58);
}
#pragma pack(pop)