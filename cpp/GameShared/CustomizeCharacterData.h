// Object: CustomizeCharacterData
// ClassId: 240
// RuntimeId: 65044
// TypeInfo: 0x0000000144E81340
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../GameShared/CustomizeVisual.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class CustomizeCharacterData : public Core::Asset {
        Array<GameShared::CustomizeVisual> VisualGroups; // 0x20
        Array<GameShared::UnlockAssetBase> Unlocks; // 0x28
        Float32 OverrideMaxHealth; // 0x30
        Float32 OverrideCriticalHealthThreshold; // 0x34
        Boolean RestoreToOriginalVisualState; // 0x38
        Boolean ClearVisualState; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(CustomizeCharacterData) == 0x40);
}
#pragma pack(pop)