// Object: UnlockComponentData
// ClassId: 1866
// RuntimeId: 41007
// TypeInfo: 0x0000000144E82040
#include "../Entity/GameComponentData.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../Global/Guid.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../GameShared/UnlockSpawnType.h"
#include "../GameShared/ComponentCustomizationMetaData.h"

#pragma pack(push, 16)
namespace GameShared {
    class UnlockComponentData : public Entity::GameComponentData {
        GameShared::UnlockAssetBase UnlockAsset; // 0x80
        Guid UnlockAssetGuid; // 0x88
        Uint32 UnlockIdentifier; // 0x98
        GameShared::UnlockSpawnType UnlockOnSpawn; // 0x9C
        GameShared::ComponentCustomizationMetaData MetaData; // 0xA0
        Boolean InvertUnlockTest; // 0xA8
        Boolean UnlockableFromAllEntries; // 0xA9
        Boolean EvaluateOnce; // 0xAA
        Boolean DeactivateCheckOnEnteringEntry; // 0xAB
        char pad_0xAC[0x4];
    }; // 0xB0
    static_assert(sizeof(UnlockComponentData) == 0xB0);
}
#pragma pack(pop)